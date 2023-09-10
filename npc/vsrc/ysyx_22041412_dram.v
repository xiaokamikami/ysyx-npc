module ysyx_22041412_dram#(
    parameter ADDR_WIDTH =32,
    parameter DATA_WIDTH =64
)(
    input clk,
    input rst,
    //mem <---> mem
    input [2:0]func3,
    input [ ADDR_WIDTH-1:0] addr,
    input [ DATA_WIDTH-1:0] wdata,
    input wen,

    input ex_ready_i,
    input mem_valid_i,
    output reg mem_ready_o,
    output reg[DATA_WIDTH-1:0] r_data_o,

    //mem <---> dcache
    input      dcache_ready_i,          // 数据操作完成
    output reg dcache_valid_o,          // 发出读写请求
    
    output     rw_wen,                  // 1写 0读
    output     [7:0]wmask               , 
    output reg [ DATA_WIDTH-1:0]w_data_o, // 写数据
    output reg [ ADDR_WIDTH-1:0]w_addr_o, // 写地址
    input      [ DATA_WIDTH-1:0]r_data_i, // 读数据
    output reg [ ADDR_WIDTH-1:0]r_addr_o  // 读地址

);
/* import "DPI-C" function void mem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void mem_write(
  input longint waddr, input longint wdata, input byte wmask); */

//wire [7:0]wmask; 
assign rw_wen = wen;
assign wmask =  (func3==3'b000)?8'b00000001:    //sb
                (func3==3'b001)?8'b00000011:    //sh
                (func3==3'b010)?8'b00001111:    //sw
                (func3==3'b011)?8'b11111111:    //sd
                0;   
/* always @(posedge clk) begin
    if(wen & ~ready_o & valid_i )begin     
        mem_write(addr, wdata, wmask);   //DPI W
        $display("%lx Write: addr:%8h %16h",addr[63:0],wdata[63:0]);    //DEBUG
        ready_o<=1'b1;
    end
    else if(~wen & ~ready_o & valid_i)begin    
        mem_read(addr, sram_data_r);     //DPI R
        rdata<= (func3==3'b000)?{{56{sram_data_r[7]}},sram_data_r[7:0]}:    //lb
                (func3==3'b001)?{{48{sram_data_r[15]}},sram_data_r[15:0]}:  //lh
                (func3==3'b010)?{{32{sram_data_r[31]}},sram_data_r[31:0]}:  //lw
                (func3==3'b011)?{sram_data_r[63:0]}:                        //ld
                (func3==3'b100)?{{56{1'b0}},sram_data_r[7:0]}:              //lbu
                (func3==3'b101)?{{48{1'b0}},sram_data_r[15:0]}:             //lhu
                (func3==3'b110)?{{32{1'b0}},sram_data_r[31:0]}:             //lwu
                `ysyx_22041412_zero_word;
        $display("%lx Read : addr:%8h %16h",addr[63:0],sram_data_r[63:0]); //DEBUG
        ready_o<=1'b1;
    end
    else if(ready_i )ready_o<=1'b0;
end
 */
reg end_flag;
always@(posedge clk)begin
    if(rst)begin
    end else if(mem_valid_i & wen & ~mem_ready_o)begin
        if( ~dcache_ready_i)begin
           dcache_valid_o <= 1'b1;     
           w_data_o       <= wdata;
           w_addr_o       <= addr ;
        end else if(dcache_ready_i)begin
           dcache_valid_o <= 1'b0;   
           mem_ready_o    <= 1'b1;  
           w_data_o       <= 0 ;
           w_addr_o       <= 0 ;  
           //$display("%lx Write: addr:%8h %16h",addr,wdata);    //DEBUG      
        end
    end else if(mem_valid_i & ~wen & ~mem_ready_o)begin
        if( ~dcache_ready_i)begin
           dcache_valid_o <= 1'b1;     
           r_addr_o       <= addr ;
        end else if(dcache_ready_i)begin
           dcache_valid_o <= 1'b0;    
           r_addr_o       <= 0; 
           r_data_o       <= (func3==3'b000)?{{56{r_data_i[7]}},r_data_i[7:0]}:    //lb
                             (func3==3'b001)?{{48{r_data_i[15]}},r_data_i[15:0]}:  //lh
                             (func3==3'b010)?{{32{r_data_i[31]}},r_data_i[31:0]}:  //lw
                             (func3==3'b011)?{r_data_i[63:0]}:                        //ld
                             (func3==3'b100)?{{56{1'b0}},r_data_i[7:0]}:              //lbu
                             (func3==3'b101)?{{48{1'b0}},r_data_i[15:0]}:             //lhu
                             (func3==3'b110)?{{32{1'b0}},r_data_i[31:0]}:             //lwu
                             `ysyx_22041412_zero_word;
           mem_ready_o    <= 1'b1;   
           //$display("%lx Read : addr:%8h %16h",addr,r_data_i); //DEBUG
        end        
    end else if(ex_ready_i & mem_ready_o)begin
        dcache_valid_o <= 1'b0;   
        mem_ready_o    <= 1'b0;  
        r_data_o       <= 64'b0;
        r_addr_o       <= 32'b0; 
        w_data_o       <= 64'b0;
        w_addr_o       <= 32'b0; 
    end

end




endmodule
