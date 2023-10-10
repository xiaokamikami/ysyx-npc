#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t count =  0;
  assert(s);
  while (*s != '\0')
  {
    count++;
    s++;
  }
  return count;
}
// size_t strnlen(const char *s, size_t maxlen) {
//   assert(s != NULL);
//   size_t cnt;
//   // �������maxlen�ͷ���maxlen��������'\0'
//   for (cnt = 0; cnt < maxlen; ++ cnt)
//     if (s[cnt] == '\0')
//       break;
//   return cnt;
// }

char *strcpy(char *dst, const char *src) {
  assert(dst != NULL && src != NULL);
  char *ret = dst;
  while ( (*ret++ = *src++)!='\0');
  return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
  assert(dst != NULL && src != NULL);
  char *ret = dst;
  while (n)
  {
    if ((*ret = *src)!='\0')
    {
      src++;
    }
    ret++;
    n--;
  }
  return ret;
}
//����ַ�����ĩβ
char *strcat(char *dst, const char *src) {
  assert(dst != NULL && src != NULL);
  char *p =dst;
  while (*p)
  {
    p++;
  }
  while ((*p++ = *src++) !='\0');
  return p;
}
//ȫ�ַ���ƥ��
int strcmp(const char *s1, const char *s2) {
  assert(s1 != NULL && s2 != NULL);
  // ���*s1������'\0'���Һ�*s2��ȣ�Ҳ��֤��*s2������'\0'�����������ȥ
  while (*s1 && (*s1 == *s2)) {
    ++ s1;
    ++ s2;
  }
  // �������ȣ�ĳ���ַ�����ȣ�����s1��'\0'��s2���ǣ�
  return *s1 - *s2;
}
//�����ַ���ƥ��
int strncmp(const char *str1, const char *str2, size_t n) {
  assert(str1  && str2);
  while (n){
		str1++;
		str2++;
    n--;
	}
	if ((*(unsigned char *)str1) > (*(unsigned char *)str2))
		return 1;
	else if ((*(unsigned char *)str1) < (*(unsigned char *)str2))
		return -1;
	else
		return 0;
}
//д��C N���ȵ�S
//ͨ��չ���ķ�ʽ�����ٷ�ָ֧��Ŀ���
void *memset(void *s, int c, size_t n) {
  assert(s);
  char *p = s;
  //size_t i = 0;
  while (n>8)
  {
      p[n]=c;
      n--;
      p[n]=c;
      n--;
      p[n]=c;
      n--;
      p[n]=c;
      n--;

      p[n]=c;
      n--;
      p[n]=c;
      n--;
      p[n]=c;
      n--;
      p[n]=c;
      n--;
  }
  
  while (n>0)
  {
      p[n]=c;
      n--;
  }
  //printf("memset \n");
  return (void *)p;
}
//��ָ��in�����ݸ���len���ȸ�out  �����ڴ��ص����
void *memmove(void *dst, const void *in, size_t len) {
  assert(dst && in);
  if(dst < in){
    for (int i =0; i <=len; ++i) {
      *((char*)dst + i) = *((char*)in + i);
    }
  }
  else{
    while(len) {
      *((char*)dst + len) = *((char*)in + len);
      len--;
    }
  }

	return dst;
}
//��ָ��in�����ݸ���len���ȸ�out  �������ڴ��ص����
void *memcpy(void *out, const void *in, size_t n) {  
    assert(out && in);  
    char *d = (char *)out;  
    char *s = (char *)in;  
  
    // Check for overlapping buffers:  
    if ((d <= s) || (d >= s + n)) {  
        // Do normal (Upwards) Copy  
        // if ((uintptr_t)d % 8 == 0 && (uintptr_t)s % 8 == 0 && n >= 8) {  
        //     // Both input and output are 8-byte aligned, and we have at least 8 bytes to copy.  
        //     while (n >= 8) {  
        //         *(uint64_t *)d = *(uint64_t *)s;  
        //         d += 8;  
        //         s += 8;  
        //         n -= 8;  
        //     }  
        // } else  
        if ((size_t)d % 4 == 0 && (size_t)s % 4 == 0 && n >= 32) {    //С�˶��� �����ݿ���  һ��д8*4�ֽ�
            // Both input and output are 4-byte aligned, and we have at least 4 bytes to copy.  
            while (n >= 32) {  
                *(uint32_t *)(d) = *(uint32_t *)(s); 
                *(uint32_t *)(d+4) = *(uint32_t *)(s+4);  
                *(uint32_t *)(d+8) = *(uint32_t *)(s+8);  
                *(uint32_t *)(d+12) = *(uint32_t *)(s+12);  

                *(uint32_t *)(d+16) = *(uint32_t *)(s+16);  
                *(uint32_t *)(d+20) = *(uint32_t *)(s+20); 
                *(uint32_t *)(d+24) = *(uint32_t *)(s+24);   
                *(uint32_t *)(d+28) = *(uint32_t *)(s+28); 

                d += 32;
                s += 32;
                n -= 32;
            }  
            //printf("memcpy 32\n");
        }  else {
            while(n>=8){        //չ���ô�ָ��Ϊ���� �� ����IF�Ĵ��ڣ���ָ֧������� ��Ҫ�д���5�ηô���ܱ�֤������
              *d++ = *s++;  
              *d++ = *s++;
              *d++ = *s++; 
              *d++ = *s++; 

              *d++ = *s++; 
              *d++ = *s++; 
              *d++ = *s++; 
              *d++ = *s++;  


              n-=8; 
            }
            while (n > 0) {
              *d++ = *s++;  
              n--; 
            }
            return out;
        }

        // Copy the remaining bytes (less than)  
  
   
            //��������  
            while (n > 0) {
              *d++ = *s++;  
              n--; 
            }
 
        }  
     
    return out;  
}

//�Ƚ������ڴ��ֵ  ��ͬ����0 ��ͬ���ز�ֵ
int memcmp(const void *s1, const void *s2, size_t n) {
  assert(s1 && s2);

	while (n)
	{
		if (*(char*)s1 != *(char*)s2) 
		{
			return *(char*)s1 - *(char*)s2;
		}
		s1 = (char*)s1 + 1;              
		s2 = (char*)s2 + 1;
    n--;
	}
	return 0;                       
}

#endif
