/* FF4 source-port — interpreted module for options_confirm_x2683_x2684_x2685.
 * Ground truth: src/options_confirm_x2683_x2684_x2685.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_confirm_x2683_x2684_x2685(void)
{
    /* options confirm: 0x2683/0x2684/0x2685/0x26D2/0x26D0/0x26D5
       texts, 80163D68 alt, 80062B08 commit; key ladders 0xCA/0xB0/
       0x61 codes. */
    txt_set(0x2683);
    row_read(0xC0);
    if (sel(0x202) != 0)
        return;
    txt_set(0x2684);
    row_read(0x3C);
    if (sel(0x202) != 0)
        return;
    txt_set(0x2685);
    row_read(0xC6);
    if (sel(0x202) != 0)
        return;
    txt_set(0x26D2);
    cell_cursor_dec();
    txt_set(0x26D2);
    io_poll(0xCA);
    if (io_just() == 0)
        goto L163C30;
    options_dialog_xe5_x33c4_x38ed_x35();
    goto L163D00;
L163C30:
    io_poll(0xB0);
    if (io_go() == 0)
        goto L163C68;
    txt_set(0x26D0);
    row_read(0x10);
    if (sel(2) != 0)
        goto L163CF8;
L163C68:
    page_open(0x26D5);
    tail(0x80);
    txt_set(0x26D2);
    io_poll(0x61);
    if (io_go() == 0)
        goto L163CA8;
    latch_cur();
    goto L163CE8;
L163CA8:
    cell_push_c8();
    txt_draw(0x38EC);
    page_paint2(0x38EB);
    draw_pad(3);
    cell_push_c8_sel(0x80);
L163CE8:
    txt_draw(0x26D2);
    goto L163D00;
L163CF8:
    page_paint2(0x352A);
L163D00:
    func_80062B08();
    txt_set(0x38ED);
    if (gate(2) != 0)
        goto L163D30;
    row_close2();
    goto L163D40;
L163D30:
    row_close2();
    txt_draw(0x33C5);
L163D40:
    txt_draw(0x34C8);
    latch(0x20);
    txt_draw(0x34C7);
    return;
}
