/* FF4 source-port — interpreted module for func_8016BC6C.
 * Ground truth: src/func_8016BC6C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016BC6C(void)
{
    /* shop row: 0x4A/0x57 windows, 0x400/0x28/0x57 consts, 8016BBCC
       row; gate 4120(0x202). */
    row_page(0x4A);
    row_read(0xF);
    if (sel(0x202) != 0)
        return;
    wnd_open(0x400);
    tail(0x28);
    page(0x57);
    draw_pad(0x4000);
    latch(0x7E);
    func_8016BBCC();
    row_prep(0x20);
    row_read2(0x57);
    sep_a();
    cell_pos_fwd(0x400);
    cell_pos_mask(0x7FFF);
    cell_put_hi9(0x57);
    sep();
    row_prep_close();
    return;
}
