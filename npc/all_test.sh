cd /home/kami/ysyx-workbench/am-kernels/tests
cd microbench
make ARCH=riscv64-npc mainargs=test run
cd ..
cd alu-tests
sh npc.sh
cd ..
cd am-tests
make ARCH=riscv64-npc  mainargs=h run
make ARCH=riscv64-npc  mainargs=t run