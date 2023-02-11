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
  Elf_Ehdr ehdr={};
  Elf_Phdr phdr={};
  printf("[loader]:filename : %s\n", filename);
  int fd=fs_open(filename,0,0);

  //uintptr_t file_offset,file_len;
  //fs_load(fd,&file_offset,&file_len);   //读取在硬盘中的位置
  //Log("file offset %ld  len: %ld ",file_offset,file_len);
  fs_read(fd, &ehdr, sizeof(ehdr));

  //检查elf
  assert(*(uint32_t *)ehdr.e_ident == 0x464c457f);
  assert(ehdr.e_machine == EXPECT_TYPE);
  
  assert(ehdr.e_entry);
  uintptr_t program_star=ehdr.e_entry;
  
  for (int i=0; i < ehdr.e_phnum; i++)
  {
    fs_lseek(fd, ehdr.e_phoff + i * ehdr.e_phentsize, SEEK_SET);
    fs_read(fd, &phdr, sizeof(phdr));
    
    if( phdr.p_type== PT_LOAD){ //可加载类型
      Log("header type: PT_LOAD,mem start %lx end %lx",phdr.p_vaddr,phdr.p_vaddr+phdr.p_memsz);
      fs_lseek(fd, phdr.p_offset, SEEK_SET);
      // 加载数据到内存中
      fs_read(fd, (void *)phdr.p_vaddr, phdr.p_filesz);

      memset((void *)(phdr.p_vaddr + phdr.p_filesz), 0, phdr.p_memsz - phdr.p_filesz);
    }
  }
  return program_star;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

