#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <assert.h>
#include "ref.h"
#include "memory.h"
#include "Vysyx_22041412_cpu.h"
typedef uint64_t paddr_t;
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
#define PG_ALIGN __attribute((aligned(4096)))
#if defined(CONFIG_PMEM_MALLOC)
uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
uint8_t pmem[CONFIG_MSIZE]= {};

#endif

extern Vysyx_22041412_cpu *top;
// pmem_read
static inline paddr_t host_read(void *addr, int len);
uint8_t *guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }


// read.bin
long load_image(char *filename)
{
  if (filename == NULL)
  {
    return 4096; // built-in image size
  }
  FILE *fp = fopen(filename, "rb");
  assert("Can not open");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  printf("imm:%x\n",*pmem);
  //assert(ret == 1);
  fclose(fp);
  //uint64_t addr = CONFIG_MBASE;
  //printf("\033[1;32mfirst inst: 0x%08lx \33[0m\n", host_read(guest_to_host(addr), 4));
  return size;
}




static inline paddr_t host_read(void *addr, int len)
{
  switch (len)
  {
    case 1:
      return *(uint8_t *)addr;
    case 2:
      return *(uint16_t *)addr;
    case 4:
      return *(uint32_t *)addr;
    case 8:
       return *(uint64_t *)addr;
    default:
    {
      assert(0);
      return 0;
    }
  }
}

static inline void host_write(void *addr, int len, uint64_t data)
{
  switch (len)
  {
  case 1:
    *(uint8_t *)addr = data; return;
  case 2:
    *(uint16_t *)addr = data; return;
  case 4:
    *(uint32_t *)addr = data; return;
  case 8:
    *(uint64_t *)addr = data; return;
  default:
    printf("len:%d\n",len);
    assert(0);
  }
}

uint64_t pmem_read(paddr_t addr, size_t len)
{ 
  uint64_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

void pmem_write(paddr_t addr, size_t len, uint64_t data)
{ 
  host_write(guest_to_host(addr), len, data);
}