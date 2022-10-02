#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <link.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <elf.h>
#include <error.h>
#include <errno.h>
#include "ftrace.h"

#define ELFW(type)	_ELFW (ELF, __ELF_NATIVE_CLASS, type)
#define _ELFW(e,w,t)	_ELFW_1 (e, w, _##t)
#define _ELFW_1(e,w,t)	e##w##t
uint32_t elf_count;
static const char *st_type(unsigned int stype) 
{
	switch (stype) {
		case STT_NOTYPE: return "NOTYPE";
		case STT_OBJECT: return "OBJECT";
		case STT_FUNC: return "FUNC";
		case STT_SECTION: return "SECTION";
		case STT_FILE: return "FILE";
		case STT_COMMON: return "COMMON";
		case STT_TLS: return "TLS";
		case STT_LOOS ... STT_HIOS: return "OS_SPEC";
		case STT_LOPROC ... STT_HIPROC: return "PROC_SPEC";
		default: return "<unknown symbol type>";
	}
}
 
static const char *st_bind(unsigned int stbind)
{
	switch (stbind) {
		case STB_LOCAL: return "LOCAL";
		case STB_GLOBAL: return "GLOBAL";
		case STB_WEAK: return "WEAK";
		//case STB_GNU_UNIQUE: return "UNIQUE";
		case STB_LOOS ... STB_HIOS: return "OS";
		case STB_LOPROC ... STB_HIPROC: return "PROC";
		default: return "<unknown symbol bind>";
	}
}
 
static const char *st_vis(unsigned int svis)
{
	switch (svis) {
		case STV_DEFAULT: return "DEFAULT";
		case STV_INTERNAL: return "INTERNAL";
		case STV_HIDDEN: return "HIDDEN";
		case STV_PROTECTED: return "PROTECTED";
		default: return "<unknown symbol vis>";
	}
}
 
static const char *st_shndx(unsigned int shndx)
{
	static char s_shndx[32];
 
	switch (shndx) {
		case SHN_UNDEF: return "UND";	
		case SHN_ABS: return "ABS";
		case SHN_COMMON: return "COMMON";
		case SHN_LOPROC ... SHN_HIPROC: return "PRC";
		case SHN_LOOS ... SHN_HIOS: return "OS";
		default:  
			(void)snprintf(s_shndx, sizeof(s_shndx), "%u", shndx); 
			return (const char *)s_shndx;
	}
}
 
static void print_syms(FILE* wd,ElfW(Shdr) *shdrs, const char *shstrtab,  
		const char *shname, ElfW(Sym) *syms, size_t entries, const char *strtab)
{
	fprintf(wd,"Symbol table '%s' contains %zu entries:\n", shname, entries);
	fprintf(wd,"%7s%9s%14s%5s%8s%6s%9s%5s\n", "Num:", "  Value", "   Size", "    Type",
	    "   Bind", "   Vis", "   Ndx", "  Name");
	elf_count =  entries;
	for (size_t i = 0; i < entries; i++) {
		ElfW(Sym) *sym = &syms[i];
		 fprintf(wd,"%6zu, ", i);
		 fprintf(wd,"%16.16jx, ", (uintmax_t)sym->st_value);
		 fprintf(wd,"%5ju, ", (uintmax_t)sym->st_size);
		 fprintf(wd,"%-8s, ", st_type(ELFW(ST_TYPE)(sym->st_info)));
		 fprintf(wd,"%-8s, ", st_bind(ELFW(ST_BIND)(sym->st_info)));
		 fprintf(wd,"%-8s, ", st_vis(ELFW(ST_VISIBILITY)(sym->st_other)));
		 fprintf(wd,"%3s, " , st_shndx(sym->st_shndx));
		if (strcmp("SECTION", st_type(ELFW(ST_TYPE)(sym->st_info))) == 0) {
			fprintf(wd," %s, ", shstrtab + shdrs[sym->st_shndx].sh_name);	
		} else {
			fprintf(wd," %s, ", strtab + sym->st_name);
		}
		fprintf(wd," \t\n");
	}

}

int riscv64_elf(char*path)
{
    int fd;
	char *file_mmbase;
	struct stat file_status;
	size_t fsize;
	ElfW(Ehdr) *ehdr;
	ElfW(Shdr) *shdrs;
	size_t shnum, shstrndx;
	const char *shstrtab;
    FILE * fpWrite ;
    fpWrite = fopen("/home/kami/ysyx-workbench/nemu/build/elf-ftrace.txt","w");
    fclose(fpWrite);
    fpWrite = fopen("/home/kami/ysyx-workbench/nemu/build/elf-ftrace.txt","a");

    if((fd = open(path,O_RDONLY))<0){
        error(EXIT_FAILURE, errno, "open %s failed", path);
    }
    if (fstat(fd, &file_status) < 0){
		error(EXIT_FAILURE, errno, "get file %s info err", path);
	}

    fsize = (size_t)file_status.st_size;
    if ((file_mmbase = mmap(NULL, fsize, PROT_READ, 
				MAP_PRIVATE, fd, (off_t)0)) == MAP_FAILED) {
		error(EXIT_FAILURE, errno, "mmap file %s err", path);
	}
    printf("ELF_name: %s\n",path);

    ehdr = (ElfW(Ehdr) *)file_mmbase;
	shdrs = (ElfW(Shdr) *)(file_mmbase + ehdr->e_shoff);
	shnum = ehdr->e_shnum == 0 ? shdrs[0].sh_size : ehdr->e_shnum;
	shstrndx = ehdr->e_shstrndx == SHN_XINDEX ? shdrs[0].sh_link : ehdr->e_shstrndx;
	shstrtab = file_mmbase + shdrs[shstrndx].sh_offset;

    for (size_t i = 0; i < shnum; i++) {
		ElfW(Shdr) *shdr = &shdrs[i];	
 
		if (shdr->sh_type == SHT_SYMTAB || shdr->sh_type == SHT_DYNSYM) {
			const char *shname = shstrtab + shdr->sh_name;
			ElfW(Sym) *syms = (ElfW(Sym *))(file_mmbase + shdr->sh_offset); 
			size_t entries = shdr->sh_size / shdr->sh_entsize;
			// sh_info: One greater than the symbol table index of 
			// 			the last local symbol (binding STB_LOCAL).
			//printf("shdr->sh_info = %u\n", shdr->sh_info);
			// sh_link: .strtab or .dynstr (The section header index of 
			// 			the associated string table.)
			const char *strtab = file_mmbase + shdrs[shdr->sh_link].sh_offset;
			print_syms(fpWrite ,shdrs, shstrtab, shname, syms, entries, strtab);	
		}
	}

	(void)munmap(file_mmbase, fsize);
	(void)close(fd);
    fclose(fpWrite);
    return 0;
}
