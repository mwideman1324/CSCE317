// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vtop::traceInit, &Vtop::traceFull, &Vtop::traceChg, this);
}
void Vtop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtop* t=(Vtop*)userthis;
    Vtop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vtop::traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtop::traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtop::traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+101,"clk",-1);
	vcdp->declBit  (c+102,"rst",-1);
	vcdp->declBit  (c+103,"sda_i",-1);
	vcdp->declBit  (c+104,"scl_i",-1);
	vcdp->declBit  (c+105,"sda",-1);
	vcdp->declBit  (c+106,"scl",-1);
	vcdp->declBit  (c+101,"v clk",-1);
	vcdp->declBit  (c+102,"v rst",-1);
	vcdp->declBit  (c+103,"v sda_i",-1);
	vcdp->declBit  (c+104,"v scl_i",-1);
	vcdp->declBit  (c+105,"v sda",-1);
	vcdp->declBit  (c+106,"v scl",-1);
	vcdp->declBit  (c+38,"v sda_o2",-1);
	vcdp->declBit  (c+39,"v scl_o2",-1);
	vcdp->declBit  (c+38,"v sda_t2",-1);
	vcdp->declBit  (c+39,"v scl_t2",-1);
	vcdp->declBit  (c+64,"v sda_t1",-1);
	vcdp->declBit  (c+65,"v scl_t1",-1);
	vcdp->declBit  (c+66,"v sda_o1",-1);
	vcdp->declBit  (c+67,"v scl_o1",-1);
	vcdp->declBit  (c+107,"v release_bus",-1);
	vcdp->declBus  (c+90,"v data_in",-1,7,0);
	vcdp->declBit  (c+91,"v data_in_valid",-1);
	vcdp->declBit  (c+40,"v data_in_ready",-1);
	vcdp->declBit  (c+108,"v data_in_last",-1);
	vcdp->declBus  (c+41,"v data_out",-1,7,0);
	vcdp->declBit  (c+42,"v data_out_valid",-1);
	vcdp->declBit  (c+108,"v data_out_ready",-1);
	vcdp->declBit  (c+43,"v data_out_last",-1);
	vcdp->declBit  (c+44,"v busy",-1);
	vcdp->declBus  (c+45,"v bus_address",-1,6,0);
	vcdp->declBit  (c+46,"v bus_addressed",-1);
	vcdp->declBit  (c+47,"v bus_active",-1);
	vcdp->declBit  (c+108,"v enable",-1);
	vcdp->declBus  (c+109,"v device_address",-1,6,0);
	vcdp->declBus  (c+110,"v device_address_mask",-1,6,0);
	vcdp->declBit  (c+92,"v initiate",-1);
	vcdp->declBus  (c+93,"v page",-1,7,0);
	vcdp->declBus  (c+94,"v offset",-1,7,0);
	vcdp->declBit  (c+48,"v data_wren",-1);
	vcdp->declBus  (c+95,"v dataaddr",-1,15,0);
	vcdp->declBus  (c+41,"v data_value",-1,7,0);
	vcdp->declBus  (c+111,"v myslave FILTER_LEN",-1,31,0);
	vcdp->declBit  (c+101,"v myslave clk",-1);
	vcdp->declBit  (c+102,"v myslave rst",-1);
	vcdp->declBit  (c+107,"v myslave release_bus",-1);
	vcdp->declBus  (c+90,"v myslave data_in",-1,7,0);
	vcdp->declBit  (c+91,"v myslave data_in_valid",-1);
	vcdp->declBit  (c+40,"v myslave data_in_ready",-1);
	vcdp->declBit  (c+108,"v myslave data_in_last",-1);
	vcdp->declBus  (c+41,"v myslave data_out",-1,7,0);
	vcdp->declBit  (c+42,"v myslave data_out_valid",-1);
	vcdp->declBit  (c+108,"v myslave data_out_ready",-1);
	vcdp->declBit  (c+43,"v myslave data_out_last",-1);
	vcdp->declBit  (c+104,"v myslave scl_i",-1);
	vcdp->declBit  (c+39,"v myslave scl_o",-1);
	vcdp->declBit  (c+39,"v myslave scl_t",-1);
	vcdp->declBit  (c+103,"v myslave sda_i",-1);
	vcdp->declBit  (c+38,"v myslave sda_o",-1);
	vcdp->declBit  (c+38,"v myslave sda_t",-1);
	vcdp->declBit  (c+44,"v myslave busy",-1);
	vcdp->declBus  (c+45,"v myslave bus_address",-1,6,0);
	vcdp->declBit  (c+46,"v myslave bus_addressed",-1);
	vcdp->declBit  (c+47,"v myslave bus_active",-1);
	vcdp->declBit  (c+108,"v myslave enable",-1);
	vcdp->declBus  (c+109,"v myslave device_address",-1,6,0);
	vcdp->declBus  (c+110,"v myslave device_address_mask",-1,6,0);
	vcdp->declBus  (c+112,"v myslave STATE_IDLE",-1,4,0);
	vcdp->declBus  (c+113,"v myslave STATE_ADDRESS",-1,4,0);
	vcdp->declBus  (c+114,"v myslave STATE_ACK",-1,4,0);
	vcdp->declBus  (c+115,"v myslave STATE_WRITE_1",-1,4,0);
	vcdp->declBus  (c+116,"v myslave STATE_WRITE_2",-1,4,0);
	vcdp->declBus  (c+117,"v myslave STATE_READ_1",-1,4,0);
	vcdp->declBus  (c+118,"v myslave STATE_READ_2",-1,4,0);
	vcdp->declBus  (c+119,"v myslave STATE_READ_3",-1,4,0);
	vcdp->declBus  (c+49,"v myslave state_reg",-1,4,0);
	vcdp->declBus  (c+72,"v myslave state_next",-1,4,0);
	vcdp->declBus  (c+45,"v myslave addr_reg",-1,6,0);
	vcdp->declBus  (c+73,"v myslave addr_next",-1,6,0);
	vcdp->declBus  (c+50,"v myslave data_reg",-1,7,0);
	vcdp->declBus  (c+74,"v myslave data_next",-1,7,0);
	vcdp->declBit  (c+51,"v myslave data_valid_reg",-1);
	vcdp->declBit  (c+75,"v myslave data_valid_next",-1);
	vcdp->declBit  (c+52,"v myslave data_out_reg_valid_reg",-1);
	vcdp->declBit  (c+76,"v myslave data_out_reg_valid_next",-1);
	vcdp->declBit  (c+53,"v myslave last_reg",-1);
	vcdp->declBit  (c+53,"v myslave last_next",-1);
	vcdp->declBit  (c+54,"v myslave mode_read_reg",-1);
	vcdp->declBit  (c+77,"v myslave mode_read_next",-1);
	vcdp->declBus  (c+55,"v myslave bit_count_reg",-1,3,0);
	vcdp->declBus  (c+78,"v myslave bit_count_next",-1,3,0);
	vcdp->declBit  (c+40,"v myslave data_in_ready_reg",-1);
	vcdp->declBit  (c+79,"v myslave data_in_ready_next",-1);
	vcdp->declBus  (c+41,"v myslave data_out_reg",-1,7,0);
	vcdp->declBus  (c+80,"v myslave data_out_next",-1,7,0);
	vcdp->declBit  (c+42,"v myslave data_out_valid_reg",-1);
	vcdp->declBit  (c+81,"v myslave data_out_valid_next",-1);
	vcdp->declBit  (c+43,"v myslave data_out_last_reg",-1);
	vcdp->declBit  (c+82,"v myslave data_out_last_next",-1);
	vcdp->declBus  (c+56,"v myslave scl_i_filter",-1,0,0);
	vcdp->declBus  (c+57,"v myslave sda_i_filter",-1,0,0);
	vcdp->declBit  (c+58,"v myslave scl_i_reg",-1);
	vcdp->declBit  (c+59,"v myslave sda_i_reg",-1);
	vcdp->declBit  (c+39,"v myslave scl_o_reg",-1);
	vcdp->declBit  (c+83,"v myslave scl_o_next",-1);
	vcdp->declBit  (c+38,"v myslave sda_o_reg",-1);
	vcdp->declBit  (c+84,"v myslave sda_o_next",-1);
	vcdp->declBit  (c+60,"v myslave last_scl_i_reg",-1);
	vcdp->declBit  (c+61,"v myslave last_sda_i_reg",-1);
	vcdp->declBit  (c+44,"v myslave busy_reg",-1);
	vcdp->declBit  (c+47,"v myslave bus_active_reg",-1);
	vcdp->declBit  (c+46,"v myslave bus_addressed_reg",-1);
	vcdp->declBit  (c+85,"v myslave bus_addressed_next",-1);
	vcdp->declBit  (c+86,"v myslave scl_posedge",-1);
	vcdp->declBit  (c+87,"v myslave scl_negedge",-1);
	vcdp->declBit  (c+62,"v myslave sda_posedge",-1);
	vcdp->declBit  (c+63,"v myslave sda_negedge",-1);
	vcdp->declBit  (c+88,"v myslave start_bit",-1);
	vcdp->declBit  (c+89,"v myslave stop_bit",-1);
	vcdp->declBit  (c+101,"v mymaster clk",-1);
	vcdp->declBit  (c+102,"v mymaster rst",-1);
	vcdp->declBit  (c+92,"v mymaster initiate",-1);
	vcdp->declBit  (c+103,"v mymaster sda_i",-1);
	vcdp->declBit  (c+104,"v mymaster scl_i",-1);
	vcdp->declBit  (c+66,"v mymaster sda_o",-1);
	vcdp->declBit  (c+67,"v mymaster scl_o",-1);
	vcdp->declBit  (c+64,"v mymaster sda_t",-1);
	vcdp->declBit  (c+65,"v mymaster scl_t",-1);
	vcdp->declBus  (c+120,"v mymaster idle_time",-1,31,0);
	vcdp->declBus  (c+121,"v mymaster PAYLOADS",-1,31,0);
	vcdp->declBus  (c+122,"v mymaster slave_address_datacnt",-1,6,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declBus  (c+1+i*1,"v mymaster payload_sizes",(i+0),7,0);}}
	{int i; for (i=0; i<29; i++) {
		vcdp->declBus  (c+5+i*1,"v mymaster i2c_data",(i+0),7,0);}}
	vcdp->declBus  (c+99,"v mymaster index",-1,31,0);
	vcdp->declBus  (c+34,"v mymaster data_size",-1,31,0);
	vcdp->declBus  (c+96,"v mymaster global_timer",-1,31,0);
	vcdp->declBus  (c+97,"v mymaster timer",-1,31,0);
	vcdp->declBit  (c+68,"v mymaster rst_timer",-1);
	vcdp->declBus  (c+98,"v mymaster bitcounter",-1,2,0);
	vcdp->declBit  (c+69,"v mymaster rst_bitcounter",-1);
	vcdp->declBit  (c+70,"v mymaster en_bitcounter",-1);
	vcdp->declBus  (c+100,"v mymaster current_state",-1,31,0);
	vcdp->declBus  (c+71,"v mymaster next_state",-1,31,0);
	vcdp->declBus  (c+35,"v mymaster unnamedblk1 i",-1,31,0);
	vcdp->declBus  (c+36,"v mymaster unnamedblk1 j",-1,31,0);
	vcdp->declBus  (c+37,"v mymaster unnamedblk1 n",-1,31,0);
    }
}

