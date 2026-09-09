/* FF4 source-port — interpreted module for func_801729E0.
 * Ground truth: src/func_801729E0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801729E0(void)
{
    /* shop detail: WANTED: 0x4C0-0x4C7 texts, 0xF3/0x7A/0xA1/0xE5
       windows; 3F38(3C3C(6)) rows and 0x4C0-0x4C7 rank cells. */
    io_poll(0x10);
    if (io_go() == 0)
        goto L172A08;
    latch(0x10);
L172A08:
    row_read(0xFC);
    io_poll_cur();
    if (io_just() != 0)
        goto L172A60;
    row_page(0x7A);
    row_read(1);
    if (sel(0x202) != 0)
        return;
L172A60:
    row_page(0xC8);
    if (gate(0x202) != 0)
        return;
    row_page(0xA1);
    row_read(8);
    if (sel(0x202) != 0)
        goto L172AB8;
    row_page(0xA1);
    row_read(4);
    if (sel(0x202) != 0)
        goto L172AC8;
L172AB8:
    latch(0xFE);
    goto L172AD0;
L172AC8:
    latch_cur();
L172AD0:
    cell_put(6);
    latch(0x70);
    txt_draw(0x4C0);
    latch(0x78);
    sep_a();
    cell_poke0(cell_state(6));
    txt_draw(0x4C1);
    cell_push_c8();
    txt_draw(0x4C2);
    cell_push_c8();
    txt_draw(0x4C3);
    latch(0x78);
    txt_draw(0x4C4);
    latch(0x78);
    sep_a();
    cell_poke0(cell_state(6));
    txt_draw(0x4C5);
    cell_push_c8();
    txt_draw(0x4C6);
    cell_push_c8();
    txt_draw(0x4C7);
    return;
}
