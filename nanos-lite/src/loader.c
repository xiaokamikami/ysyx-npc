#include <proc.h>
#include <elf.h>
#include <ramdisk.h>
#include <common.h>
#include <stdlib.h>
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif


static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf64_Ehdr ehdr={};
  Elf64_Phdr phdr={};
  uintptr_t program_star=0;
  ramdisk_read(&ehdr,0,get_ramdisk_size());
  assert(*(uint32_t *)ehdr.e_ident == 0x464c457f);
  size_t i = 0;
  program_star=ehdr.e_entry;

  for (i=0; i < ehdr.e_phnum; i++)
  {
    uint64_t offset= ehdr.e_phoff+ehdr.e_phentsize*i;
    ramdisk_read(&phdr,offset,ehdr.e_phentsize);
    if( phdr.p_type== PT_LOAD){
      Log("header type: PT_LOAD,mem start %lx end %lx",phdr.p_vaddr,phdr.p_vaddr+phdr.p_memsz);
      ramdisk_read((void *)phdr.p_vaddr,phdr.p_offset,phdr.p_filesz);
      if(phdr.p_memsz-phdr.p_filesz > 0){
        memset((void *)(phdr.p_vaddr+phdr.p_filesz),0,phdr.p_memsz-phdr.p_filesz);}
    }
  }
  return program_star;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