void Vtop::traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->v__DOT__mymaster__DOT__payload_sizes[0]),8);
	vcdp->fullBus  (c+2,(vlTOPp->v__DOT__mymaster__DOT__payload_sizes[1]),8);
	vcdp->fullBus  (c+3,(vlTOPp->v__DOT__mymaster__DOT__payload_sizes[2]),8);
	vcdp->fullBus  (c+4,(vlTOPp->v__DOT__mymaster__DOT__payload_sizes[3]),8);
	vcdp->fullBus  (c+5,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[0]),8);
	vcdp->fullBus  (c+6,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[1]),8);
	vcdp->fullBus  (c+7,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[2]),8);
	vcdp->fullBus  (c+8,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[3]),8);
	vcdp->fullBus  (c+9,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[4]),8);
	vcdp->fullBus  (c+10,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[5]),8);
	vcdp->fullBus  (c+11,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[6]),8);
	vcdp->fullBus  (c+12,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[7]),8);
	vcdp->fullBus  (c+13,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[8]),8);
	vcdp->fullBus  (c+14,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[9]),8);
	vcdp->fullBus  (c+15,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[10]),8);
	vcdp->fullBus  (c+16,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[11]),8);
	vcdp->fullBus  (c+17,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[12]),8);
	vcdp->fullBus  (c+18,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[13]),8);
	vcdp->fullBus  (c+19,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[14]),8);
	vcdp->fullBus  (c+20,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[15]),8);
	vcdp->fullBus  (c+21,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[16]),8);
	vcdp->fullBus  (c+22,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[17]),8);
	vcdp->fullBus  (c+23,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[18]),8);
	vcdp->fullBus  (c+24,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[19]),8);
	vcdp->fullBus  (c+25,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[20]),8);
	vcdp->fullBus  (c+26,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[21]),8);
	vcdp->fullBus  (c+27,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[22]),8);
	vcdp->fullBus  (c+28,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[23]),8);
	vcdp->fullBus  (c+29,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[24]),8);
	vcdp->fullBus  (c+30,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[25]),8);
	vcdp->fullBus  (c+31,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[26]),8);
	vcdp->fullBus  (c+32,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[27]),8);
	vcdp->fullBus  (c+33,(vlTOPp->v__DOT__mymaster__DOT__i2c_data[28]),8);
	vcdp->fullBus  (c+34,(vlTOPp->v__DOT__mymaster__DOT__data_size),32);
	vcdp->fullBus  (c+35,(vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__i),32);
	vcdp->fullBus  (c+36,(vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__j),32);
	vcdp->fullBus  (c+37,(vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n),32);
	vcdp->fullBit  (c+48,(((IData)(vlTOPp->v__DOT__myslave__DOT__data_out_valid_reg) 
			       & (0x1fU == (IData)(vlTOPp->v__DOT__myslave__DOT__addr_reg)))));
	vcdp->fullBus  (c+49,(vlTOPp->v__DOT__myslave__DOT__state_reg),5);
	vcdp->fullBus  (c+45,(vlTOPp->v__DOT__myslave__DOT__addr_reg),7);
	vcdp->fullBus  (c+50,(vlTOPp->v__DOT__myslave__DOT__data_reg),8);
	vcdp->fullBit  (c+51,(vlTOPp->v__DOT__myslave__DOT__data_valid_reg));
	vcdp->fullBit  (c+52,(vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg));
	vcdp->fullBit  (c+53,(vlTOPp->v__DOT__myslave__DOT__last_reg));
	vcdp->fullBit  (c+54,(vlTOPp->v__DOT__myslave__DOT__mode_read_reg));
	vcdp->fullBus  (c+55,(vlTOPp->v__DOT__myslave__DOT__bit_count_reg),4);
	vcdp->fullBit  (c+40,(vlTOPp->v__DOT__myslave__DOT__data_in_ready_reg));
	vcdp->fullBus  (c+41,(vlTOPp->v__DOT__myslave__DOT__data_out_reg),8);
	vcdp->fullBit  (c+42,(vlTOPp->v__DOT__myslave__DOT__data_out_valid_reg));
	vcdp->fullBit  (c+43,(vlTOPp->v__DOT__myslave__DOT__data_out_last_reg));
	vcdp->fullBus  (c+56,(vlTOPp->v__DOT__myslave__DOT__scl_i_filter),1);
	vcdp->fullBus  (c+57,(vlTOPp->v__DOT__myslave__DOT__sda_i_filter),1);
	vcdp->fullBit  (c+58,(vlTOPp->v__DOT__myslave__DOT__scl_i_reg));
	vcdp->fullBit  (c+59,(vlTOPp->v__DOT__myslave__DOT__sda_i_reg));
	vcdp->fullBit  (c+39,(vlTOPp->v__DOT__myslave__DOT__scl_o_reg));
	vcdp->fullBit  (c+38,(vlTOPp->v__DOT__myslave__DOT__sda_o_reg));
	vcdp->fullBit  (c+60,(vlTOPp->v__DOT__myslave__DOT__last_scl_i_reg));
	vcdp->fullBit  (c+61,(vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg));
	vcdp->fullBit  (c+44,(vlTOPp->v__DOT__myslave__DOT__busy_reg));
	vcdp->fullBit  (c+47,(vlTOPp->v__DOT__myslave__DOT__bus_active_reg));
	vcdp->fullBit  (c+46,(vlTOPp->v__DOT__myslave__DOT__bus_addressed_reg));
	vcdp->fullBit  (c+62,(((IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg) 
			       & (~ (IData)(vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg)))));
	vcdp->fullBit  (c+63,(((~ (IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg)) 
			       & (IData)(vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg))));
	vcdp->fullBit  (c+64,(vlTOPp->v__DOT__sda_t1));
	vcdp->fullBit  (c+65,(vlTOPp->v__DOT__scl_t1));
	vcdp->fullBit  (c+66,(vlTOPp->v__DOT__sda_o1));
	vcdp->fullBit  (c+67,(vlTOPp->v__DOT__scl_o1));
	vcdp->fullBit  (c+68,(vlTOPp->v__DOT__mymaster__DOT__rst_timer));
	vcdp->fullBit  (c+69,(vlTOPp->v__DOT__mymaster__DOT__rst_bitcounter));
	vcdp->fullBit  (c+70,(vlTOPp->v__DOT__mymaster__DOT__en_bitcounter));
	vcdp->fullBus  (c+71,(vlTOPp->v__DOT__mymaster__DOT__next_state),32);
	vcdp->fullBus  (c+72,(vlTOPp->v__DOT__myslave__DOT__state_next),5);
	vcdp->fullBus  (c+73,(vlTOPp->v__DOT__myslave__DOT__addr_next),7);
	vcdp->fullBus  (c+74,(vlTOPp->v__DOT__myslave__DOT__data_next),8);
	vcdp->fullBit  (c+75,(vlTOPp->v__DOT__myslave__DOT__data_valid_next));
	vcdp->fullBit  (c+76,(vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next));
	vcdp->fullBit  (c+77,(vlTOPp->v__DOT__myslave__DOT__mode_read_next));
	vcdp->fullBus  (c+78,(vlTOPp->v__DOT__myslave__DOT__bit_count_next),4);
	vcdp->fullBit  (c+79,(vlTOPp->v__DOT__myslave__DOT__data_in_ready_next));
	vcdp->fullBus  (c+80,(vlTOPp->v__DOT__myslave__DOT__data_out_next),8);
	vcdp->fullBit  (c+81,(vlTOPp->v__DOT__myslave__DOT__data_out_valid_next));
	vcdp->fullBit  (c+82,(vlTOPp->v__DOT__myslave__DOT__data_out_last_next));
	vcdp->fullBit  (c+83,(vlTOPp->v__DOT__myslave__DOT__scl_o_next));
	vcdp->fullBit  (c+84,(vlTOPp->v__DOT__myslave__DOT__sda_o_next));
	vcdp->fullBit  (c+85,(vlTOPp->v__DOT__myslave__DOT__bus_addressed_next));
	vcdp->fullBit  (c+86,(vlTOPp->v__DOT__myslave__DOT__scl_posedge));
	vcdp->fullBit  (c+87,(vlTOPp->v__DOT__myslave__DOT__scl_negedge));
	vcdp->fullBit  (c+88,(vlTOPp->v__DOT__myslave__DOT__start_bit));
	vcdp->fullBit  (c+89,(vlTOPp->v__DOT__myslave__DOT__stop_bit));
	vcdp->fullBus  (c+90,(vlTOPp->v__DOT__data_in),8);
	vcdp->fullBit  (c+91,(vlTOPp->v__DOT__data_in_valid));
	vcdp->fullBit  (c+92,(vlTOPp->v__DOT__initiate));
	vcdp->fullBus  (c+93,(vlTOPp->v__DOT__page),8);
	vcdp->fullBus  (c+94,(vlTOPp->v__DOT__offset),8);
	vcdp->fullBus  (c+95,((((IData)(vlTOPp->v__DOT__page) 
				<< 8U) | (IData)(vlTOPp->v__DOT__offset))),16);
	vcdp->fullBus  (c+96,(vlTOPp->v__DOT__mymaster__DOT__global_timer),32);
	vcdp->fullBus  (c+97,(vlTOPp->v__DOT__mymaster__DOT__timer),32);
	vcdp->fullBus  (c+98,(vlTOPp->v__DOT__mymaster__DOT__bitcounter),3);
	vcdp->fullBus  (c+99,(vlTOPp->v__DOT__mymaster__DOT__index),32);
	vcdp->fullBus  (c+100,(vlTOPp->v__DOT__mymaster__DOT__current_state),32);
	vcdp->fullBit  (c+105,(vlTOPp->sda));
	vcdp->fullBit  (c+106,(vlTOPp->scl));
	vcdp->fullBit  (c+101,(vlTOPp->clk));
	vcdp->fullBit  (c+102,(vlTOPp->rst));
	vcdp->fullBit  (c+103,(vlTOPp->sda_i));
	vcdp->fullBit  (c+104,(vlTOPp->scl_i));
	vcdp->fullBit  (c+107,(0U));
	vcdp->fullBus  (c+109,(0x18U),7);
	vcdp->fullBus  (c+110,(0x78U),7);
	vcdp->fullBus  (c+111,(1U),32);
	vcdp->fullBit  (c+108,(1U));
	vcdp->fullBus  (c+112,(0U),5);
	vcdp->fullBus  (c+113,(1U),5);
	vcdp->fullBus  (c+114,(2U),5);
	vcdp->fullBus  (c+115,(3U),5);
	vcdp->fullBus  (c+116,(4U),5);
	vcdp->fullBus  (c+117,(5U),5);
	vcdp->fullBus  (c+118,(6U),5);
	vcdp->fullBus  (c+119,(7U),5);
	vcdp->fullBus  (c+120,(0xc8U),32);
	vcdp->fullBus  (c+121,(4U),32);
	vcdp->fullBus  (c+122,(0x7aU),7);
    }
}
