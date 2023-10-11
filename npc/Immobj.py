# coding:utf-8
# 解析汇编指令为HEX文件
import re
f=open('./resource/test.txt','r')
w=open('./resource/Imm_init.hex','w')

pattern = r'    \w{8}'
immtern = r':	\w{8}'

def reserve_number(s,is_hex=False):
    if is_hex:
       return ''.join(list(filter(lambda ch: ch  in 'abcdef0123456789', str(s))))
    else:
       return ''.join(list(filter(lambda ch: ch  in 'abcdef0123456789', str(s))))

for line in f.readlines():
    addr =  re.findall(pattern, line)
    if(addr):
        imm = re.findall(immtern,line)
        addr = reserve_number(addr)
        imm = reserve_number(imm,True)
        #print(addr,imm)
        addr = '0'+addr[1:]
        w.write("@"+addr+" "+imm+'\n')


f.close()  # 关
w.close()
