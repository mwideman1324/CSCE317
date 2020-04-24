// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    sda_i = VL_RAND_RESET_I(1);
    scl_i = VL_RAND_RESET_I(1);
    sda = VL_RAND_RESET_I(1);
    scl = VL_RAND_RESET_I(1);
    v__DOT__sda_t1 = VL_RAND_RESET_I(1);
    v__DOT__scl_t1 = VL_RAND_RESET_I(1);
    v__DOT__sda_o1 = VL_RAND_RESET_I(1);
    v__DOT__scl_o1 = VL_RAND_RESET_I(1);
    v__DOT__data_in = VL_RAND_RESET_I(8);
    v__DOT__data_in_valid = VL_RAND_RESET_I(1);
    v__DOT__initiate = VL_RAND_RESET_I(1);
    v__DOT__page = VL_RAND_RESET_I(8);
    v__DOT__offset = VL_RAND_RESET_I(8);
    v__DOT__myslave__DOT__state_reg = VL_RAND_RESET_I(5);
    v__DOT__myslave__DOT__state_next = VL_RAND_RESET_I(5);
    v__DOT__myslave__DOT__addr_reg = VL_RAND_RESET_I(7);
    v__DOT__myslave__DOT__addr_next = VL_RAND_RESET_I(7);
    v__DOT__myslave__DOT__data_reg = VL_RAND_RESET_I(8);
    v__DOT__myslave__DOT__data_next = VL_RAND_RESET_I(8);
    v__DOT__myslave__DOT__data_valid_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__data_valid_next = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__data_out_reg_valid_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__data_out_reg_valid_next = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__last_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__last_next = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__mode_read_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__mode_read_next = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__bit_count_reg = VL_RAND_RESET_I(4);
    v__DOT__myslave__DOT__bit_count_next = VL_RAND_RESET_I(4);
    v__DOT__myslave__DOT__data_in_ready_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__data_in_ready_next = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__data_out_reg = VL_RAND_RESET_I(8);
    v__DOT__myslave__DOT__data_out_next = VL_RAND_RESET_I(8);
    v__DOT__myslave__DOT__data_out_valid_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__data_out_valid_next = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__data_out_last_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__data_out_last_next = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__scl_i_filter = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__sda_i_filter = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__scl_i_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__sda_i_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__scl_o_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__scl_o_next = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__sda_o_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__sda_o_next = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__last_scl_i_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__last_sda_i_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__busy_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__bus_active_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__bus_addressed_reg = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__bus_addressed_next = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__scl_posedge = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__scl_negedge = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__start_bit = VL_RAND_RESET_I(1);
    v__DOT__myslave__DOT__stop_bit = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<29; ++__Vi0) {
	    v__DOT__mymaster__DOT__i2c_data[__Vi0] = VL_RAND_RESET_I(8);
    }}
    v__DOT__mymaster__DOT__index = VL_RAND_RESET_I(32);
    v__DOT__mymaster__DOT__data_size = VL_RAND_RESET_I(32);
    v__DOT__mymaster__DOT__global_timer = VL_RAND_RESET_I(32);
    v__DOT__mymaster__DOT__timer = VL_RAND_RESET_I(32);
    v__DOT__mymaster__DOT__rst_timer = VL_RAND_RESET_I(1);
    v__DOT__mymaster__DOT__bitcounter = VL_RAND_RESET_I(3);
    v__DOT__mymaster__DOT__rst_bitcounter = VL_RAND_RESET_I(1);
    v__DOT__mymaster__DOT__en_bitcounter = VL_RAND_RESET_I(1);
    v__DOT__mymaster__DOT__current_state = 0;
    v__DOT__mymaster__DOT__next_state = 0;
    v__DOT__mymaster__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    v__DOT__mymaster__DOT__unnamedblk1__DOT__j = VL_RAND_RESET_I(32);
    v__DOT__mymaster__DOT__unnamedblk1__DOT__n = VL_RAND_RESET_I(32);
    v__DOT__mymaster__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    v__DOT__mymaster__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__rst = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vtop::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at i2c_master.sv:25
    vlTOPp->v__DOT__mymaster__DOT__payload_sizes[0U] = 4U;
    vlTOPp->v__DOT__mymaster__DOT__payload_sizes[1U] = 5U;
    vlTOPp->v__DOT__mymaster__DOT__payload_sizes[2U] = 7U;
    vlTOPp->v__DOT__mymaster__DOT__payload_sizes[3U] = 9U;
    // INITIAL at i2c_slave.v:211
    vlTOPp->v__DOT__myslave__DOT__busy_reg = 0U;
    // INITIAL at i2c_slave.v:187
    vlTOPp->v__DOT__myslave__DOT__last_reg = 0U;
    // INITIAL at i2c_slave.v:184
    vlTOPp->v__DOT__myslave__DOT__data_reg = 0U;
    // INITIAL at i2c_slave.v:185
    vlTOPp->v__DOT__myslave__DOT__data_valid_reg = 0U;
    // INITIAL at i2c_slave.v:186
    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg = 0U;
    // INITIAL at i2c_slave.v:189
    vlTOPp->v__DOT__myslave__DOT__mode_read_reg = 0U;
    // INITIAL at i2c_slave.v:191
    vlTOPp->v__DOT__myslave__DOT__bit_count_reg = 0U;
    // INITIAL at i2c_slave.v:197
    vlTOPp->v__DOT__myslave__DOT__data_out_last_reg = 0U;
    // INITIAL at i2c_slave.v:213
    vlTOPp->v__DOT__myslave__DOT__bus_addressed_reg = 0U;
    // INITIAL at i2c_slave.v:205
    vlTOPp->v__DOT__myslave__DOT__scl_o_reg = 1U;
    // INITIAL at i2c_slave.v:206
    vlTOPp->v__DOT__myslave__DOT__sda_o_reg = 1U;
    // INITIAL at i2c_master.sv:35
    // INITIAL at i2c_slave.v:208
    vlTOPp->v__DOT__myslave__DOT__last_scl_i_reg = 1U;
    // INITIAL at i2c_slave.v:209
    vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg = 1U;
    // INITIAL at i2c_master.sv:38
    vlTOPp->v__DOT__mymaster__DOT__data_size = 0x1dU;
    vlTOPp->v__DOT__mymaster__DOT__i2c_data[0U] = 4U;
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n = 1U;
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
					     & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	= vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound1 = 5U;
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound1;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound1 = 7U;
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound1;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound1 = 9U;
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound1;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT____Vlvbound2 = (0xffU 
						  & VL_RANDOM_I(8));
    if ((0x1cU >= (0x1fU & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n))) {
	vlTOPp->v__DOT__mymaster__DOT__i2c_data[(0x1fU 
						 & vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n)] 
	    = vlTOPp->v__DOT__mymaster__DOT____Vlvbound2;
    }
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n 
	= ((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__n);
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__j = 9U;
    vlTOPp->v__DOT__mymaster__DOT__unnamedblk1__DOT__i = 4U;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__v__DOT__offset,7,0);
    VL_SIG8(__Vdly__v__DOT__myslave__DOT__state_reg,4,0);
    VL_SIG8(__Vdly__v__DOT__myslave__DOT__bus_active_reg,0,0);
    VL_SIG8(__Vdly__v__DOT__mymaster__DOT__bitcounter,2,0);
    VL_SIG(__Vdly__v__DOT__mymaster__DOT__global_timer,31,0);
    VL_SIG(__Vdly__v__DOT__mymaster__DOT__timer,31,0);
    // Body
    __Vdly__v__DOT__mymaster__DOT__global_timer = vlTOPp->v__DOT__mymaster__DOT__global_timer;
    __Vdly__v__DOT__mymaster__DOT__timer = vlTOPp->v__DOT__mymaster__DOT__timer;
    __Vdly__v__DOT__mymaster__DOT__bitcounter = vlTOPp->v__DOT__mymaster__DOT__bitcounter;
    __Vdly__v__DOT__myslave__DOT__bus_active_reg = vlTOPp->v__DOT__myslave__DOT__bus_active_reg;
    __Vdly__v__DOT__myslave__DOT__state_reg = vlTOPp->v__DOT__myslave__DOT__state_reg;
    __Vdly__v__DOT__offset = vlTOPp->v__DOT__offset;
    // ALWAYS at i2c_master.sv:75
    __Vdly__v__DOT__mymaster__DOT__global_timer = ((IData)(vlTOPp->rst)
						    ? 0U
						    : 
						   ((IData)(1U) 
						    + vlTOPp->v__DOT__mymaster__DOT__global_timer));
    // ALWAYS at i2c_slave.v:475
    vlTOPp->v__DOT__myslave__DOT__last_reg = vlTOPp->v__DOT__myslave__DOT__last_next;
    // ALWAYS at i2c_slave.v:472
    vlTOPp->v__DOT__myslave__DOT__data_reg = vlTOPp->v__DOT__myslave__DOT__data_next;
    // ALWAYS at i2c_slave.v:473
    vlTOPp->v__DOT__myslave__DOT__data_valid_reg = vlTOPp->v__DOT__myslave__DOT__data_valid_next;
    // ALWAYS at i2c_slave.v:474
    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg 
	= vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next;
    // ALWAYS at i2c_slave.v:477
    vlTOPp->v__DOT__myslave__DOT__mode_read_reg = vlTOPp->v__DOT__myslave__DOT__mode_read_next;
    // ALWAYS at i2c_slave.v:479
    vlTOPp->v__DOT__myslave__DOT__bit_count_reg = vlTOPp->v__DOT__myslave__DOT__bit_count_next;
    // ALWAYS at i2c_slave.v:482
    vlTOPp->v__DOT__myslave__DOT__data_out_last_reg 
	= vlTOPp->v__DOT__myslave__DOT__data_out_last_next;
    // ALWAYS at i2c_master.sv:81
    __Vdly__v__DOT__mymaster__DOT__timer = ((IData)(vlTOPp->v__DOT__mymaster__DOT__rst_timer)
					     ? 0U : 
					    ((IData)(1U) 
					     + vlTOPp->v__DOT__mymaster__DOT__timer));
    // ALWAYS at i2c_master.sv:86
    if (vlTOPp->v__DOT__mymaster__DOT__rst_bitcounter) {
	__Vdly__v__DOT__mymaster__DOT__bitcounter = 0U;
    } else {
	if (vlTOPp->v__DOT__mymaster__DOT__en_bitcounter) {
	    __Vdly__v__DOT__mymaster__DOT__bitcounter 
		= (7U & ((IData)(1U) + (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)));
	}
    }
    // ALWAYS at top.sv:111
    if (((IData)(vlTOPp->v__DOT__myslave__DOT__data_out_valid_reg) 
	 & (0x1bU == (IData)(vlTOPp->v__DOT__myslave__DOT__addr_reg)))) {
	__Vdly__v__DOT__offset = 0U;
	vlTOPp->v__DOT__page = vlTOPp->v__DOT__myslave__DOT__data_out_reg;
    } else {
	if (((IData)(vlTOPp->v__DOT__myslave__DOT__data_out_valid_reg) 
	     & (0x1fU == (IData)(vlTOPp->v__DOT__myslave__DOT__addr_reg)))) {
	    __Vdly__v__DOT__offset = (0xffU & ((IData)(1U) 
					       + (IData)(vlTOPp->v__DOT__offset)));
	}
    }
    // ALWAYS at top.sv:76
    if (vlTOPp->rst) {
	vlTOPp->v__DOT__initiate = 0U;
    }
    vlTOPp->v__DOT__data_in_valid = 0U;
    vlTOPp->v__DOT__data_in = 0U;
    if (vlTOPp->v__DOT__myslave__DOT__data_in_ready_reg) {
	vlTOPp->v__DOT__data_in_valid = 1U;
	if ((4U == (7U & (IData)(vlTOPp->v__DOT__myslave__DOT__addr_reg)))) {
	    vlTOPp->v__DOT__data_in = 0x36U;
	} else {
	    if ((5U == (7U & (IData)(vlTOPp->v__DOT__myslave__DOT__addr_reg)))) {
		vlTOPp->v__DOT__data_in = 3U;
		vlTOPp->v__DOT__initiate = 1U;
	    } else {
		if ((6U == (7U & (IData)(vlTOPp->v__DOT__myslave__DOT__addr_reg)))) {
		    vlTOPp->v__DOT__data_in = 0U;
		} else {
		    if ((7U == (7U & (IData)(vlTOPp->v__DOT__myslave__DOT__addr_reg)))) {
			vlTOPp->v__DOT__data_in = 0U;
		    }
		}
	    }
	}
    }
    // ALWAYS at i2c_slave.v:500
    vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg = vlTOPp->v__DOT__myslave__DOT__sda_i_reg;
    // ALWAYS at i2c_slave.v:499
    vlTOPp->v__DOT__myslave__DOT__last_scl_i_reg = vlTOPp->v__DOT__myslave__DOT__scl_i_reg;
    vlTOPp->v__DOT__mymaster__DOT__global_timer = __Vdly__v__DOT__mymaster__DOT__global_timer;
    vlTOPp->v__DOT__mymaster__DOT__timer = __Vdly__v__DOT__mymaster__DOT__timer;
    vlTOPp->v__DOT__mymaster__DOT__bitcounter = __Vdly__v__DOT__mymaster__DOT__bitcounter;
    vlTOPp->v__DOT__offset = __Vdly__v__DOT__offset;
    // ALWAYS at i2c_slave.v:247
    vlTOPp->v__DOT__myslave__DOT__last_next = vlTOPp->v__DOT__myslave__DOT__last_reg;
    // ALWAYS at i2c_slave.v:481
    vlTOPp->v__DOT__myslave__DOT__data_out_reg = vlTOPp->v__DOT__myslave__DOT__data_out_next;
    // ALWAYS at i2c_slave.v:471
    vlTOPp->v__DOT__myslave__DOT__addr_reg = vlTOPp->v__DOT__myslave__DOT__addr_next;
    // ALWAYS at i2c_slave.v:493
    if (vlTOPp->v__DOT__myslave__DOT__sda_i_filter) {
	vlTOPp->v__DOT__myslave__DOT__sda_i_reg = 1U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_filter)))) {
	    vlTOPp->v__DOT__myslave__DOT__sda_i_reg = 0U;
	}
    }
    // ALWAYS at i2c_slave.v:487
    if (vlTOPp->v__DOT__myslave__DOT__scl_i_filter) {
	vlTOPp->v__DOT__myslave__DOT__scl_i_reg = 1U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->v__DOT__myslave__DOT__scl_i_filter)))) {
	    vlTOPp->v__DOT__myslave__DOT__scl_i_reg = 0U;
	}
    }
    // ALWAYS at i2c_slave.v:440
    if (vlTOPp->rst) {
	__Vdly__v__DOT__myslave__DOT__state_reg = 0U;
	vlTOPp->v__DOT__myslave__DOT__data_in_ready_reg = 0U;
	vlTOPp->v__DOT__myslave__DOT__data_out_valid_reg = 0U;
	vlTOPp->v__DOT__myslave__DOT__scl_o_reg = 1U;
	vlTOPp->v__DOT__myslave__DOT__sda_o_reg = 1U;
	vlTOPp->v__DOT__myslave__DOT__busy_reg = 0U;
	__Vdly__v__DOT__myslave__DOT__bus_active_reg = 0U;
	vlTOPp->v__DOT__myslave__DOT__bus_addressed_reg = 0U;
    } else {
	__Vdly__v__DOT__myslave__DOT__bus_active_reg 
	    = ((IData)(vlTOPp->v__DOT__myslave__DOT__start_bit) 
	       | ((~ (IData)(vlTOPp->v__DOT__myslave__DOT__stop_bit)) 
		  & (IData)(vlTOPp->v__DOT__myslave__DOT__bus_active_reg)));
	vlTOPp->v__DOT__myslave__DOT__data_in_ready_reg 
	    = vlTOPp->v__DOT__myslave__DOT__data_in_ready_next;
	vlTOPp->v__DOT__myslave__DOT__data_out_valid_reg 
	    = vlTOPp->v__DOT__myslave__DOT__data_out_valid_next;
	vlTOPp->v__DOT__myslave__DOT__scl_o_reg = vlTOPp->v__DOT__myslave__DOT__scl_o_next;
	vlTOPp->v__DOT__myslave__DOT__sda_o_reg = vlTOPp->v__DOT__myslave__DOT__sda_o_next;
	vlTOPp->v__DOT__myslave__DOT__busy_reg = (0U 
						  != (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg));
	vlTOPp->v__DOT__myslave__DOT__bus_addressed_reg 
	    = vlTOPp->v__DOT__myslave__DOT__bus_addressed_next;
	__Vdly__v__DOT__myslave__DOT__state_reg = vlTOPp->v__DOT__myslave__DOT__state_next;
    }
    vlTOPp->v__DOT__myslave__DOT__scl_i_filter = vlTOPp->scl_i;
    vlTOPp->v__DOT__myslave__DOT__sda_i_filter = vlTOPp->sda_i;
    vlTOPp->v__DOT__myslave__DOT__bus_active_reg = __Vdly__v__DOT__myslave__DOT__bus_active_reg;
    vlTOPp->v__DOT__myslave__DOT__state_reg = __Vdly__v__DOT__myslave__DOT__state_reg;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__v__DOT__mymaster__DOT__current_state,31,0);
    VL_SIG(__Vdly__v__DOT__mymaster__DOT__index,31,0);
    // Body
    __Vdly__v__DOT__mymaster__DOT__index = vlTOPp->v__DOT__mymaster__DOT__index;
    __Vdly__v__DOT__mymaster__DOT__current_state = vlTOPp->v__DOT__mymaster__DOT__current_state;
    // ALWAYS at i2c_master.sv:115
    if (vlTOPp->rst) {
	__Vdly__v__DOT__mymaster__DOT__current_state = 0U;
	__Vdly__v__DOT__mymaster__DOT__index = 0U;
    } else {
	if (((8U == vlTOPp->v__DOT__mymaster__DOT__current_state) 
	     & (0U == vlTOPp->v__DOT__mymaster__DOT__next_state))) {
	    __Vdly__v__DOT__mymaster__DOT__index = 
		((IData)(1U) + vlTOPp->v__DOT__mymaster__DOT__index);
	}
	__Vdly__v__DOT__mymaster__DOT__current_state 
	    = vlTOPp->v__DOT__mymaster__DOT__next_state;
    }
    vlTOPp->v__DOT__mymaster__DOT__index = __Vdly__v__DOT__mymaster__DOT__index;
    vlTOPp->v__DOT__mymaster__DOT__current_state = __Vdly__v__DOT__mymaster__DOT__current_state;
    // ALWAYS at i2c_master.sv:129
    vlTOPp->v__DOT__mymaster__DOT__next_state = vlTOPp->v__DOT__mymaster__DOT__current_state;
    if (((((((((0U == vlTOPp->v__DOT__mymaster__DOT__current_state) 
	       | (1U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	      | (2U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	     | (3U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	    | (4U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	   | (5U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	  | (6U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	 | (7U == vlTOPp->v__DOT__mymaster__DOT__current_state))) {
	if ((0U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
	    if (vlTOPp->v__DOT__initiate) {
		vlTOPp->v__DOT__mymaster__DOT__next_state = 1U;
	    }
	} else {
	    if ((1U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
		if ((0xc8U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
		    vlTOPp->v__DOT__mymaster__DOT__next_state = 2U;
		}
	    } else {
		if ((2U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
		    vlTOPp->v__DOT__mymaster__DOT__next_state = 3U;
		} else {
		    if ((3U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
			if (((2U == vlTOPp->v__DOT__mymaster__DOT__timer) 
			     & (6U == (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)))) {
			    vlTOPp->v__DOT__mymaster__DOT__next_state = 4U;
			}
		    } else {
			if ((4U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
			    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
				vlTOPp->v__DOT__mymaster__DOT__next_state = 5U;
			    }
			} else {
			    if ((5U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
				if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
				    vlTOPp->v__DOT__mymaster__DOT__next_state = 6U;
				}
			    } else {
				if ((6U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
				    if (((2U == vlTOPp->v__DOT__mymaster__DOT__timer) 
					 & (7U == (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)))) {
					vlTOPp->v__DOT__mymaster__DOT__next_state = 7U;
				    }
				} else {
				    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
					vlTOPp->v__DOT__mymaster__DOT__next_state = 8U;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((8U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
	    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
		vlTOPp->v__DOT__mymaster__DOT__next_state = 0U;
	    }
	}
    }
    // ALWAYS at i2c_master.sv:168
    vlTOPp->v__DOT__scl_o1 = 1U;
    vlTOPp->v__DOT__scl_t1 = 1U;
    vlTOPp->v__DOT__sda_o1 = 1U;
    vlTOPp->v__DOT__sda_t1 = 1U;
    vlTOPp->v__DOT__mymaster__DOT__rst_timer = 0U;
    vlTOPp->v__DOT__mymaster__DOT__rst_bitcounter = 0U;
    vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 0U;
    if (((((((((0U == vlTOPp->v__DOT__mymaster__DOT__current_state) 
	       | (2U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	      | (3U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	     | (4U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	    | (5U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	   | (6U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	  | (7U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	 | (8U == vlTOPp->v__DOT__mymaster__DOT__current_state))) {
	if ((0U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
	    vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
	} else {
	    if ((2U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
		vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
		vlTOPp->v__DOT__mymaster__DOT__rst_bitcounter = 1U;
		vlTOPp->v__DOT__sda_o1 = 0U;
		vlTOPp->v__DOT__sda_t1 = 0U;
	    } else {
		if ((3U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
		    vlTOPp->v__DOT__scl_t1 = 0U;
		    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
			vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
			vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 1U;
		    }
		    vlTOPp->v__DOT__scl_o1 = (1U == vlTOPp->v__DOT__mymaster__DOT__timer);
		    vlTOPp->v__DOT__sda_o1 = ((6U >= 
					       (7U 
						& ((IData)(6U) 
						   - (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)))) 
					      & (0x7aU 
						 >> 
						 (7U 
						  & ((IData)(6U) 
						     - (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)))));
		    vlTOPp->v__DOT__sda_t1 = 0U;
		} else {
		    if ((4U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
			vlTOPp->v__DOT__scl_t1 = 0U;
			if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
			    vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
			    vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 1U;
			}
			vlTOPp->v__DOT__sda_o1 = 0U;
			vlTOPp->v__DOT__sda_t1 = 0U;
			vlTOPp->v__DOT__scl_o1 = (1U 
						  == vlTOPp->v__DOT__mymaster__DOT__timer);
		    } else {
			if ((5U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
			    vlTOPp->v__DOT__scl_t1 = 1U;
			    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
				vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
				vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 1U;
			    }
			    vlTOPp->v__DOT__mymaster__DOT__rst_bitcounter = 1U;
			    vlTOPp->v__DOT__sda_o1 = 1U;
			    vlTOPp->v__DOT__sda_t1 = 1U;
			    vlTOPp->v__DOT__scl_o1 
				= (1U == vlTOPp->v__DOT__mymaster__DOT__timer);
			} else {
			    if ((6U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
				vlTOPp->v__DOT__scl_t1 = 0U;
				if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
				    vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
				    vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 1U;
				}
				vlTOPp->v__DOT__scl_o1 
				    = (1U == vlTOPp->v__DOT__mymaster__DOT__timer);
				vlTOPp->v__DOT__sda_o1 
				    = (1U & (((0x1cU 
					       >= (0x1fU 
						   & vlTOPp->v__DOT__mymaster__DOT__index))
					       ? vlTOPp->v__DOT__mymaster__DOT__i2c_data
					      [(0x1fU 
						& vlTOPp->v__DOT__mymaster__DOT__index)]
					       : 0U) 
					     >> (7U 
						 & ((IData)(7U) 
						    - (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)))));
				vlTOPp->v__DOT__sda_t1 = 0U;
			    } else {
				if ((7U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
				    vlTOPp->v__DOT__scl_t1 = 1U;
				    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
					vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
					vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 1U;
				    }
				    vlTOPp->v__DOT__sda_o1 = 1U;
				    vlTOPp->v__DOT__sda_t1 = 1U;
				    vlTOPp->v__DOT__scl_o1 
					= (1U == vlTOPp->v__DOT__mymaster__DOT__timer);
				} else {
				    vlTOPp->v__DOT__scl_t1 = 0U;
				    vlTOPp->v__DOT__sda_t1 = 0U;
				    if ((0U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
					vlTOPp->v__DOT__scl_o1 = 0U;
					vlTOPp->v__DOT__sda_o1 = 0U;
				    } else {
					if ((1U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
					    vlTOPp->v__DOT__scl_o1 = 1U;
					    vlTOPp->v__DOT__sda_o1 = 0U;
					} else {
					    vlTOPp->v__DOT__scl_o1 = 1U;
					    vlTOPp->v__DOT__sda_o1 = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void Vtop::_initial__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_initial__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at i2c_slave.v:196
    vlTOPp->v__DOT__myslave__DOT__data_out_valid_reg = 0U;
    // INITIAL at i2c_slave.v:195
    vlTOPp->v__DOT__myslave__DOT__data_out_reg = 0U;
    // INITIAL at i2c_slave.v:193
    vlTOPp->v__DOT__myslave__DOT__data_in_ready_reg = 0U;
    // INITIAL at i2c_slave.v:183
    vlTOPp->v__DOT__myslave__DOT__addr_reg = 0U;
    // INITIAL at i2c_slave.v:203
    vlTOPp->v__DOT__myslave__DOT__sda_i_reg = 1U;
    // INITIAL at i2c_slave.v:202
    vlTOPp->v__DOT__myslave__DOT__scl_i_reg = 1U;
    // INITIAL at i2c_slave.v:200
    vlTOPp->v__DOT__myslave__DOT__sda_i_filter = 1U;
    // INITIAL at i2c_slave.v:199
    vlTOPp->v__DOT__myslave__DOT__scl_i_filter = 1U;
    // INITIAL at i2c_slave.v:212
    vlTOPp->v__DOT__myslave__DOT__bus_active_reg = 0U;
    // INITIAL at i2c_slave.v:181
    vlTOPp->v__DOT__myslave__DOT__state_reg = 0U;
}

void Vtop::_settle__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2c_slave.v:247
    vlTOPp->v__DOT__myslave__DOT__last_next = vlTOPp->v__DOT__myslave__DOT__last_reg;
    // ALWAYS at i2c_master.sv:129
    vlTOPp->v__DOT__mymaster__DOT__next_state = vlTOPp->v__DOT__mymaster__DOT__current_state;
    if (((((((((0U == vlTOPp->v__DOT__mymaster__DOT__current_state) 
	       | (1U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	      | (2U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	     | (3U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	    | (4U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	   | (5U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	  | (6U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	 | (7U == vlTOPp->v__DOT__mymaster__DOT__current_state))) {
	if ((0U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
	    if (vlTOPp->v__DOT__initiate) {
		vlTOPp->v__DOT__mymaster__DOT__next_state = 1U;
	    }
	} else {
	    if ((1U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
		if ((0xc8U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
		    vlTOPp->v__DOT__mymaster__DOT__next_state = 2U;
		}
	    } else {
		if ((2U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
		    vlTOPp->v__DOT__mymaster__DOT__next_state = 3U;
		} else {
		    if ((3U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
			if (((2U == vlTOPp->v__DOT__mymaster__DOT__timer) 
			     & (6U == (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)))) {
			    vlTOPp->v__DOT__mymaster__DOT__next_state = 4U;
			}
		    } else {
			if ((4U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
			    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
				vlTOPp->v__DOT__mymaster__DOT__next_state = 5U;
			    }
			} else {
			    if ((5U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
				if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
				    vlTOPp->v__DOT__mymaster__DOT__next_state = 6U;
				}
			    } else {
				if ((6U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
				    if (((2U == vlTOPp->v__DOT__mymaster__DOT__timer) 
					 & (7U == (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)))) {
					vlTOPp->v__DOT__mymaster__DOT__next_state = 7U;
				    }
				} else {
				    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
					vlTOPp->v__DOT__mymaster__DOT__next_state = 8U;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((8U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
	    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
		vlTOPp->v__DOT__mymaster__DOT__next_state = 0U;
	    }
	}
    }
    // ALWAYS at i2c_master.sv:168
    vlTOPp->v__DOT__scl_o1 = 1U;
    vlTOPp->v__DOT__scl_t1 = 1U;
    vlTOPp->v__DOT__sda_o1 = 1U;
    vlTOPp->v__DOT__sda_t1 = 1U;
    vlTOPp->v__DOT__mymaster__DOT__rst_timer = 0U;
    vlTOPp->v__DOT__mymaster__DOT__rst_bitcounter = 0U;
    vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 0U;
    if (((((((((0U == vlTOPp->v__DOT__mymaster__DOT__current_state) 
	       | (2U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	      | (3U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	     | (4U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	    | (5U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	   | (6U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	  | (7U == vlTOPp->v__DOT__mymaster__DOT__current_state)) 
	 | (8U == vlTOPp->v__DOT__mymaster__DOT__current_state))) {
	if ((0U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
	    vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
	} else {
	    if ((2U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
		vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
		vlTOPp->v__DOT__mymaster__DOT__rst_bitcounter = 1U;
		vlTOPp->v__DOT__sda_o1 = 0U;
		vlTOPp->v__DOT__sda_t1 = 0U;
	    } else {
		if ((3U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
		    vlTOPp->v__DOT__scl_t1 = 0U;
		    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
			vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
			vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 1U;
		    }
		    vlTOPp->v__DOT__scl_o1 = (1U == vlTOPp->v__DOT__mymaster__DOT__timer);
		    vlTOPp->v__DOT__sda_o1 = ((6U >= 
					       (7U 
						& ((IData)(6U) 
						   - (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)))) 
					      & (0x7aU 
						 >> 
						 (7U 
						  & ((IData)(6U) 
						     - (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)))));
		    vlTOPp->v__DOT__sda_t1 = 0U;
		} else {
		    if ((4U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
			vlTOPp->v__DOT__scl_t1 = 0U;
			if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
			    vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
			    vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 1U;
			}
			vlTOPp->v__DOT__sda_o1 = 0U;
			vlTOPp->v__DOT__sda_t1 = 0U;
			vlTOPp->v__DOT__scl_o1 = (1U 
						  == vlTOPp->v__DOT__mymaster__DOT__timer);
		    } else {
			if ((5U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
			    vlTOPp->v__DOT__scl_t1 = 1U;
			    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
				vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
				vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 1U;
			    }
			    vlTOPp->v__DOT__mymaster__DOT__rst_bitcounter = 1U;
			    vlTOPp->v__DOT__sda_o1 = 1U;
			    vlTOPp->v__DOT__sda_t1 = 1U;
			    vlTOPp->v__DOT__scl_o1 
				= (1U == vlTOPp->v__DOT__mymaster__DOT__timer);
			} else {
			    if ((6U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
				vlTOPp->v__DOT__scl_t1 = 0U;
				if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
				    vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
				    vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 1U;
				}
				vlTOPp->v__DOT__scl_o1 
				    = (1U == vlTOPp->v__DOT__mymaster__DOT__timer);
				vlTOPp->v__DOT__sda_o1 
				    = (1U & (((0x1cU 
					       >= (0x1fU 
						   & vlTOPp->v__DOT__mymaster__DOT__index))
					       ? vlTOPp->v__DOT__mymaster__DOT__i2c_data
					      [(0x1fU 
						& vlTOPp->v__DOT__mymaster__DOT__index)]
					       : 0U) 
					     >> (7U 
						 & ((IData)(7U) 
						    - (IData)(vlTOPp->v__DOT__mymaster__DOT__bitcounter)))));
				vlTOPp->v__DOT__sda_t1 = 0U;
			    } else {
				if ((7U == vlTOPp->v__DOT__mymaster__DOT__current_state)) {
				    vlTOPp->v__DOT__scl_t1 = 1U;
				    if ((2U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
					vlTOPp->v__DOT__mymaster__DOT__rst_timer = 1U;
					vlTOPp->v__DOT__mymaster__DOT__en_bitcounter = 1U;
				    }
				    vlTOPp->v__DOT__sda_o1 = 1U;
				    vlTOPp->v__DOT__sda_t1 = 1U;
				    vlTOPp->v__DOT__scl_o1 
					= (1U == vlTOPp->v__DOT__mymaster__DOT__timer);
				} else {
				    vlTOPp->v__DOT__scl_t1 = 0U;
				    vlTOPp->v__DOT__sda_t1 = 0U;
				    if ((0U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
					vlTOPp->v__DOT__scl_o1 = 0U;
					vlTOPp->v__DOT__sda_o1 = 0U;
				    } else {
					if ((1U == vlTOPp->v__DOT__mymaster__DOT__timer)) {
					    vlTOPp->v__DOT__scl_o1 = 1U;
					    vlTOPp->v__DOT__sda_o1 = 0U;
					} else {
					    vlTOPp->v__DOT__scl_o1 = 1U;
					    vlTOPp->v__DOT__sda_o1 = 1U;
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    vlTOPp->v__DOT__myslave__DOT__scl_posedge = ((IData)(vlTOPp->v__DOT__myslave__DOT__scl_i_reg) 
						 & (~ (IData)(vlTOPp->v__DOT__myslave__DOT__last_scl_i_reg)));
    vlTOPp->v__DOT__myslave__DOT__scl_negedge = ((~ (IData)(vlTOPp->v__DOT__myslave__DOT__scl_i_reg)) 
						 & (IData)(vlTOPp->v__DOT__myslave__DOT__last_scl_i_reg));
    vlTOPp->v__DOT__myslave__DOT__start_bit = (((~ (IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg)) 
						& (IData)(vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg)) 
					       & (IData)(vlTOPp->v__DOT__myslave__DOT__scl_i_reg));
    vlTOPp->v__DOT__myslave__DOT__stop_bit = (((IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg) 
					       & (~ (IData)(vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg))) 
					      & (IData)(vlTOPp->v__DOT__myslave__DOT__scl_i_reg));
    vlTOPp->scl = ((IData)(vlTOPp->v__DOT__scl_t1) ? 
		   ((IData)(vlTOPp->v__DOT__myslave__DOT__scl_o_reg)
		     ? (IData)(vlTOPp->scl_i) : (IData)(vlTOPp->v__DOT__myslave__DOT__scl_o_reg))
		    : (IData)(vlTOPp->v__DOT__scl_o1));
    vlTOPp->sda = ((IData)(vlTOPp->v__DOT__sda_t1) ? 
		   ((IData)(vlTOPp->v__DOT__myslave__DOT__sda_o_reg)
		     ? (IData)(vlTOPp->sda_i) : (IData)(vlTOPp->v__DOT__myslave__DOT__sda_o_reg))
		    : (IData)(vlTOPp->v__DOT__sda_o1));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__myslave__DOT__scl_posedge = ((IData)(vlTOPp->v__DOT__myslave__DOT__scl_i_reg) 
						 & (~ (IData)(vlTOPp->v__DOT__myslave__DOT__last_scl_i_reg)));
    vlTOPp->v__DOT__myslave__DOT__scl_negedge = ((~ (IData)(vlTOPp->v__DOT__myslave__DOT__scl_i_reg)) 
						 & (IData)(vlTOPp->v__DOT__myslave__DOT__last_scl_i_reg));
    vlTOPp->v__DOT__myslave__DOT__start_bit = (((~ (IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg)) 
						& (IData)(vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg)) 
					       & (IData)(vlTOPp->v__DOT__myslave__DOT__scl_i_reg));
    vlTOPp->v__DOT__myslave__DOT__stop_bit = (((IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg) 
					       & (~ (IData)(vlTOPp->v__DOT__myslave__DOT__last_sda_i_reg))) 
					      & (IData)(vlTOPp->v__DOT__myslave__DOT__scl_i_reg));
    // ALWAYS at i2c_slave.v:241
    vlTOPp->v__DOT__myslave__DOT__state_next = 0U;
    vlTOPp->v__DOT__myslave__DOT__addr_next = vlTOPp->v__DOT__myslave__DOT__addr_reg;
    vlTOPp->v__DOT__myslave__DOT__data_next = vlTOPp->v__DOT__myslave__DOT__data_reg;
    vlTOPp->v__DOT__myslave__DOT__data_valid_next = vlTOPp->v__DOT__myslave__DOT__data_valid_reg;
    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next 
	= vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg;
    vlTOPp->v__DOT__myslave__DOT__mode_read_next = vlTOPp->v__DOT__myslave__DOT__mode_read_reg;
    vlTOPp->v__DOT__myslave__DOT__bit_count_next = vlTOPp->v__DOT__myslave__DOT__bit_count_reg;
    vlTOPp->v__DOT__myslave__DOT__data_in_ready_next = 0U;
    vlTOPp->v__DOT__myslave__DOT__data_out_next = vlTOPp->v__DOT__myslave__DOT__data_out_reg;
    vlTOPp->v__DOT__myslave__DOT__data_out_valid_next = 0U;
    vlTOPp->v__DOT__myslave__DOT__data_out_last_next 
	= vlTOPp->v__DOT__myslave__DOT__data_out_last_reg;
    vlTOPp->v__DOT__myslave__DOT__scl_o_next = vlTOPp->v__DOT__myslave__DOT__scl_o_reg;
    vlTOPp->v__DOT__myslave__DOT__sda_o_next = vlTOPp->v__DOT__myslave__DOT__sda_o_reg;
    vlTOPp->v__DOT__myslave__DOT__bus_addressed_next 
	= vlTOPp->v__DOT__myslave__DOT__bus_addressed_reg;
    if (vlTOPp->v__DOT__myslave__DOT__start_bit) {
	vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
	vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next = 0U;
	vlTOPp->v__DOT__myslave__DOT__bit_count_next = 7U;
	vlTOPp->v__DOT__myslave__DOT__data_out_last_next = 1U;
	vlTOPp->v__DOT__myslave__DOT__data_out_valid_next 
	    = vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg;
	vlTOPp->v__DOT__myslave__DOT__bus_addressed_next = 0U;
	vlTOPp->v__DOT__myslave__DOT__state_next = 1U;
    } else {
	if (vlTOPp->v__DOT__myslave__DOT__stop_bit) {
	    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
	    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next = 0U;
	    vlTOPp->v__DOT__myslave__DOT__data_out_last_next = 1U;
	    vlTOPp->v__DOT__myslave__DOT__data_out_valid_next 
		= vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg;
	    vlTOPp->v__DOT__myslave__DOT__bus_addressed_next = 0U;
	    vlTOPp->v__DOT__myslave__DOT__state_next = 0U;
	} else {
	    if (((((((((0U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg)) 
		       | (1U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		      | (2U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		     | (3U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		    | (4U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		   | (5U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		  | (6U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		 | (7U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg)))) {
		if ((0U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
		    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
		    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next = 0U;
		    vlTOPp->v__DOT__myslave__DOT__bus_addressed_next = 0U;
		    vlTOPp->v__DOT__myslave__DOT__state_next = 0U;
		} else {
		    if ((1U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
			if (vlTOPp->v__DOT__myslave__DOT__scl_posedge) {
			    if ((0U < (IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg))) {
				vlTOPp->v__DOT__myslave__DOT__bit_count_next 
				    = (0xfU & ((IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg) 
					       - (IData)(1U)));
				vlTOPp->v__DOT__myslave__DOT__data_next 
				    = ((0xfeU & ((IData)(vlTOPp->v__DOT__myslave__DOT__data_reg) 
						 << 1U)) 
				       | (IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg));
				vlTOPp->v__DOT__myslave__DOT__state_next = 1U;
			    } else {
				if ((0x18U == (0x78U 
					       & (IData)(vlTOPp->v__DOT__myslave__DOT__data_reg)))) {
				    vlTOPp->v__DOT__myslave__DOT__addr_next 
					= (0x7fU & (IData)(vlTOPp->v__DOT__myslave__DOT__data_reg));
				    vlTOPp->v__DOT__myslave__DOT__mode_read_next 
					= vlTOPp->v__DOT__myslave__DOT__sda_i_reg;
				    vlTOPp->v__DOT__myslave__DOT__bus_addressed_next = 1U;
				    vlTOPp->v__DOT__myslave__DOT__state_next = 2U;
				} else {
				    vlTOPp->v__DOT__myslave__DOT__state_next = 0U;
				}
			    }
			} else {
			    vlTOPp->v__DOT__myslave__DOT__state_next = 1U;
			}
		    } else {
			if ((2U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
			    if (vlTOPp->v__DOT__myslave__DOT__scl_negedge) {
				vlTOPp->v__DOT__myslave__DOT__sda_o_next = 0U;
				vlTOPp->v__DOT__myslave__DOT__bit_count_next = 7U;
				if (vlTOPp->v__DOT__myslave__DOT__mode_read_reg) {
				    vlTOPp->v__DOT__myslave__DOT__data_in_ready_next = 1U;
				    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
				    vlTOPp->v__DOT__myslave__DOT__state_next = 5U;
				} else {
				    vlTOPp->v__DOT__myslave__DOT__state_next = 3U;
				}
			    } else {
				vlTOPp->v__DOT__myslave__DOT__state_next = 2U;
			    }
			} else {
			    if ((3U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
				if ((1U & ((IData)(vlTOPp->v__DOT__myslave__DOT__scl_negedge) 
					   | (~ (IData)(vlTOPp->v__DOT__myslave__DOT__scl_o_reg))))) {
				    vlTOPp->v__DOT__myslave__DOT__sda_o_next = 1U;
				    vlTOPp->v__DOT__myslave__DOT__scl_o_next = 1U;
				    if (vlTOPp->v__DOT__myslave__DOT__data_valid_reg) {
					vlTOPp->v__DOT__myslave__DOT__data_out_next 
					    = vlTOPp->v__DOT__myslave__DOT__data_reg;
					vlTOPp->v__DOT__myslave__DOT__data_out_last_next = 0U;
				    }
				    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
				    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next 
					= vlTOPp->v__DOT__myslave__DOT__data_valid_reg;
				    vlTOPp->v__DOT__myslave__DOT__state_next = 4U;
				} else {
				    vlTOPp->v__DOT__myslave__DOT__state_next = 3U;
				}
			    } else {
				if ((4U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
				    if (vlTOPp->v__DOT__myslave__DOT__scl_posedge) {
					vlTOPp->v__DOT__myslave__DOT__data_next 
					    = ((0xfeU 
						& ((IData)(vlTOPp->v__DOT__myslave__DOT__data_reg) 
						   << 1U)) 
					       | (IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg));
					if ((0U < (IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg))) {
					    vlTOPp->v__DOT__myslave__DOT__bit_count_next 
						= (0xfU 
						   & ((IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg) 
						      - (IData)(1U)));
					    vlTOPp->v__DOT__myslave__DOT__state_next = 4U;
					} else {
					    vlTOPp->v__DOT__myslave__DOT__data_out_valid_next 
						= vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg;
					    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next = 0U;
					    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 1U;
					    vlTOPp->v__DOT__myslave__DOT__state_next = 2U;
					}
				    } else {
					vlTOPp->v__DOT__myslave__DOT__state_next = 4U;
				    }
				} else {
				    if ((5U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
					if (((IData)(vlTOPp->v__DOT__myslave__DOT__data_in_ready_reg) 
					     & (IData)(vlTOPp->v__DOT__data_in_valid))) {
					    vlTOPp->v__DOT__myslave__DOT__data_in_ready_next = 0U;
					    vlTOPp->v__DOT__myslave__DOT__data_next 
						= vlTOPp->v__DOT__data_in;
					    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 1U;
					} else {
					    vlTOPp->v__DOT__myslave__DOT__data_in_ready_next 
						= (1U 
						   & (~ (IData)(vlTOPp->v__DOT__myslave__DOT__data_valid_reg)));
					}
					if ((1U & ((IData)(vlTOPp->v__DOT__myslave__DOT__scl_negedge) 
						   | (~ (IData)(vlTOPp->v__DOT__myslave__DOT__scl_o_reg))))) {
					    if (vlTOPp->v__DOT__myslave__DOT__data_valid_reg) {
						vlTOPp->v__DOT__myslave__DOT__scl_o_next = 1U;
						vlTOPp->v__DOT__myslave__DOT__sda_o_next 
						    = 
						    (1U 
						     & ((IData)(vlTOPp->v__DOT__myslave__DOT__data_reg) 
							>> 7U));
						vlTOPp->v__DOT__myslave__DOT__data_next 
						    = 
						    (0xfeU 
						     & ((IData)(vlTOPp->v__DOT__myslave__DOT__data_reg) 
							<< 1U));
						if (
						    (0U 
						     < (IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg))) {
						    vlTOPp->v__DOT__myslave__DOT__bit_count_next 
							= 
							(0xfU 
							 & ((IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg) 
							    - (IData)(1U)));
						    vlTOPp->v__DOT__myslave__DOT__state_next = 5U;
						} else {
						    vlTOPp->v__DOT__myslave__DOT__state_next = 6U;
						}
					    } else {
						vlTOPp->v__DOT__myslave__DOT__scl_o_next = 0U;
						vlTOPp->v__DOT__myslave__DOT__state_next = 5U;
					    }
					} else {
					    vlTOPp->v__DOT__myslave__DOT__state_next = 5U;
					}
				    } else {
					if ((6U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
					    if (vlTOPp->v__DOT__myslave__DOT__scl_negedge) {
						vlTOPp->v__DOT__myslave__DOT__sda_o_next = 1U;
						vlTOPp->v__DOT__myslave__DOT__state_next = 7U;
					    } else {
						vlTOPp->v__DOT__myslave__DOT__state_next = 6U;
					    }
					} else {
					    if (vlTOPp->v__DOT__myslave__DOT__scl_posedge) {
						if (vlTOPp->v__DOT__myslave__DOT__sda_i_reg) {
						    vlTOPp->v__DOT__myslave__DOT__state_next = 0U;
						} else {
						    vlTOPp->v__DOT__myslave__DOT__bit_count_next = 7U;
						    vlTOPp->v__DOT__myslave__DOT__data_in_ready_next = 1U;
						    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
						    vlTOPp->v__DOT__myslave__DOT__state_next = 5U;
						}
					    } else {
						vlTOPp->v__DOT__myslave__DOT__state_next = 7U;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

VL_INLINE_OPT void Vtop::_combo__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_combo__TOP__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->scl = ((IData)(vlTOPp->v__DOT__scl_t1) ? 
		   ((IData)(vlTOPp->v__DOT__myslave__DOT__scl_o_reg)
		     ? (IData)(vlTOPp->scl_i) : (IData)(vlTOPp->v__DOT__myslave__DOT__scl_o_reg))
		    : (IData)(vlTOPp->v__DOT__scl_o1));
    vlTOPp->sda = ((IData)(vlTOPp->v__DOT__sda_t1) ? 
		   ((IData)(vlTOPp->v__DOT__myslave__DOT__sda_o_reg)
		     ? (IData)(vlTOPp->sda_i) : (IData)(vlTOPp->v__DOT__myslave__DOT__sda_o_reg))
		    : (IData)(vlTOPp->v__DOT__sda_o1));
}

void Vtop::_settle__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at i2c_slave.v:241
    vlTOPp->v__DOT__myslave__DOT__state_next = 0U;
    vlTOPp->v__DOT__myslave__DOT__addr_next = vlTOPp->v__DOT__myslave__DOT__addr_reg;
    vlTOPp->v__DOT__myslave__DOT__data_next = vlTOPp->v__DOT__myslave__DOT__data_reg;
    vlTOPp->v__DOT__myslave__DOT__data_valid_next = vlTOPp->v__DOT__myslave__DOT__data_valid_reg;
    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next 
	= vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg;
    vlTOPp->v__DOT__myslave__DOT__mode_read_next = vlTOPp->v__DOT__myslave__DOT__mode_read_reg;
    vlTOPp->v__DOT__myslave__DOT__bit_count_next = vlTOPp->v__DOT__myslave__DOT__bit_count_reg;
    vlTOPp->v__DOT__myslave__DOT__data_in_ready_next = 0U;
    vlTOPp->v__DOT__myslave__DOT__data_out_next = vlTOPp->v__DOT__myslave__DOT__data_out_reg;
    vlTOPp->v__DOT__myslave__DOT__data_out_valid_next = 0U;
    vlTOPp->v__DOT__myslave__DOT__data_out_last_next 
	= vlTOPp->v__DOT__myslave__DOT__data_out_last_reg;
    vlTOPp->v__DOT__myslave__DOT__scl_o_next = vlTOPp->v__DOT__myslave__DOT__scl_o_reg;
    vlTOPp->v__DOT__myslave__DOT__sda_o_next = vlTOPp->v__DOT__myslave__DOT__sda_o_reg;
    vlTOPp->v__DOT__myslave__DOT__bus_addressed_next 
	= vlTOPp->v__DOT__myslave__DOT__bus_addressed_reg;
    if (vlTOPp->v__DOT__myslave__DOT__start_bit) {
	vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
	vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next = 0U;
	vlTOPp->v__DOT__myslave__DOT__bit_count_next = 7U;
	vlTOPp->v__DOT__myslave__DOT__data_out_last_next = 1U;
	vlTOPp->v__DOT__myslave__DOT__data_out_valid_next 
	    = vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg;
	vlTOPp->v__DOT__myslave__DOT__bus_addressed_next = 0U;
	vlTOPp->v__DOT__myslave__DOT__state_next = 1U;
    } else {
	if (vlTOPp->v__DOT__myslave__DOT__stop_bit) {
	    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
	    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next = 0U;
	    vlTOPp->v__DOT__myslave__DOT__data_out_last_next = 1U;
	    vlTOPp->v__DOT__myslave__DOT__data_out_valid_next 
		= vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg;
	    vlTOPp->v__DOT__myslave__DOT__bus_addressed_next = 0U;
	    vlTOPp->v__DOT__myslave__DOT__state_next = 0U;
	} else {
	    if (((((((((0U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg)) 
		       | (1U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		      | (2U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		     | (3U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		    | (4U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		   | (5U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		  | (6U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) 
		 | (7U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg)))) {
		if ((0U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
		    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
		    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next = 0U;
		    vlTOPp->v__DOT__myslave__DOT__bus_addressed_next = 0U;
		    vlTOPp->v__DOT__myslave__DOT__state_next = 0U;
		} else {
		    if ((1U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
			if (vlTOPp->v__DOT__myslave__DOT__scl_posedge) {
			    if ((0U < (IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg))) {
				vlTOPp->v__DOT__myslave__DOT__bit_count_next 
				    = (0xfU & ((IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg) 
					       - (IData)(1U)));
				vlTOPp->v__DOT__myslave__DOT__data_next 
				    = ((0xfeU & ((IData)(vlTOPp->v__DOT__myslave__DOT__data_reg) 
						 << 1U)) 
				       | (IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg));
				vlTOPp->v__DOT__myslave__DOT__state_next = 1U;
			    } else {
				if ((0x18U == (0x78U 
					       & (IData)(vlTOPp->v__DOT__myslave__DOT__data_reg)))) {
				    vlTOPp->v__DOT__myslave__DOT__addr_next 
					= (0x7fU & (IData)(vlTOPp->v__DOT__myslave__DOT__data_reg));
				    vlTOPp->v__DOT__myslave__DOT__mode_read_next 
					= vlTOPp->v__DOT__myslave__DOT__sda_i_reg;
				    vlTOPp->v__DOT__myslave__DOT__bus_addressed_next = 1U;
				    vlTOPp->v__DOT__myslave__DOT__state_next = 2U;
				} else {
				    vlTOPp->v__DOT__myslave__DOT__state_next = 0U;
				}
			    }
			} else {
			    vlTOPp->v__DOT__myslave__DOT__state_next = 1U;
			}
		    } else {
			if ((2U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
			    if (vlTOPp->v__DOT__myslave__DOT__scl_negedge) {
				vlTOPp->v__DOT__myslave__DOT__sda_o_next = 0U;
				vlTOPp->v__DOT__myslave__DOT__bit_count_next = 7U;
				if (vlTOPp->v__DOT__myslave__DOT__mode_read_reg) {
				    vlTOPp->v__DOT__myslave__DOT__data_in_ready_next = 1U;
				    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
				    vlTOPp->v__DOT__myslave__DOT__state_next = 5U;
				} else {
				    vlTOPp->v__DOT__myslave__DOT__state_next = 3U;
				}
			    } else {
				vlTOPp->v__DOT__myslave__DOT__state_next = 2U;
			    }
			} else {
			    if ((3U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
				if ((1U & ((IData)(vlTOPp->v__DOT__myslave__DOT__scl_negedge) 
					   | (~ (IData)(vlTOPp->v__DOT__myslave__DOT__scl_o_reg))))) {
				    vlTOPp->v__DOT__myslave__DOT__sda_o_next = 1U;
				    vlTOPp->v__DOT__myslave__DOT__scl_o_next = 1U;
				    if (vlTOPp->v__DOT__myslave__DOT__data_valid_reg) {
					vlTOPp->v__DOT__myslave__DOT__data_out_next 
					    = vlTOPp->v__DOT__myslave__DOT__data_reg;
					vlTOPp->v__DOT__myslave__DOT__data_out_last_next = 0U;
				    }
				    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
				    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next 
					= vlTOPp->v__DOT__myslave__DOT__data_valid_reg;
				    vlTOPp->v__DOT__myslave__DOT__state_next = 4U;
				} else {
				    vlTOPp->v__DOT__myslave__DOT__state_next = 3U;
				}
			    } else {
				if ((4U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
				    if (vlTOPp->v__DOT__myslave__DOT__scl_posedge) {
					vlTOPp->v__DOT__myslave__DOT__data_next 
					    = ((0xfeU 
						& ((IData)(vlTOPp->v__DOT__myslave__DOT__data_reg) 
						   << 1U)) 
					       | (IData)(vlTOPp->v__DOT__myslave__DOT__sda_i_reg));
					if ((0U < (IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg))) {
					    vlTOPp->v__DOT__myslave__DOT__bit_count_next 
						= (0xfU 
						   & ((IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg) 
						      - (IData)(1U)));
					    vlTOPp->v__DOT__myslave__DOT__state_next = 4U;
					} else {
					    vlTOPp->v__DOT__myslave__DOT__data_out_valid_next 
						= vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_reg;
					    vlTOPp->v__DOT__myslave__DOT__data_out_reg_valid_next = 0U;
					    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 1U;
					    vlTOPp->v__DOT__myslave__DOT__state_next = 2U;
					}
				    } else {
					vlTOPp->v__DOT__myslave__DOT__state_next = 4U;
				    }
				} else {
				    if ((5U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
					if (((IData)(vlTOPp->v__DOT__myslave__DOT__data_in_ready_reg) 
					     & (IData)(vlTOPp->v__DOT__data_in_valid))) {
					    vlTOPp->v__DOT__myslave__DOT__data_in_ready_next = 0U;
					    vlTOPp->v__DOT__myslave__DOT__data_next 
						= vlTOPp->v__DOT__data_in;
					    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 1U;
					} else {
					    vlTOPp->v__DOT__myslave__DOT__data_in_ready_next 
						= (1U 
						   & (~ (IData)(vlTOPp->v__DOT__myslave__DOT__data_valid_reg)));
					}
					if ((1U & ((IData)(vlTOPp->v__DOT__myslave__DOT__scl_negedge) 
						   | (~ (IData)(vlTOPp->v__DOT__myslave__DOT__scl_o_reg))))) {
					    if (vlTOPp->v__DOT__myslave__DOT__data_valid_reg) {
						vlTOPp->v__DOT__myslave__DOT__scl_o_next = 1U;
						vlTOPp->v__DOT__myslave__DOT__sda_o_next 
						    = 
						    (1U 
						     & ((IData)(vlTOPp->v__DOT__myslave__DOT__data_reg) 
							>> 7U));
						vlTOPp->v__DOT__myslave__DOT__data_next 
						    = 
						    (0xfeU 
						     & ((IData)(vlTOPp->v__DOT__myslave__DOT__data_reg) 
							<< 1U));
						if (
						    (0U 
						     < (IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg))) {
						    vlTOPp->v__DOT__myslave__DOT__bit_count_next 
							= 
							(0xfU 
							 & ((IData)(vlTOPp->v__DOT__myslave__DOT__bit_count_reg) 
							    - (IData)(1U)));
						    vlTOPp->v__DOT__myslave__DOT__state_next = 5U;
						} else {
						    vlTOPp->v__DOT__myslave__DOT__state_next = 6U;
						}
					    } else {
						vlTOPp->v__DOT__myslave__DOT__scl_o_next = 0U;
						vlTOPp->v__DOT__myslave__DOT__state_next = 5U;
					    }
					} else {
					    vlTOPp->v__DOT__myslave__DOT__state_next = 5U;
					}
				    } else {
					if ((6U == (IData)(vlTOPp->v__DOT__myslave__DOT__state_reg))) {
					    if (vlTOPp->v__DOT__myslave__DOT__scl_negedge) {
						vlTOPp->v__DOT__myslave__DOT__sda_o_next = 1U;
						vlTOPp->v__DOT__myslave__DOT__state_next = 7U;
					    } else {
						vlTOPp->v__DOT__myslave__DOT__state_next = 6U;
					    }
					} else {
					    if (vlTOPp->v__DOT__myslave__DOT__scl_posedge) {
						if (vlTOPp->v__DOT__myslave__DOT__sda_i_reg) {
						    vlTOPp->v__DOT__myslave__DOT__state_next = 0U;
						} else {
						    vlTOPp->v__DOT__myslave__DOT__bit_count_next = 7U;
						    vlTOPp->v__DOT__myslave__DOT__data_in_ready_next = 1U;
						    vlTOPp->v__DOT__myslave__DOT__data_valid_next = 0U;
						    vlTOPp->v__DOT__myslave__DOT__state_next = 5U;
						}
					    } else {
						vlTOPp->v__DOT__myslave__DOT__state_next = 7U;
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->rst) & (~ (IData)(vlTOPp->__Vclklast__TOP__rst))))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst = vlTOPp->rst;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_initial__TOP__4(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__8(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
