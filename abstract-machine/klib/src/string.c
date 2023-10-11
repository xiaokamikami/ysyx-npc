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
//   // 如果超过maxlen就返回maxlen，不包含'\0'
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
//添加字符串到末尾
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
//全字符串匹配
int strcmp(const char *s1, const char *s2) {
  assert(s1 != NULL && s2 != NULL);
  // 如果*s1不等于'\0'并且和*s2相等（也保证了*s2不等于'\0'），则继续下去
  while (*s1 && (*s1 == *s2)) {
    ++ s1;
    ++ s2;
  }
  // 如果不相等（某个字符不相等，或者s1是'\0'但s2不是）
  return *s1 - *s2;
}
//部分字符串匹配
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
//写入C N长度到S
//通过展开的方式，减少分支指令的开销
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
//把指针in的数据复制len长度给out  处理内存重叠情况
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
//把指针in的数据复制len长度给out  不处理内存重叠情况
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
        if ((size_t)d % 4 == 0 && (size_t)s % 4 == 0 && n >= 32) {    //小端对齐 大数据拷贝  一次写8*4字节
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
            while(n>=8){        //展开访存指令为连续 ， 由于IF的存在，分支指令的消耗 需要有大于5次访存才能保证有收益
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
  
   
            //处理最后的  
            while (n > 0) {
              *d++ = *s++;  
              n--; 
            }
 
        }  
     
    return out;  
}

//比较两个内存的值  相同返回0 不同返回差值
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
