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
uint32_t cell_state();
uint32_t cell_state_of();
uint32_t cell_poke();
uint32_t cell_peek();
uint32_t cell_peek_v();

/* windows / rows */
uint32_t wnd_open();
uint32_t row_page();
uint32_t row_read();
uint32_t row_prep();
uint32_t row_prep_close();
uint32_t latch_cur();
uint32_t row_open_w0();
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
uint32_t cell_fmt();
uint32_t tail();
uint32_t label();
uint32_t open_row();

/* input */
uint32_t io_poll();
uint32_t io_just();
uint32_t io_go();
uint32_t io_press();
uint32_t gate();
uint32_t sel();
uint32_t poll_t();
uint32_t poll_pair();
uint32_t poll_go();
uint32_t poll_go_cur();

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
uint32_t cell_dispatch_cur();
uint32_t row_open_w();
uint32_t cell_fmt2();
uint32_t row_sel2();
uint32_t row_sel2_cur();
uint32_t row_arm2();

/* no-arg variants (0-arg call sites in the source) */
uint32_t row_sel_cell_cur();
uint32_t row_sel_cell2_cur();
uint32_t row_arm_s_cur();
uint32_t row_arm_s2_cur();
uint32_t tail_cur();
uint32_t wnd_open_cur();
uint32_t txt_set_cur();
uint32_t txt_cell_cur();
uint32_t row_prep_cur();
uint32_t poll_t_cur();
uint32_t io_poll_cur();
uint32_t io_press_cur();
uint32_t cell_draw_cur();
uint32_t page_cur();

#endif

/* more no-arg variants (mapper output) */
uint32_t latch_cur();
uint32_t cell_state_of();
uint32_t cell_peek_cur();
uint32_t draw_pad_cur();
uint32_t key_page_cur();
uint32_t poll_pair_cur();
uint32_t page_paint_cur();
uint32_t page_paint2_cur();
uint32_t txt_draw_cur();
uint32_t row_scan_cur();
uint32_t row_sync2_cur();
uint32_t row_sel2_cur();
uint32_t row_arm2_cur();
uint32_t row_act2_cur();
uint32_t cell_put_cur();
uint32_t label_cur();
uint32_t row_sel2_w();
