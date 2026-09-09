/* FF4 source-port — interpreted module for func_80151F28.
 * Ground truth: src/func_80151F28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80151F28(void)
{
    latch_cur();
    cell_cursor_dec();
    row_pad();
    txt_draw_cur();
    wnd_open(0x4200);
    row_open();
    cell_cursor_read();
    latch_cur();
    txt_draw(0x80);
    latch(0x2100);
    txt_draw(0x9);
    wnd_open(0x2105);
    label_cur();
    txt_draw(0x2102);
    latch_cur();
    txt_draw(0x22);
    latch(0x210B);
    txt_draw(0x55);
    latch(0x210C);
    txt_draw(0x63);
    latch(0x2107);
    txt_draw(0x59);
    latch(0x2108);
    txt_draw(0x73);
    txt_draw(0x2109);
    latch(0x210A);
    txt_draw(0x80);
    sep();
    txt_draw(0x2106);
    txt_draw_cur();
    txt_draw(0x2123);
    txt_draw(0x2124);
    txt_draw(0x2125);
    txt_draw(0x2126);
    txt_draw(0x2127);
    txt_draw(0x2128);
    label(0x2129);
    txt_draw(0x212A);
    txt_draw(0x212C);
    txt_draw(0x212D);
    txt_draw(0x212E);
    txt_draw(0x212F);
    txt_draw(0x420B);
    txt_draw(0x420C);
    txt_draw(0x2131);
    txt_draw(0x2133);
    latch(0x2130);
    cell_cursor_dec(0x7E);
    row_pad();
    return;
}
