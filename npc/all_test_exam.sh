cd ../ysyx-exam/
sh exam-init.sh
AM_HOME = echo $AM_HOME
cd AM_HOME
cd ../am-kernels/benchmarks/microbench
make ARCH=riscv64-npc mainargs=test run
cd ../../tests
cd alu-tests
sh npc.sh
cd ../am-tests
make ARCH=riscv64-npc  mainargs=h run
make ARCH=riscv64-npc  mainargs=t run