///* verilator lint_off WIDTH */
/* verilator lint_off BLKSEQ */
/* verilator lint_off UNUSED */
/* verilator lint_off UNDRIVEN */
/* verilator lint_off WIDTH */
module top(
  input reg clk,
  input reg[7:0] key_inbuff,
  input reg nextdata_n,
  input reg clrn,
  output [7:0]Key_ASCII
  );
  wire ready,overflow;
  wire kbd_clk ;
  
  reg [3:0]time_seq;
  reg [7:0]key_inbuffs;
  reg kbd_data;
  reg ps2_clk;
  reg [7:0]keyout_data;
  reg [7:0]key_ram [7:0];
  reg [7:0]ram_num;
/* parameter */
parameter [31:0] clock_period = 10;
assign VGA_CLK = clk;

wire [9:0] h_addr;
wire [9:0] v_addr;
wire [23:0] vga_data;
vga_ctrl my_vga_ctrl(
    .pclk(clk),
    .reset(rst),
    .vga_data(vga_data),
    .h_addr(h_addr),
    .v_addr(v_addr),
    .hsync(VGA_HSYNC),
    .vsync(VGA_VSYNC),
    .valid(VGA_BLANK_N),
    .vga_r(VGA_R),
    .vga_g(VGA_G),
    .vga_b(VGA_B)
);

ps2_keyboard key_inst(
    .clk(clk),
    .clrn(clrn),
    .ps2_clk(kbd_clk),
    .ps2_data(kbd_data),
    .data(keyout_data),
    .ready(ready),
    .nextdata_n(nextdata_n),
    .overflow(overflow)
);

reg [23:0] vga_mem [524287:0];

initial begin
    $readmemh("resource/ysyx_640.mif", vga_mem);
end


endmodule
