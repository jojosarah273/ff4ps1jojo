/* FF4 source-port — interpreted module for func_80115488.
 * Ground truth: src/func_80115488.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80115488(void)
{
    /* battle rows: 0x79/0xF3/0xF5/0xC/0xE windows, 8011581C/
       80115A34 rows; loop L1154A8 on 5574(4). */
    open_row(0x79);
L1154a8:
    for (;;) {
        row_page(0x79);
        row_sel_cell_cur();
        row_prep(0x20);
        sep_a();
        cell_peek0(cell_state(0xF3));
        cell_put_hi9(0xC);
        sep_a();
        cell_peek0(cell_state(0xF5));
        cell_put_hi9(0xE);
        row_read2(0x79);
        cell_pos_mask(0xFF);
        row_sync2_cur();
        row_prep_close();
        func_8011581C();
        row_page(0xE);
        sep_a();
        row_open_w(0x10);
        cell_put(0xE);
        func_80115A34();
        key_page(0x79);
        row_page(0x79);
        io_poll(4);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
