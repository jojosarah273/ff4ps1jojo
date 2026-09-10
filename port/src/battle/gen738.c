/* FF4 source-port — interpreted module for battle_rows_x68_x78_windows_x300_x.
 * Ground truth: src/battle_rows_x68_x78_windows_x300_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x68_x78_windows_x300_x(void)
{
    /* battle rows: 0x68/0x78 windows, 0x300-0x307 text cells with
       0x7A window reads. */
    latch(0x68);
    txt_draw(0x300);
    latch(0x78);
    txt_draw(0x304);
    txt_draw(0x301);
    txt_draw(0x305);
    row_page(0x7A);
    row_read(2);
    sep_a();
    row_open_w(0xE4);
    txt_draw(0x302);
    txt_draw(0x306);
    latch(0x37);
    txt_draw(0x303);
    txt_draw(0x307);
    return;
}
