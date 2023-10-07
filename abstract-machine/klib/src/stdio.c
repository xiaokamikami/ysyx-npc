#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#define ZEROPAD	1		/* pad with zero �0*/
#define SIGN	2		/* unsigned/signed long */
#define PLUS	4		/* show plus ��ʾ+*/
#define SPACE	8		/* space if plus ���Ͽո�*/
#define LEFT	16		/* left justified �����*/
#define SPECIAL	32		/* 0x /0*/
#define LARGE	64		/* �� 'ABCDEF'/'abcdef' */
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
//���������������Ϊ512�ֽڴ�С
static char sprint_buf[512];

//����֮�����Ӧת��
uint32_t __attribute__((weak)) __div64_32(uint64_t *n, uint32_t base);
#define do_div(n,base) ({			\
	unsigned int __base = (base);   \
	unsigned int __rem;				\
	(void)(((typeof((n)) *)0) == ((unsigned long long*)0));	\
	if (((n) >> 32) == 0) {							\
		__rem = (unsigned int)(n) % __base;			\
		(n) = (unsigned int)(n) / __base;			\
	} else											\
		__rem = __div64_32((uint64_t *)&(n), __base);			\
	__rem;											\
})

static int skip_atoi(const char **s);
size_t strnlen(const char * s, size_t count);

static char * number(char * str, unsigned long long num, int base, int size, int precision, int type);

int printf(const char *fmt, ...) {
  va_list args;
  int val=0;
	va_start(args, fmt);
	va_end(args);//�������
	val = vsprintf(sprint_buf, fmt, args);
	if(val){
		putstr(sprint_buf);
	}
  return 0;
} 

