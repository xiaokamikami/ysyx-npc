#include <fs.h>
#include "ramdisk.h"
typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};


size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}
size_t fs_load(int fd,uintptr_t* offset,uintptr_t* len){
  *offset=file_table[fd].disk_offset;
  *len=file_table[fd].size;
  return 0;
}
int fs_open(const char *pathname, int flags, int mode){
  size_t i;
  for (i=1; i < 99; i++)
  {
    if(strcmp(file_table[i].name,pathname)==0){
      Log("Find file %s in %ld",pathname ,i);
      return i;
    }
    else if(file_table[i].name ==NULL){
      assert("fs_open error  no file");
    }
  }
  
  return -1;
}
size_t fs_read(int fd, void *buf, size_t len){
  ramdisk_read(buf,file_table[fd].disk_offset,len);
  return len;
}
size_t fs_write(int fd, const void *buf, size_t len){
  if(fd==FD_STDOUT||fd==FD_STDERR){        //stdout
    for (uint16_t i=0;i<len;++i)
    {
      putch(((char *)buf)[i]);
    }
    return len;
  }
  // else if(fd==FD_STDERR){     //stderr
  //   putch(buf);
  //   i++;
  //   return i;
  //   if((a[3]-i)==0)i=0;
  // }
  else return 0;
}
size_t fs_lseek(int fd, size_t offset, int whence){
  //size_t start = file_table[fd].disk_offset;
  if(whence == SEEK_SET && offset>0) {file_table[fd].disk_offset += offset;}
  //else if(whence == SEEK_SET && offset<=0){return -1;}
  else if(whence == SEEK_CUR) {file_table[fd].disk_offset += offset;}
  else if(whence == SEEK_END) {file_table[fd].size += offset;Log("return %ld",file_table[fd].size); return file_table[fd].size;}
  else assert("fs_lseek error whench");
  return offset;
}
int fs_close(int fd);
