/* FF4 source-port — interpreted module for battle_rows_x79_x92_windows_c_rows.
 * Ground truth: src/battle_rows_x79_x92_windows_c_rows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x79_x92_windows_c_rows(void)
{
    /* battle rows: 0x79/0x92 windows, 80115684/8011581C rows; loop
       L10FAD4 on 5574(4). */
    open_row(0x79);
L10fad4:
    for (;;) {
        row_page(0x79);
        sep_a();
        row_open_w(4);
        row_sel_cell_cur();
        battle_rows_xef_xf1_xc_xe_x91_x8f();
        open_row(0x92);
        battle_rows_300();
        key_page(0x79);
        row_page(0x79);
        io_poll(4);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
