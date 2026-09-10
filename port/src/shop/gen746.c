/* FF4 source-port — interpreted module for config_rows_x3c_x39_x60_x57_window.
 * Ground truth: src/config_rows_x3c_x39_x60_x57_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_rows_x3c_x39_x60_x57_window(void)
{
    /* config rows: 0x3C/0x39/0x60/0x57 windows; gate 5574(0x42)
       routes the 82EC cell fills. */
    io_poll(0x42);
    if (io_go() != 0)
        goto L16D7E0;
    cell_pull_c8_bank(0x3C);
    latch(0xFF);
    cell_pull_c8_bank(0x39);
    step2();
    return;
L16D7E0:
    sep_b();
    cell_pos_back(0xF);
    row_sel_cell_cur();
    cell_push_c8();
    cell_pull_c8_bank(0x39);
    cell_push_c8();
    cell_pull_c8_bank(0x3C);
    step2();
    return;
}
