enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
typedef uint64_t paddr_t;
extern void init_difftest(char *ref_so_file, long img_size, int port);
extern void difftest_step(paddr_t pc, paddr_t npc);
const char* reg_name(int idx);
extern const char *regs[];
extern void difftest_skip_ref();