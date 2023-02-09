#include <fs.h>
#include <common.h>
#include "ramdisk.h"
#include "device.h"
typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  size_t read_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};
int event_file =0;
int fd_file = 0;
int dispinfo =0;
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
  [FD_STDIN]  = {"stdin", 0, 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  event_file=   fs_open("/dev/events",0,0);
  dispinfo = fs_open("/proc/dispinfo",0,0);
  fd_file = fs_open("/dev/fb",0,0);
  // TODO: initialize the size of /dev/fb
}
size_t fs_load(int fd,uintptr_t* offset,uintptr_t* len){
  *offset=file_table[fd].disk_offset;
  *len=file_table[fd].size;
  return 0;
}
int fs_open(const char *pathname, int flags, int mode){
  size_t i;
  for (i=1; i < 999; i++)
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
  //Log("read on %d",fd);
  if(fd == event_file){
    len = events_read(buf,0,len);
  }
  if(fd == dispinfo ){
    len = dispinfo_read(buf,dispinfo,len);
  }
  else {
    if(file_table[fd].read_offset+len>=file_table[fd].size){len = file_table[fd].size-file_table[fd].read_offset;}
    //return 0;
    ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].read_offset,len);
    //if(fd==dispinfo)Log("sys_read disk read offset=%ld,count=%ld bufs=%s",file_table[fd].read_offset,len,(char *)buf);
    file_table[fd].read_offset +=len;
    //printf("fread id = %d  len %d\n",fd, len);
  }


  return len;
}
size_t fs_write(int fd, const void *buf, size_t len){
  //Log("sys_write fd=%ld,buf*=%lx,len=%lx",fd,buf,len);
  if(fd==FD_STDOUT||fd==FD_STDERR){        //stdout
    for (uint16_t i=0;i<len;++i)
    {
      putch(((char *)buf)[i]);
    }
    return len;
  }
  else if(fd==fd_file ){
    fb_write(buf,file_table[fd].read_offset,len);
  }
  else{
    ramdisk_write(((char *)buf),file_table[fd].read_offset+file_table[fd].disk_offset,len);
    file_table[fd].read_offset+=len;
    return len;
  }

  return 0;
}
size_t fs_lseek(int fd, size_t offset, int whence){
  
  if(whence == SEEK_SET && offset>=0 && (offset <= file_table[fd].size)) {file_table[fd].read_offset = offset;}//Log("fs lseek  read offset %ld",file_table[fd].read_offset);
  else if(whence == SEEK_SET && offset<0){return -1;}
  else if(whence == SEEK_CUR) {file_table[fd].read_offset += offset;}
  else if(whence == SEEK_END) {file_table[fd].read_offset = offset+file_table[fd].size;Log("return %ld",file_table[fd].size);}
  else assert("fs_lseek error whench");
  return file_table[fd].read_offset;
}
int fs_close(int fd){
  return 0;
}
