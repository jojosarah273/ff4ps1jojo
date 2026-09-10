/* FF4 source-port — interpreted module for battle_rows_x7a_x21_windows_xebb_c.
 * Ground truth: src/battle_rows_x7a_x21_windows_xebb_c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x7a_x21_windows_xebb_c(void)
{
    /* battle rows: 0x7A/0x21 windows, 0xEBB cell via 87DC/6214;
       loop L110C10 on 5958(0x10). */
    row_page(0x7A);
    row_read(0x1E);
    row_prep(0x20);
    wnd_open_cur();
L110c10:
    for (;;) {
        cell_stamp8_9(0xEBB);
        row_done2();
        row_done2();
        cell_pos_mask(0x1F);
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    row_sync2_cur();
    row_prep_close();
    return;
}
