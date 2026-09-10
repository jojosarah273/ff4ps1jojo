/* FF4 source-port — interpreted module for battle_rows_x4_xd5_xc_xe_x91_x8f.
 * Ground truth: src/battle_rows_x4_xd5_xc_xe_x91_x8f.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x4_xd5_xc_xe_x91_x8f(void)
{
    /* battle rows: 0x4/0xD5/0xC/0xE/0x91/0x8F/0xD/0xF/0x92 windows,
       8010543C/80102770/80115A34/8011581C rows; loop L1144F8 on
       5A90(0x50). */
    cell_clear_pad();
    open_row(4);
    latch(1);
    cell_put(0xD5);
    fn_1x0543c();
    fn_1x02770();
    draw_pad_cur();
L1144f8:
    for (;;) {
        cell_put(0xC);
        cell_put(0xE);
        battle_item_rows();
        latch(0x1C);
        cell_put(0x91);
        latch(0x78);
        cell_put(0x8F);
        open_row(0xD);
        open_row(0xF);
        open_row(0x92);
        battle_rows_300();
        poll_t(0x50);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
