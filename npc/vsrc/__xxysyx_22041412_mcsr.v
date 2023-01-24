module ysyx_22041412_mcsr(
     input clk,
     output reg
 );
reg [63:0]mtvec; //��Machine Trap Vector�������淢���쳣ʱ��������Ҫ��ת���ĵ�ַ��
reg [63:0]mepc; //��Machine Exception PC����ָ�����쳣��ָ�
reg [63:0]mcause; //��Machine Exception Cause����ָʾ�����쳣�����ࡣ
reg [15:0]mie; //��Machine Interrupt Enable����ָ��������Ŀǰ�ܴ���ͱ�����Ե��жϡ�
reg [15:0]mip; //��Machine Interrupt Pending�����г�Ŀǰ��׼��������жϡ�
reg [63:0]mtval; //��Machine Trap Value�������������루trap���ĸ�����Ϣ����ַ�����г���ĵ�ַ�������Ƿ�ָ�������ָ������������쳣������ֵΪ 0��
reg [63:0]mscratch; //��Machine Scratch������ʱ���һ���ִ�С�����ݡ�
reg [63:0]mstatus; //��Machine Status��������ȫ���ж�ʹ�ܣ��Լ����������״̬

endmodule

