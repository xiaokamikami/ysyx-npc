#ifndef _AXI4_H_
#define _AXI4_H_
#include <stdlib.h>
#include "../obj_dir/Vysyx_22041412_top.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include "device/debug.h"


void init_ram(char *file, long img_size);
extern uint8_t sram[];



#endif

