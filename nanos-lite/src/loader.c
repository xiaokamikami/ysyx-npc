#include <proc.h>
#include <elf.h>
#include <ramdisk.h>
#include <common.h>
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif


static uintptr_t loader(PCB *pcb, const char *filename) {
  Elf64_Phdr phdr[99];
  int size_phdr;
  size_phdr = sizeof(Elf64_Phdr);
  void * buf=NULL;
  size_t len;
  uint8_t program_type;
  len=ramdisk_read(buf,0,RAMDISK_SIZE);
  for (size_t i = 0; len-(i*(size_phdr))>i*(size_phdr); i++)
  {
    Log("mem %d \n",i);
    memcpy(&phdr + (i*(size_phdr)), buf, size_phdr);
    
  }
  
  for(;len>0;len--){
      program_type = phdr[len].p_type;
      if (program_type == 0)
        Log("header type: PT_NONE");
      if (program_type == PT_LOAD)
        Log("header type: PT_LOAD"); //可转载到内存里的程序段，对应代码和数据,这些段才是我们关心的
      else if (program_type == PT_DYNAMIC)
        Log("header type: PT_DYNAMIC");
      else if (program_type == PT_INTERP)
        Log("header type: PT_INTERP");
      else if (program_type == PT_NOTE)
        Log("header type: PT_NOTE");
      else if (program_type == PT_SHLIB)
        Log("header type: PT_SHLIB");
      else if (program_type == PT_PHDR)
        Log("header type: PT_PHDR");
      else
        Log("header type hex: ", program_type);
  }
  return len;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

