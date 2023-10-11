#include <fs.h>
#include <common.h>
#include "ramdisk.h"
#include "device.h"
#include "debug.h"
typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);
//#define FS_DEBUG

//描述一个文件的各项参数
typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  size_t read_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

//文件结构体列表
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

//打开一个文件并返回序列号
int fs_open(const char *pathname, int flags, int mode){
  assert(pathname != NULL);
  for (int i=1; i < 99; i++)
  {
    if(strcmp(file_table[i].name,pathname)==0){
      //Log("Find file %s in %ld",pathname ,i);
      return i;
    }
  }

  Log("[fs_open] not open fd-nemu:  %s ",pathname);//搜不到文件 数据有问题
  assert(0);
  return 0;
}

//读取一个磁盘文件  或是虚拟设备的文件
size_t fs_read(int fd, void *buf, size_t len){
  #ifdef FS_DEBUG
    Log("read on %d %lx,len %ld",fd,buf,len);
  #endif 
  assert(buf!=NULL);
  size_t ret_len=0;
  switch (fd)
  {
    case FD_EVENTS: 
          ret_len = events_read(buf,0,len); //读取键盘事件
          return ret_len;
      break;
    case FD_DISPINFO: 
        ret_len = dispinfo_read(buf,0,len);//读取屏幕参数
        return ret_len;
      break;
    default:    //读取普通文件，要防止访问越界
        if(file_table[fd].read_offset+len>file_table[fd].size){
          ret_len = file_table[fd].size-file_table[fd].read_offset;
        }
        else ret_len = len;
        //Log("fread id = %d read_offset %d len %d\n",fd,file_table[fd].read_offset, ret_len);
        ramdisk_read((void *)buf,file_table[fd].disk_offset+file_table[fd].read_offset,ret_len);
        file_table[fd].read_offset+=ret_len;
        //Log("read end\n");
        return ret_len;
      break;
  }

  return ret_len;
}

//读取一个磁盘文件  或是虚拟设备的文件
size_t fs_write(int fd, const void *buf, size_t len){
  #ifdef FS_DEBUG
    Log("sys_write fd=%ld,buf*=%lx,len=%lx",fd,buf,len);
  #endif // DEBUG
  assert(buf!=NULL);
  size_t ret_len = 0;
  switch (fd)
  {
    case FD_FB:    
        ret_len=fb_write(buf,file_table[fd].read_offset,len);//写文件
      break;
    case FD_STDOUT :case FD_STDERR:  //写串口
          for (uint16_t i=0;i<len;++i)
          {
            putch(((char *)buf)[i]);
          }
          return len;
      break;
    default:    //写普通文件  要防止越界
        assert(file_table[fd].read_offset + len <= file_table[fd].size);
        ramdisk_write(((char *)buf),file_table[fd].read_offset+file_table[fd].disk_offset,len);
        file_table[fd].read_offset+=len;
        return len;
      break;
  }

  return ret_len;
}


//调整读写文件的指针
size_t fs_lseek(int fd, size_t offset, int whence){
  #ifdef FS_DEBUG
    Log("[fs lseek] fd read %d offset %ld ",fd,offset);
  #endif // DEBUG
  switch (whence)
  {
    case SEEK_SET://直接设置偏移量
        assert(offset <= file_table[fd].size);
        file_table[fd].read_offset = offset;
        return file_table[fd].read_offset;
      /* code */
      break;
    case SEEK_CUR://从当前位置+OFFSET
        assert(file_table[fd].read_offset + offset <= file_table[fd].size);
        file_table[fd].read_offset += offset;
        return file_table[fd].read_offset;
      break;
    case SEEK_END://返回文件末尾
        assert(offset <= file_table[fd].size);
        file_table[fd].read_offset = offset+file_table[fd].size;
        Log("return %ld id %d ",file_table[fd].size,fd);
        return file_table[fd].read_offset;
      break;
    default:assert("fs_lseek error whench");   
    break;
  }

  return file_table[fd].read_offset;
}

int fs_close(int fd){
  #ifdef FS_DEBUG
    Log("[fs close] fd close %d  ",fd);
  #endif // DEBUG
  file_table[fd].read_offset = 0;
  return 0;
}
