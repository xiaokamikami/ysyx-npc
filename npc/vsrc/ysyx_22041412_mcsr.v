module ysyx_22041412_mcsr(
     input clk,
     input en,
     input [63:0]pc,
     input [2:0]addr,
     input [2:0]func3,
     input [63:0]data_i,
     output [63:0]data_o,
     output ready_o
 );
// reg [63:0]mtvec; //��Machine Trap Vector�������淢���쳣ʱ��������Ҫ��ת���ĵ�ַ��
// reg [63:0]mepc; //��Machine Exception PC����ָ�����쳣��ָ�
// reg [63:0]mcause; //��Machine Exception Cause����ָʾ�����쳣�����ࡣ
// reg [15:0]mie; //��Machine Interrupt Enable����ָ��������Ŀǰ�ܴ���ͱ�����Ե��жϡ�
// reg [15:0]mip; //��Machine Interrupt Pending�����г�Ŀǰ��׼��������жϡ�
// reg [63:0]mtval; //��Machine Trap Value�������������루trap���ĸ�����Ϣ����ַ�����г���ĵ�ַ�������Ƿ�ָ�������ָ������������쳣������ֵΪ 0��
// reg [63:0]mscratch; //��Machine Scratch������ʱ���һ���ִ�С�����ݡ�
// reg [63:0]mstatus; //��Machine Status��������ȫ���ж�ʹ�ܣ��Լ����������״̬


            // 2:mstatus
            // 3:mtvec
            // 4:mepc
            // 5:mcause

reg [63:0]mcsr_reg[5:0];
reg ready;
initial begin
    mcsr_reg[2] = 64'ha00001800;
end
reg [63:0]data_r;
assign data_o=data_r;
assign ready_o=ready;
always @(posedge clk) begin
    if(en& !ready & func3!='b000)begin
        data_r<=mcsr_reg[addr];
        if(func3=='b001 | func3=='b101) mcsr_reg[addr]<=data_i;
        else if(func3=='b010 | func3=='b110) mcsr_reg[addr]<=data_r|data_i;
        else if(func3=='b011 | func3=='b111) mcsr_reg[addr]<=data_r& (~data_i);
        else mcsr_reg[0]<=0;
        ready<=1'b1;
    end
    else if(en& !ready & addr=='b001)begin
        mcsr_reg[4]<=pc;
        mcsr_reg[5]<='h000b;
        data_r<=mcsr_reg[3];
        ready<=1'b1;
    end
    else if(en& !ready & addr=='b000)begin
        data_r<=mcsr_reg[4];
        ready<=1'b1;
    end
    else begin
        ready<=1'b0;
        data_r<=64'b0;
    end

end

endmodule

