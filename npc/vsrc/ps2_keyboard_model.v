
module ps2_keyboard_model(
    input reg clk,
    input [7:0] code, // key to be sent
    input reg clrn,
    output reg ps2_clk,
    output reg ps2_data
    );
//parameter [31:0] kbd_clk_period = 60;
reg[10:0] send_buffer;
reg[3:0]i;
reg[3:0]j;
reg[7:0]rom;
initial begin 
    ps2_clk = 1'b0;
    i = 0;
    j = 0;
end

always @(posedge clk) begin
    j <= j+1;
    if(clrn == 1) send_buffer <=11'b00000000001;
    if(rom != code)begin 
        rom <= code;
        send_buffer[0]   <= 1'b0;  // start bit
        send_buffer[8:1] <= code;  // code
        send_buffer[9]   <= ~(^code); // odd parity bit
        send_buffer[10]  <= 1'b1;  // stop bit}
        i <= 0;
    end
    else begin
        case (j)
            1:begin
                if( i < 11 ) begin      // set kbd_data
                    ps2_data = send_buffer[i];
                    i <= i + 1;
                end 
            end
            2:begin 
                ps2_clk = 1'b0;
            end 
            3:begin
                ps2_clk = 1'b1;  
            end
            4:j <= 0;
        endcase
    end
    if( i==11 ) i <=0;

end

endmodule
