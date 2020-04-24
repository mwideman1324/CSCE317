// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vtop::traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->v__DOT__mymaster__DOT__payload_sizes[0]),8);
	vcdp->chgBus  (c+2,(vlTOPp->v__DOT__mymaster__DOT__payload_sizes[1]),8);
	vcdp->chgBus  (c+3,(vlTOPp->v__DOT__mymaster__DOT__payload_sizes[2]),8);
	vcdp->chgBus  (c+4,(vlTOPp->v__DOT__mymaster__DOT__payload_sizes[3]),8);
	vcdp->chgBus  (c+5,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[0]),8);
	vcdp->chgBus  (c+6,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[1]),8);
	vcdp->chgBus  (c+7,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[2]),8);
	vcdp->chgBus  (c+8,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[3]),8);
	vcdp->chgBus  (c+9,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[4]),8);
	vcdp->chgBus  (c+10,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[5]),8);
	vcdp->chgBus  (c+11,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[6]),8);
	vcdp->chgBus  (c+12,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[7]),8);
	vcdp->chgBus  (c+13,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[8]),8);
	vcdp->chgBus  (c+14,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[9]),8);
	vcdp->chgBus  (c+15,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[10]),8);
	vcdp->chgBus  (c+16,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[11]),8);
	vcdp->chgBus  (c+17,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[12]),8);
	vcdp->chgBus  (c+18,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[13]),8);
	vcdp->chgBus  (c+19,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[14]),8);
	vcdp->chgBus  (c+20,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[15]),8);
	vcdp->chgBus  (c+21,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[16]),8);
	vcdp->chgBus  (c+22,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[17]),8);
	vcdp->chgBus  (c+23,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[18]),8);
	vcdp->chgBus  (c+24,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[19]),8);
	vcdp->chgBus  (c+25,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[20]),8);
	vcdp->chgBus  (c+26,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[21]),8);
	vcdp->chgBus  (c+27,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[22]),8);
	vcdp->chgBus  (c+28,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[23]),8);
	vcdp->chgBus  (c+29,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[24]),8);
	vcdp->chgBus  (c+30,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[25]),8);
	vcdp->chgBus  (c+31,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[26]),8);
	vcdp->chgBus  (c+32,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[27]),8);
	vcdp->chgBus  (c+33,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[28]),8);
	vcdp->chgBus  (c+34,(vlTOPp->v__DOT__mymaster__DOT__data_size),32);
	vcdp->chgBus  (c+35,(vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__i),32);
	vcdp->chgBus  (c+36,(vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__j),32);
	vcdp->chgBus  (c+37,(vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n),32);
    }
}

void Vtop::traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+48,(((IData)(vlTOPp->v__DOT__myslave__DOT__data_out_valid_reg) 
			      & (0x1fU == (IData)(vlTOPp->v__DOT__myslave__DOT__addr_reg)))));
	vcdp->chgBus  (c+49,(vlTOPp->v__DOT__myslave__DOT__state_reg),5);
	vcdp->chgBus  (c+45,(vlTOPp->v__DOT__myslave__DOT__addr_reg),7);
	vcdp->chgBus  (c+50,(vlTOPp->v__DOT__myslave__DOT__data_reg),8);
	vcdp->chgBit  (c+51,(vlTOPp->v__DOT__myslave__DOT__data_valid_reg));
	vcdp->chgBit  (c+52,(vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg));
	vcdp->chgBit  (c+53,(vlTOPp->v__DOT__myslave__DOT__last_reg));
	vcdp->chgBit  (c+54,(vlTOPp->v__DOT__myslave__DOT__mode_read_reg));
	vcdp->chgBus  (c+55,(vlTOPp->v__DOT__myslave__DOT__bit_count_reg),4);
	vcdp->chgBit  (c+40,(vlTOPp->v__DOT__myslave__DOT__data_in_ready_reg));
	vcdp->chgBus  (c+41,(vlTOPp->v__DOT__myslave__DOT__data_out_reg),8);
	vcdp->chgBit  (c+42,(vlTOPp->v__DOT__myslave__DOT__data_out_valid_reg));
	vcdp->chgBit  (c+43,(vlTOPp->v__DOT__myslave__DOT__data_out_last_reg));
	vcdp->chgBus  (c+56,(vlTOPp->v__DOT__myslave__DOT__scl_i_filter),1);
	vcdp->chgBus  (c+57,(vlTOPp->v__DOT__myslave__DOT__sda_i_filter),1);
	vcdp->chgBit  (c+58,(vlTOPp->v__DOT__myslave__DOT__scl_i_reg));
	vcdp->chgBit  (c+59,(vlTOPp->v__DOT__myslave__DOT__sda_i_reg));
	vcdp->chgBit  (c+39,(vlTOPp->v__DOT__myslave__DOT__scl_o_reg));
	vcdp->chgBit  (c+38,(vlTOPp->v__DOT__myslave__DOT__sda_o_reg));
	vcdp->chgBit  (c+60,(vlTOPp->v__DOT__myslave__DOT__last_scl_i_reg));
	vcdp->chgBit  (c+61,(vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg));
	vcdp->chgBit  (c+44,(vlTOPp->v__DOT__myslave__DOT__busy_reg));
	vcdp->chgBit  (c+47,(vlTOPp->v__DOT__myslave__DOT__bus_active_reg));
	vcdp->chgBit  (c+46,(vlTOPp->v__DOT__myslave__DOT__bus_addressed_reg));
	vcdp->chgBit  (c+62,(((IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg) 
			      & (~ (IData)(vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg)))));
	vcdp->chgBit  (c+63,(((~ (IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg)) 
			      & (IData)(vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg))));
    }
}

