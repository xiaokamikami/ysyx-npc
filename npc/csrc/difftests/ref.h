#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <assert.h>
#include <getopt.h>
#include "difftest.h"

void exit_now();
void isa_reg_display();

extern struct CPU_state
{
  uint64_t gpr[32];
  uint64_t pc;
  uint64_t csrs[csr_size];
}cpureg; 
