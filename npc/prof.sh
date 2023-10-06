#采集仿真框架性能数据

#获取CPU耗时热点图
sudo sysctl -w kernel.perf_event_paranoid=-1
sudo perf record -a --call-graph dwarf -p `ps -aux | grep ./obj_dir/Vysyx_22041412_top | grep -v grep | cut -c 10-16` -d  -- sleep 30
sudo perf report -i perf.data > perf.unfold
sudo stackcollapse-perf.pl perf.unfold &> perf.folded
sudo stackcollapse-perf.pl perf.unfold &> perf.txt
sudo flamegraph.pl perf.folded > perf.svg


#获取非CPU耗时     命令有错
sudo offcputime-bpfcc -df -p `ps -aux | grep ./obj_dir/Vysyx_22041412_top | grep -v grep | cut -c 10-16` 30 > out.stacks
flamegraph.pl --color=io --title="Off-CPU Time Flame Graph" --countname=us ~/out.stacks > output.svg



sudo difffolded.pl perf.folded2 perf.folded1|flamegraph.pl >diff1.svg  # 获取差异数据 绘图
