#ifndef __RAMDISK_H__
#define __RAMDISK_H__
#include <common.h>
extern uint8_t ramdisk_start;
extern uint8_t ramdisk_end;


#define RAMDISK_SIZE ((&ramdisk_end) - (&ramdisk_start))
size_t ramdisk_read(void *buf, size_t offset, size_t len);

#endif
