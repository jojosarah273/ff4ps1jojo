/* FF4 source-port — window/input primitive API (0x800F family).
 *
 * One mapping table for the window layer; every interpreted module
 * calls through these names. The func ids are the byte-verified Phase A
 * primitives (ground truth in src/func_800Fxxxx.c).
 */
#ifndef FF4_PORT_WINDOW_H
#define FF4_PORT_WINDOW_H

#include <stdint.h>

typedef uint32_t u32; typedef int32_t s32; typedef uint16_t u16;
typedef int16_t s16; typedef uint8_t u8;

/* cells & state */

/* windows / rows */
uint32_t wnd_open();
uint32_t row_page();
uint32_t row_read();
uint32_t row_prep();
uint32_t row_prep_close();
uint32_t row_open();
uint32_t row_open2();
uint32_t row_close();
uint32_t row_done();
uint32_t row_sel_cell();
uint32_t row_sel_cell2();
uint32_t row_arm_s();
uint32_t row_arm_s2();

/* text */
uint32_t page();
uint32_t page_open();
uint32_t page_paint();
uint32_t txt_set();
uint32_t txt_draw();
uint32_t txt_cell();
uint32_t cell_draw();
uint32_t cell_put();
uint32_t tail();
uint32_t label();
uint32_t open_row();

/* input */
uint32_t io_poll();
uint32_t io_just();
uint32_t io_go();
uint32_t io_press();
uint32_t gate();
uint32_t poll_t();
uint32_t poll_pair();
uint32_t poll_go();

/* flow */
uint32_t latch();
uint32_t sep();
uint32_t sep_a();
uint32_t sep_b();
uint32_t cell_step();
uint32_t step2();
uint32_t draw_pad();
uint32_t key_page();
uint32_t page_paint2();
uint32_t cell_dispatch();
uint32_t row_open_w();
uint32_t cell_fmt2();
uint32_t row_sel2();
uint32_t row_arm2();

/* no-arg variants (0-arg call sites in the source) */


/* named 0x800F primitives (tools/port_names.py manifest) */
uint32_t catalog_base();
uint32_t cell_add16();
uint32_t cell_addr16();
uint32_t cell_bank_sel();
uint32_t cell_clear_bank();
uint32_t cell_clear_pad();
uint32_t cell_cursor_adv2();
uint32_t cell_cursor_dec();
uint32_t cell_cursor_read();
uint32_t cell_cursor_ret2();
uint32_t cell_dec_bank();
uint32_t cell_flags_cmp();
uint32_t cell_flags_pack();
uint32_t cell_flags_repack();
uint32_t cell_flags_repack2();
uint32_t cell_merge();
uint32_t cell_pos_back();
uint32_t cell_pos_fwd();
uint32_t cell_pos_fwd2();
uint32_t cell_pos_mask();
uint32_t cell_pull9_hi();
uint32_t cell_pull_c8();
uint32_t cell_pull_c8_bank();
uint32_t cell_pull_c8_lo();
uint32_t cell_pull_c8_off();
uint32_t cell_push9();
uint32_t cell_push9_bank();
uint32_t cell_push_c8();
uint32_t cell_push_c8_d58();
uint32_t cell_push_c8_sel();
uint32_t cell_put_hi9();
uint32_t cell_read32();
uint32_t cell_set50_from40();
uint32_t cell_set50_from54();
uint32_t cell_sink8_9();
uint32_t cell_stamp8_9();
uint32_t cell_stamp8_9_b();
uint32_t cell_tick_half();
uint32_t cell_tick_or();
uint32_t cell_tick_sub();
uint32_t cell_window();
uint32_t cell_word_half();
uint32_t cell_word_half_s();
uint32_t key_page2();
uint32_t poll_cmd();
uint32_t poll_spin();
uint32_t row_act2();
uint32_t row_act3();
uint32_t row_arm_t();
uint32_t row_attr();
uint32_t row_close2();
uint32_t row_done2();
uint32_t row_frame();
uint32_t row_info();
uint32_t row_line();
uint32_t row_open3();
uint32_t row_pad();
uint32_t row_ptr();
uint32_t row_read2();
uint32_t row_scan();
uint32_t row_sync();
uint32_t row_sync2();
uint32_t scratch_swap_status();
uint32_t ticker_advance();
uint32_t ticker_mask();
uint32_t ticker_reblend();
uint32_t wnd_fx_7d();
uint32_t wnd_fx_7d_b();
uint32_t wnd_fx_tags();
uint32_t battle_wait_just();
uint32_t catalog_dispatch();
uint32_t catalog_dispatch_0();
uint32_t cell_cur_save54();
uint32_t cell_dec_cell();
uint32_t cell_flags_cmp_pos();
uint32_t cell_flags_zero50();
uint32_t cell_inc_cell();
uint32_t cell_pos_back2();
uint32_t cell_pull60();
uint32_t cell_push89_sel();
uint32_t cell_push_c8_lo();
uint32_t cell_tick_dbl();
uint32_t shop_buy_run();
uint32_t shop_view_run();
uint32_t wnd_fx_pads();
uint32_t battle_rows_run();
uint32_t cell_clear_bank2();
uint32_t cell_flags_cmp3();
uint32_t cell_flags_nz50();
uint32_t cell_flags_pack3();
uint32_t cell_flags_scr();
uint32_t cell_flags_set4();
uint32_t cell_pos_sub16();
uint32_t cell_pull89_bank();
uint32_t cell_push_c8_b4();
uint32_t cell_push_c8_b4o();
uint32_t cell_push_c8_cur();
uint32_t cell_sink89();
uint32_t cell_sink89_c();
uint32_t cell_tick_and();
uint32_t ticker_reblend2();
uint32_t battle_gate_early();
uint32_t cell_cur_save58();
uint32_t cell_flags_clr4();
uint32_t cell_flags_hi7();
uint32_t cell_flags_overflow();
uint32_t cell_flags_pos0();
uint32_t cell_flags_tick2();
uint32_t cell_pair_dbl();
uint32_t cell_pair_dbl2();
uint32_t cell_pull89_fn();
uint32_t cell_pull_c8_sel2();
uint32_t cell_push60();
uint32_t cell_push_c8_c2();
uint32_t cell_tick_and2();
uint32_t cell_tick_xor();
uint32_t shop_rows2_run();
uint32_t shop_rows_run();
uint32_t shop_view2_run();
uint32_t wnd_fx_2100();
#endif

/* more no-arg variants (mapper output) */
