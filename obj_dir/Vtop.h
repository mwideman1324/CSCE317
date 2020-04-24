// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_H_
#define _Vtop_H_

#include "verilated.h"
class Vtop__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vtop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(sda_i,0,0);
    VL_IN8(scl_i,0,0);
    VL_OUT8(sda,0,0);
    VL_OUT8(scl,0,0);
    //char	__VpadToAlign6[2];
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__sda_t1,0,0);
    VL_SIG8(v__DOT__scl_t1,0,0);
    VL_SIG8(v__DOT__sda_o1,0,0);
    VL_SIG8(v__DOT__scl_o1,0,0);
    VL_SIG8(v__DOT__data_in,7,0);
    VL_SIG8(v__DOT__data_in_valid,0,0);
    VL_SIG8(v__DOT__initiate,0,0);
    VL_SIG8(v__DOT__page,7,0);
    VL_SIG8(v__DOT__offset,7,0);
    VL_SIG8(v__DOT__myslave__DOT__state_reg,4,0);
    VL_SIG8(v__DOT__myslave__DOT__state_next,4,0);
    VL_SIG8(v__DOT__myslave__DOT__addr_reg,6,0);
    VL_SIG8(v__DOT__myslave__DOT__addr_next,6,0);
    VL_SIG8(v__DOT__myslave__DOT__data_reg,7,0);
    VL_SIG8(v__DOT__myslave__DOT__data_next,7,0);
    VL_SIG8(v__DOT__myslave__DOT__data_valid_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__data_valid_next,0,0);
    VL_SIG8(v__DOT__myslave__DOT__data_out_reg_valid_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__data_out_reg_valid_next,0,0);
    VL_SIG8(v__DOT__myslave__DOT__last_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__last_next,0,0);
    VL_SIG8(v__DOT__myslave__DOT__mode_read_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__mode_read_next,0,0);
    VL_SIG8(v__DOT__myslave__DOT__bit_count_reg,3,0);
    VL_SIG8(v__DOT__myslave__DOT__bit_count_next,3,0);
    VL_SIG8(v__DOT__myslave__DOT__data_in_ready_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__data_in_ready_next,0,0);
    VL_SIG8(v__DOT__myslave__DOT__data_out_reg,7,0);
    VL_SIG8(v__DOT__myslave__DOT__data_out_next,7,0);
    VL_SIG8(v__DOT__myslave__DOT__data_out_valid_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__data_out_valid_next,0,0);
    VL_SIG8(v__DOT__myslave__DOT__data_out_last_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__data_out_last_next,0,0);
    VL_SIG8(v__DOT__myslave__DOT__scl_i_filter,0,0);
    VL_SIG8(v__DOT__myslave__DOT__sda_i_filter,0,0);
    VL_SIG8(v__DOT__myslave__DOT__scl_i_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__sda_i_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__scl_o_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__scl_o_next,0,0);
    VL_SIG8(v__DOT__myslave__DOT__sda_o_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__sda_o_next,0,0);
    VL_SIG8(v__DOT__myslave__DOT__last_scl_i_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__last_sda_i_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__busy_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__bus_active_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__bus_addressed_reg,0,0);
    VL_SIG8(v__DOT__myslave__DOT__bus_addressed_next,0,0);
    VL_SIG8(v__DOT__myslave__DOT__scl_posedge,0,0);
    VL_SIG8(v__DOT__myslave__DOT__scl_negedge,0,0);
    VL_SIG8(v__DOT__myslave__DOT__start_bit,0,0);
    VL_SIG8(v__DOT__myslave__DOT__stop_bit,0,0);
    VL_SIG8(v__DOT__mymaster__DOT__rst_timer,0,0);
    VL_SIG8(v__DOT__mymaster__DOT__bitcounter,2,0);
    VL_SIG8(v__DOT__mymaster__DOT__rst_bitcounter,0,0);
    VL_SIG8(v__DOT__mymaster__DOT__en_bitcounter,0,0);
    //char	__VpadToAlign67[1];
    VL_SIG(v__DOT__mymaster__DOT__index,31,0);
    VL_SIG(v__DOT__mymaster__DOT__data_size,31,0);
    VL_SIG(v__DOT__mymaster__DOT__global_timer,31,0);
    VL_SIG(v__DOT__mymaster__DOT__timer,31,0);
    VL_SIG(v__DOT__mymaster__DOT__current_state,31,0);
    VL_SIG(v__DOT__mymaster__DOT__next_state,31,0);
    VL_SIG(v__DOT__mymaster__DOT__unnamedblk1__DOT__i,31,0);
    VL_SIG(v__DOT__mymaster__DOT__unnamedblk1__DOT__j,31,0);
    VL_SIG(v__DOT__mymaster__DOT__unnamedblk1__DOT__n,31,0);
    VL_SIG8(v__DOT__mymaster__DOT__i2c_data[29],7,0);
    //char	__VpadToAlign133[3];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__mymaster__DOT____Vlvbound1,7,0);
    VL_SIG8(v__DOT__mymaster__DOT____Vlvbound2,7,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__rst,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    VL_SIG8(v__DOT__mymaster__DOT__payload_sizes[4],7,0);
    
    
    // CONSTRUCTORS
  private:
    Vtop& operator= (const Vtop&);	///< Copying not allowed
    Vtop(const Vtop&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vtop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vtop__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__7(Vtop__Syms* __restrict vlSymsp);
    static void	_eval(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(Vtop__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vtop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