//*fmt:%[flags][width][.precision][length]specifier
int vsprintf(char *buf, const char *fmt, va_list args) {
  int len;
  unsigned long long num;
  int i,base;
  char *str;
  const char*s;
  int flags = 0;
  int field_width;
  int precision;		
  int qualifier;	
  for (str=buf ; *fmt; ++fmt)
  {
    if (*fmt != '%') 
    {    //found %
      *str++ = *fmt;
      continue;
		}
      /* process flags */
    flags = 0;
    repeat:
    ++fmt;				    //������һ�� '%'
    switch (*fmt) 		//�ж�%������ַ����Ը�ʽ������ı�־�Ĵ���
    {		
      case '-': flags |= LEFT; goto repeat;   //flags=10000(2bits)
      case '+': flags |= PLUS; goto repeat;   //flags=100
      case ' ': flags |= SPACE; goto repeat;  //flags=1000
      case '#': flags |= SPECIAL; goto repeat;//flags=10 0000
      case '0': flags |= ZEROPAD; goto repeat;//flags=1
    }
    field_width = -1;
    if('0'<= *fmt && *fmt <= '9'){
      field_width = skip_atoi(&fmt);
    }
    else if (*fmt == '*')
    {
      ++fmt;
      field_width = va_arg(args,int);
      if (field_width < 0) //left align
      {	
		field_width = -field_width;
		flags |= LEFT;
	  }
    }
	// ��ȡ���� 
	precision = -1;
	if (*fmt == '.') {
		++fmt;	
		if ('0' <= *fmt && *fmt <= '9')
		  precision = skip_atoi(&fmt);//��þ���
		else if (*fmt == '*') //�ɱ侫�ȣ�printf("%.*f",2,3.1415);-->3.14
    	{
				++fmt;
				/* ��ȡ��ʾ���ȵĲ���(���������ͻ�ȡ) */
				precision = va_arg(args, int);
		}
		if (precision < 0)//���Ȳ���С��0
			precision = 0;
	}
		//��ȡת�����η�,��%hd��%ld��%lld��%Lf...�е�h��l��L��Z (ll��q����)
	qualifier = -1;
	if (*fmt == 'l' && *(fmt + 1) == 'l') {
		qualifier = 'q';//��ll
		fmt += 2;
	} 
  else if (*fmt == 'h' || *fmt == 'l' || *fmt == 'L'|| *fmt == 'Z') {
		qualifier = *fmt;
		++fmt;
	}

  base = 10;//Ĭ��ʮ����
		//��c��s��p��n��%��o��������
	switch (*fmt) {
		//ת����ʽ��Ϊ%c
		case 'c'://���û���С�-����������ֿ�-1���ո�������ַ�
			if (!(flags & LEFT))//���û��'-'��Ƿ�
				while (--field_width > 0)
					*str++ = ' ';//�����ֶ�����ո�' '
            /*��ȡ�ַ�����ʱ������int���ͻ�ȡ��ǿתΪunsigned char��
                Ϊ�˻�ȡ�����б�֤���Ȳ���ʧ��*/
			*str++ = (unsigned char) va_arg(args, int);
	        // �����'-'��������ַ�����ո�,ע������--�ģ�����ʵ�ʿո���������ֶ���1���ڼ�					�ϲ����͸պù���ȣ�����printf("%5d",2);������ո�ո�ո�ո�2��
			while (--field_width > 0)
				*str++ = ' ';
			continue;
	
		//ת����ʽ��Ϊ%s           
		case 's':
			s = va_arg(args, char *);//char*��ʽ��ȡ����
			if (!s)                  //����ַ��������ڣ��򷵻�(NULL)
				s = "<NULL>";
                
	        /*����ַ������ַ��������ھ��ȣ�lenΪ���ȣ�
	        ����lenΪ�ַ�����,�����ȱ�ʾ���ַ�������ַ��ĸ���*/
			len = strnlen(s, precision);
	         //����'-',��printf("%-s","hello");
			if (!(flags & LEFT))
				while (len < field_width--)
					*str++ = ' ';
			for (i = 0; i < len; ++i)
				*str++ = *s++;
			while (len < field_width--)
				*str++ = ' ';
			continue;
	
	    //�����ʽ��%p       
		case 'p':
			if (field_width == -1) //���û�������ֶο��
      { 
        /*�ֿ�Ϊ8��16(����ϵͳ����)����Ϊ2��λ��ʾһ��ֱ�ӣ�
        ����32λϵͳָ���Сλ4�ֽڣ�oxFF FF FF FF,��Ҫ8���ֿ���ܴ洢*/
				field_width = 2*sizeof(void *);
				flags |= ZEROPAD;   //flags = 1;����ǰ�油0
			}
	    //תΪ16���Ʋ������������
			str = number(str,(unsigned long) va_arg(args, void *), 16,field_width, precision, flags);
			continue;
		//bufΪ1024�ֽڿռ���������������̬char���飩
		case 'n':
			if (qualifier == 'l') {
				long * ip = va_arg(args, long *);
				*ip = (str - buf);//��ȡ������������еĸ���
			} else if (qualifier == 'Z') {
				size_t * ip = va_arg(args, size_t *);
				*ip = (str - buf);
			} else {
				int * ip = va_arg(args, int *);
				*ip = (str - buf);
			}
			continue;
	
		case '%':
			*str++ = '%';
			continue;
		/* integer number formats - set up the flags and "break" */
		case 'o':
			base = 8;
			break;
		case 'X':
			flags |= LARGE;//Сдת��д
		case 'x':  //ʮ������
			base = 16;
			break;
		case 'd':	//ʮ����
		case 'i':
			flags |= SIGN;
		case 'u':	//�޷���
			break;
		default:
			*str++ = '%';
			if (*fmt)
				*str++ = *fmt;
			else
				--fmt;
			continue;
		}
  if (qualifier == 'l') 
  {
		num = va_arg(args, unsigned long);
		if (flags & SIGN)
		  num = (signed long) num;
	} 
  else if (qualifier == 'q') {
		num = va_arg(args, unsigned long long);
		if (flags & SIGN)
		  num = (signed long long) num;
  } 
  else if (qualifier == 'Z') {
		num = va_arg(args, size_t);
	} 
  else if (qualifier == 'h') {
    //���������ʱ��������������ȡ��������תΪ�������������֤��ȡ�����о��Ȳ���ʧ
		num = (unsigned short) va_arg(args, int);
		if (flags & SIGN)
			num = (signed short) num;
	} 
  else {
    //û�������־�ĸ�ʽ����һ�������޷������ͻ�ȡ����תΪ�з�������
		num = va_arg(args, unsigned int);
		if (flags & SIGN)
			num = (signed int) num;
	}
    //ת��Ϊ��Ӧ�ĸ����ٴ浽��������
	  str = number(str, num, base, field_width, precision, flags);
	}
	*str = '\0';//�����'\0'����
	return str-buf;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  int val;
	va_start(args, fmt);
	val=vsprintf(out,fmt,args);
	va_end(args);
	return val;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    // ����vsprintf��������ʽ�����ַ���������ַ�������
    int result = vsprintf(out, fmt, ap);

    va_end(ap);
    return result;  // ��������ַ����ܸ���
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}


