#include <fs.h>
#include <common.h>
#include "ramdisk.h"
#include "device.h"
#include "debug.h"
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

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB,FD_EVENTS, FD_DISPINFO};

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
  [FD_FB]       = {"/dev/fb"       , 0, 0, 0,invalid_read , fb_write},      // 显存，只写
  [FD_EVENTS]   = {"/dev/events"   , 0, 0, 0,events_read  , invalid_write}, // 键盘，只读
  [FD_DISPINFO] = {"/proc/dispinfo", 0, 0, 0,dispinfo_read, invalid_write}, // 屏幕，只读
#include "files.h"
};

void init_fs() {
  AM_GPU_CONFIG_T fb_config = io_read(AM_GPU_CONFIG);
  file_table[FD_FB].size = fb_config.width * fb_config.height * 4;
  // TODO: initialize the size of /dev/fb
}
size_t fs_load(int fd,uintptr_t* offset,uintptr_t* len){
  *offset=file_table[fd].disk_offset;
  *len=file_table[fd].size;
  return 0;
}
int fs_open(const char *pathname, int flags, int mode){
  assert(pathname != NULL);
  for (int i=1; i < 999; i++)
  {
    if(strcmp(file_table[i].name,pathname)==0){
      //Log("Find file %s in %ld",pathname ,i);
      return i;
    }
    else if(file_table[i].name ==NULL){
      assert("[fs_open] error  no file");
    }
  }

  assert("[fs_open] not open file");//搜不到文件 数据有问题
  return 0;
}

size_t fs_read(int fd, void *buf, size_t len){
  #ifdef DEBUG
    DEBUG Log("read on %d %lx,len %ld",fd,buf,len);
  #endif 
  size_t ret_len=0;
  if(fd == FD_EVENTS){
    ret_len = events_read(buf,0,len);
  }
  else if(fd == FD_DISPINFO){
    ret_len = dispinfo_read(buf,0,len);
  }
  else {
    if(file_table[fd].read_offset+len>file_table[fd].size){
      ret_len = file_table[fd].size-file_table[fd].read_offset;
    }
    else ret_len = len;
    //printf("fread id = %d read_offset %d len %d\n",fd,file_table[fd].read_offset, ret_len);
    //return 0;
    ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].read_offset,ret_len);
    //if(fd==dispinfo)Log("sys_read disk read offset=%ld,count=%ld bufs=%s",file_table[fd].read_offset,len,(char *)buf);
    file_table[fd].read_offset+=ret_len;
    //printf("read end\n");
  }
  

  return ret_len;
}
size_t fs_write(int fd, const void *buf, size_t len){
  #ifdef DEBUG
    Log("sys_write fd=%ld,buf*=%lx,len=%lx",fd,buf,len);
  #endif // DEBUG
  assert(fd>=0);
  size_t ret_len = 0;
  if(fd==FD_FB ){
    ret_len=fb_write(buf,file_table[fd].read_offset,len);//写文件
  }
  else if(fd==FD_STDOUT||fd==FD_STDERR){        //stdout
    for (uint16_t i=0;i<len;++i)
    {
      putch(((char *)buf)[i]);
    }
    return len;
  }
  else{
    assert(file_table[fd].read_offset + len <= file_table[fd].size);
    ramdisk_write(((char *)buf),file_table[fd].read_offset+file_table[fd].disk_offset,len);
    file_table[fd].read_offset+=len;
    return len;
  }

  return ret_len;
}
size_t fs_lseek(int fd, size_t offset, int whence){
  #ifdef DEBUG
    Log("[fs lseek] fd read %d offset %ld ",fd,offset);
  #endif // DEBUG
  if(whence == SEEK_SET){
    assert(offset <= file_table[fd].size);
    file_table[fd].read_offset = offset;
  }
  else if(whence == SEEK_CUR) {
    assert(file_table[fd].read_offset + offset <= file_table[fd].size);
    file_table[fd].read_offset += offset;
    }
  else if(whence == SEEK_END) {
    assert(offset <= file_table[fd].size);
    file_table[fd].read_offset = offset+file_table[fd].size;
    Log("return %ld",file_table[fd].size);
    }
  else assert("fs_lseek error whench");
  return file_table[fd].read_offset;
}
int fs_close(int fd){
  #ifdef DEBUG
    Log("[fs close] fd close %d  ",fd);
  #endif // DEBUG
  file_table[fd].read_offset = 0;
  return 0;
}
