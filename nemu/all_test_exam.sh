cd ../ysyx-exam/
sh exam-init.sh
AM_HOME = echo $AM_HOME
cd AM_HOME
cd ../am-kernels/benchmarks/microbench
make ARCH=riscv64-nemu mainargs=test run
cd ../../tests
cd alu-tests
sh nemu.sh
cd ../am-tests
make ARCH=riscv64-nemu  mainargs=h run
make ARCH=riscv64-nemu  mainargs=t run