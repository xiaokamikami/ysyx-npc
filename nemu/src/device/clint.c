#include <device/map.h>
#include <device/alarm.h>
#include <utils.h>
#include "../isa/riscv64/local-include/reg.h"
#define CLINT_MTIMECMP (0x4000 / sizeof(clint_base[0]))
#define CLINT_MTIME    (0xBFF8 / sizeof(clint_base[0]))
#define TIMEBASE 10000000ul
extern uint64_t g_nr_guest_inst;
static uint64_t *clint_base = NULL;
uint64_t clint_snapshot, spec_clint_snapshot;
extern uint64_t stable_log_begin, spec_log_begin;

void clint_take_snapshot() {
  clint_snapshot = clint_base[CLINT_MTIME];
}

void clint_take_spec_snapshot() {
  spec_clint_snapshot = clint_base[CLINT_MTIME];
}

void clint_restore_snapshot(uint64_t restore_inst_cnt) {
  if (spec_clint_snapshot <= restore_inst_cnt) {
    clint_snapshot = spec_clint_snapshot;
  }
  clint_base[CLINT_MTIME] = clint_snapshot;
}

void update_clint() {
  clint_base[CLINT_MTIME] = g_nr_guest_inst * TIMEBASE;
  if (clint_base[CLINT_MTIME] >= clint_base[CLINT_MTIMECMP])
    csrW_id(mip,0x80);
  else csrW_id(mip,0);

}
static void clint_io_handler(uint32_t offset, int len, bool is_write) {
  update_clint();
}
uint64_t clint_uptime() {
  update_clint();
  return clint_base[CLINT_MTIME];
}

void init_clint() {
  clint_base = (uint64_t *)new_space(0x10000);
  add_mmio_map("clint", CONFIG_CLINT_START, (uint8_t *)clint_base, 0x10000, clint_io_handler);
}
