#cd ../ysyx-exam/
#sh exam-init.sh
AM_HOME = echo $AM_HOME
cd AM_HOME
cd ../am-kernels/benchmarks/microbench
make ARCH=native mainargs=test run
cd ../../tests
cd alu-tests
make ARCH=native run
cd ../am-tests
make ARCH=native  mainargs=h run
make ARCH=native  mainargs=t run