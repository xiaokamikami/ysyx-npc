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

char *strcpy(char *dst, const char *src) {
  assert(dst);
  assert(src);
  char *ret = dst;
  while ( (*ret++ = *src++)!='\0');
  return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
  assert(dst);
  assert(src);
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

char *strcat(char *dst, const char *src) {
  assert(dst);
  assert(src);
  char *p =dst;
  while (*p)
  {
    p++;
  }
  while ((*p++ = *src++) !='\0');
  return p;
}

int strcmp(const char *str1, const char *str2) {
  assert(str1);
	assert(str2);
	while ((*str1 !='\0')&& (*str1==*str2)){
		str1++;
		str2++;
	}
	if ((*(unsigned char *)str1) > (*(unsigned char *)str2))
		return 1;
	else if ((*(unsigned char *)str1) < (*(unsigned char *)str2))
		return -1;
	else
		return 0;
}

int strncmp(const char *str1, const char *str2, size_t n) {
  assert(str1);
  assert(str2);
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

void *memset(void *s, int c, size_t n) {
  assert(s);
  char *p = s;
  size_t i = 0;
  while (i<n)
  {
    p[i]=c;
    i++;
  }
  return (void *)p;
}

void *memmove(void *dst, const void *in, size_t len) {
  assert(dst);
  assert(in);
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

void *memcpy(void *out, const void *in, size_t n) {
  if ((NULL==out) || (NULL==in))
    assert(0);
  char *d = (char *)out;
  char *s = (char *)in;
  //Check for overlapping buffers:
  if ( (d<=s) || (d>=s+n) )
  {     
    //Do normal (Upwards) Copy
    while (n-- > 0)
    *d++ = *s++;
  }
	return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  assert(s1);
	assert(s2);
 
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
