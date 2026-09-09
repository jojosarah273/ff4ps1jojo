/* FF4 source-port — interpreted module for func_8016F97C.
 * Ground truth: src/func_8016F97C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016F97C(void)
{
    /* config help/status: 0x43 window, 0x16A9/0x1A05/0x1A3E-0x1A45
       texts, 801702DC sub-rows, 0x1A0D key icons; fully linear render. */
    row_open2();
    row_open3();
    wnd_open(0x100);
    row_open();
    cell_cursor_read();
    row_prep(0x20);
    row_sync2(0x17);
    wnd_open_cur();
    draw_pad(0x1A05);
    battle_wait_just(0x147E);
    row_sync2(0x17);
    wnd_open_cur();
    draw_pad(0x1A1D);
    battle_wait_just(0x147E);
    row_prep_close();
    txt_set(0x16A9);
    txt_draw(0x1A64);
    txt_set(0x1A3E);
    row_sel_cell_cur();
    cell_put(0x43);
    page(0x43);
    row_prep(0x20);
    cell_clear_bank2(0x1A2D);
    cell_clear_bank2(0x1A1D);
    cell_clear_bank2(0x1A2F);
    cell_clear_bank2(0x1A1F);
    cell_clear_bank2(0x1A21);
    cell_push9_bank();
    cell_pull9_hi(0x1A31);
    row_prep_close();
    txt_set(0x1A3F);
    row_sel_cell_cur();
    cell_put(0x43);
    row_prep(0x20);
    page(0x43);
    cell_push9_bank();
    cell_pull9_hi(0x1A23);
    row_prep_close();
    txt_set(0x1A3B);
    wnd_open(0x80);
    func_801702DC();
    txt_set(0x1A3C);
    wnd_open_cur();
    func_801702DC();
    txt_set(0x1A3D);
    wnd_open(0x40);
    func_801702DC();
    latch(0xFF);
    cell_put(4);
    cell_put(5);
    row_page(0xDD);
    cell_put(8);
    cell_put(9);
    cell_cursor_read();
    row_pad();
    sep();
    stat_sync();
    return;
}
