module ysyx_22041412_stall (
	output	reg		[5:0]		stall,				 // 暂停流水线的控制信号
	input   wire				rst,
    input   wire             	stall_from_mem		// 来自访存阶段的暂停请求
);

	always @ (*)	begin
		if (rst == 1'b1) begin
			stall	=	6'b000000;
		end 
		else if (stall_from_mem) begin
			stall	=	6'b111111;
		end 
		else if	(stall_from_ex) begin
			stall	=	6'b001111;
        end 
		else if (stall_from_id) begin
			stall	=	6'b000111;
		end 
		else begin
			stall	=	6'b000000;
		end
    end
endmodule
