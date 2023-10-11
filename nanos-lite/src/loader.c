#include <proc.h>
#include <elf.h>
#include <common.h>
#include <stdlib.h>
#include "fs.h"
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif
#if defined(__ISA_AM_NATIVE__)
#define EXPECT_TYPE EM_X86_64
#elif defined(__ISA_X86__)
#define EXPECT_TYPE EM_386  // see /usr/include/elf.h to get the right type
#elif defined(__ISA_MIPS32__)
#define EXPECT_TYPE EM_MIPS_X
#elif defined(__ISA_RISCV32__) || defined(__ISA_RISCV64__)
#define EXPECT_TYPE EM_RISCV  
#else
#error Unsupported ISA
#endif
static uintptr_t loader(PCB *pcb, const char *filename) {
//加载新的内存 需要刷新cache

  Elf_Ehdr ehdr={};
  Elf_Phdr phdr={};
  assert(filename!=NULL);
  printf("[loader]:filename : %s\n", filename);
  int fd=fs_open(filename,0,0);

  //uintptr_t file_offset,file_len;
  //fs_load(fd,&file_offset,&file_len);   //读取在硬盘中的位置
  //Log("file offset %ld  len: %ld ",file_offset,file_len);
  fs_read(fd, &ehdr, sizeof(ehdr));

  //检查elf是否符合riscv
  assert(*(uint32_t *)ehdr.e_ident == 0x464c457f);
  assert(ehdr.e_machine == EXPECT_TYPE);
  
  assert(ehdr.e_entry);
  uintptr_t program_star=ehdr.e_entry; //记录程序入口
  
  //循环遍历LOAD类型并加载到内存中
  //加载区间     [VirtAddr, VirtAddr + MemSiz)
  //.bss清零区间 [VirtAddr + FileSiz, VirtAddr + MemSiz)
  for (int i=0; i < ehdr.e_phnum; i++)
  {
    fs_lseek(fd, ehdr.e_phoff + i * ehdr.e_phentsize, SEEK_SET);
    fs_read(fd, &phdr, sizeof(phdr));
    
    if( phdr.p_type== PT_LOAD){ //可加载类型
      Log("header type: PT_LOAD,mem start %lx end %lx",phdr.p_vaddr,phdr.p_vaddr+phdr.p_memsz);
      fs_lseek(fd, phdr.p_offset, SEEK_SET);
      // 加载数据到内存中
      fs_read(fd, (void *)phdr.p_vaddr, phdr.p_memsz);

      // 为.bss加载空内存区间
      memset((void *)(phdr.p_vaddr + phdr.p_filesz), 0, phdr.p_memsz - phdr.p_filesz);
    }
  }

  return program_star;
}

#define PC_START 0x80000000
#define PC_END   0x88000000

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  #ifdef __ISA_RISCV64__ 
    assert( entry >= PC_START && entry<PC_END);//检测目标程序起点
    Log("Fence_i start ");//转入新程序之前，需要先执行FENCE.I
    asm volatile("fence.i":::"memory");
    Log("Fence_i ok ");
  #endif
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