static int skip_atoi(const char **s)//get
{
	int i, c;
	for (i = 0; '0' <= (c = **s) && c <= '9'; ++*s)
		i = i*10 + c - '0';
	return i;
}

//ͳ���ַ������ַ�����(������\0)�������������count���򷵻�count�����򷵻��ַ�����
size_t strnlen(const char * s, size_t count)//size_t��unsigned long long�ĺ�
{
	const char *sc;

	for (sc = s; count-- && *sc != '\0'; ++sc)
		/* nothing */;
	return sc - s;
}

//���ض��Ľ��Ƹ�ʽ������ַ�
static char * number(char * str, unsigned long long num, int base, int size, int precision, int type)
{
	char c,sign,tmp[66];
	const char *digits="0123456789abcdefghijklmnopqrstuvwxyz";
	int i;

	if (type & LARGE)//�����д�ַ�������ʮ������0XFF112233AA
		digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if (type & LEFT)//�����'-'���������������룬��ȡ��ǰ�油0
		type &= ~ZEROPAD;
	if (base < 2 || base > 36)
		return 0;
	c = (type & ZEROPAD) ? '0' : ' ';//�����־����0��0�����򲹿ո�����%02d
	sign = 0;//����
	
	if (type & SIGN) //�з������޷��ŵ�ת��
    {
		if ((signed long long)num < 0) 
        {
			sign = '-';
			num = - (signed long long)num;//ȡ��ֵ
			size--;//�ֶο�ȼ�1
		} else if (type & PLUS) //��ʾ+
        {
			sign = '+';
			size--;
		} else if (type & SPACE)//��ո�
        {
			sign = ' ';
			size--;
		}
	}
	
    //����ʮ�������ֿ�����
	if (type & SPECIAL) //ʮ��������ʾ
    {
		if (base == 16)
			size -= 2;//0x
		else if (base == 8)
			size--;//0
	}
	
	i = 0;
	if (num == 0)//�������Ϊ0�����¼�ַ�0
		tmp[i++]='0'; //tmp�е����ݻ�ŵ���������
	else while (num != 0) //ѭ��,num /= base
    {
		tmp[i++] = digits[do_div(num, base)];	//������ת��,�͵�ַ�Ƚ�tmp��
	}
    //��ַ���ȴ��ھ��ȣ�ֱ�Ӱ���ַ���������������ȴ��ڵ�ַλ�����Ȳ��ո�
    //���磺printf("%18p\n",&a);-->�ո�ո�00000000FAF27284
	if (i > precision)
		precision = i;
	size -= precision;
	if (!(type&(ZEROPAD+LEFT)))//û��'-'�Ͳ�0,ֱ�Ӳ��ո�
		while(size-->0)
			*str++ = ' ';
	if (sign)//����з��ţ�������ţ����Ű�����'-','+','',0
		*str++ = sign;
    
	if (type & SPECIAL) //���8���ƻ�16���Ʒ���0��0x
    {
		if (base==8)
			*str++ = '0';
		else if (base==16) 
        {
			*str++ = '0';
			*str++ = digits[33];//x��X
		}
	}
    
	if (!(type & LEFT))//û��-
		while (size-- > 0)
			*str++ = c;//cΪ0��ո�
	while (i < precision--)//iΪת�������tmp���ַ��ĸ���
		*str++ = '0';
	while (i-- > 0)
		*str++ = tmp[i];//tmp�д洢��ת���˵Ĳ���
	while (size-- > 0)
		*str++ = ' ';
	return str;
}

uint32_t __attribute__((weak)) __div64_32(uint64_t *n, uint32_t base)
{
	uint64_t rem = *n;
	uint64_t b = base;
	uint64_t res, d = 1;
	uint32_t high = rem >> 32;

	/* Reduce the thing a bit first */
	res = 0;
	if (high >= base) {
		high /= base;
		res = (uint64_t) high << 32;
		rem -= (uint64_t) (high*base) << 32;
	}

	while ((int64_t)b > 0 && b < rem) {
		b = b+b;
		d = d+d;
	}

	do {
		if (rem >= b) {
			rem -= b;
			res += d;
		}
		b >>= 1;
		d >>= 1;
	} while (d);

	*n = res;
	return rem;
}

#endif