void Vtop::traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+64,(vlTOPp->v__DOT__sda_t1));
	vcdp->chgBit  (c+65,(vlTOPp->v__DOT__scl_t1));
	vcdp->chgBit  (c+66,(vlTOPp->v__DOT__sda_o1));
	vcdp->chgBit  (c+67,(vlTOPp->v__DOT__scl_o1));
	vcdp->chgBit  (c+68,(vlTOPp->v__DOT__mymaster__DOT__rst_timer));
	vcdp->chgBit  (c+69,(vlTOPp->v__DOT__mymaster__DOT__rst_bitcounter));
	vcdp->chgBit  (c+70,(vlTOPp->v__DOT__mymaster__DOT__en_bitcounter));
	vcdp->chgBus  (c+71,(vlTOPp->v__DOT__mymaster__DOT__next_state),32);
    }
}

void Vtop::traceChgThis__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+72,(vlTOPp->v__DOT__myslave__DOT__state_next),5);
	vcdp->chgBus  (c+73,(vlTOPp->v__DOT__myslave__DOT__addr_next),7);
	vcdp->chgBus  (c+74,(vlTOPp->v__DOT__myslave__DOT__data_next),8);
	vcdp->chgBit  (c+75,(vlTOPp->v__DOT__myslave__DOT__data_valid_next));
	vcdp->chgBit  (c+76,(vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next));
	vcdp->chgBit  (c+77,(vlTOPp->v__DOT__myslave__DOT__mode_read_next));
	vcdp->chgBus  (c+78,(vlTOPp->v__DOT__myslave__DOT__bit_count_next),4);
	vcdp->chgBit  (c+79,(vlTOPp->v__DOT__myslave__DOT__data_in_ready_next));
	vcdp->chgBus  (c+80,(vlTOPp->v__DOT__myslave__DOT__data_out_next),8);
	vcdp->chgBit  (c+81,(vlTOPp->v__DOT__myslave__DOT__data_out_valid_next));
	vcdp->chgBit  (c+82,(vlTOPp->v__DOT__myslave__DOT__data_out_last_next));
	vcdp->chgBit  (c+83,(vlTOPp->v__DOT__myslave__DOT__scl_o_next));
	vcdp->chgBit  (c+84,(vlTOPp->v__DOT__myslave__DOT__sda_o_next));
	vcdp->chgBit  (c+85,(vlTOPp->v__DOT__myslave__DOT__bus_addressed_next));
	vcdp->chgBit  (c+86,(vlTOPp->v__DOT__myslave__DOT__scl_posedge));
	vcdp->chgBit  (c+87,(vlTOPp->v__DOT__myslave__DOT__scl_negedge));
	vcdp->chgBit  (c+88,(vlTOPp->v__DOT__myslave__DOT__start_bit));
	vcdp->chgBit  (c+89,(vlTOPp->v__DOT__myslave__DOT__stop_bit));
    }
}

void Vtop::traceChgThis__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+90,(vlTOPp->v__DOT__data_in),8);
	vcdp->chgBit  (c+91,(vlTOPp->v__DOT__data_in_valid));
	vcdp->chgBit  (c+92,(vlTOPp->v__DOT__initiate));
	vcdp->chgBus  (c+93,(vlTOPp->v__DOT__page),8);
	vcdp->chgBus  (c+94,(vlTOPp->v__DOT__offset),8);
	vcdp->chgBus  (c+95,((((IData)(vlTOPp->v__DOT__page) 
			       << 8U) | (IData)(vlTOPp->v__DOT__offset))),16);
	vcdp->chgBus  (c+96,(vlTOPp->v__DOT__mymaster__DOT__global_timer),32);
	vcdp->chgBus  (c+97,(vlTOPp->v__DOT__mymaster__DOT__timer),32);
	vcdp->chgBus  (c+98,(vlTOPp->v__DOT__mymaster__DOT__bitcounter),3);
    }
}

void Vtop::traceChgThis__7(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+99,(vlTOPp->v__DOT__mymaster__DOT__index),32);
	vcdp->chgBus  (c+100,(vlTOPp->v__DOT__mymaster__DOT__current_state),32);
    }
}

void Vtop::traceChgThis__8(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+105,(vlTOPp->sda));
	vcdp->chgBit  (c+106,(vlTOPp->scl));
	vcdp->chgBit  (c+101,(vlTOPp->clk));
	vcdp->chgBit  (c+102,(vlTOPp->rst));
	vcdp->chgBit  (c+103,(vlTOPp->sda_i));
	vcdp->chgBit  (c+104,(vlTOPp->scl_i));
    }
}
