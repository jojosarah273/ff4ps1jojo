/* FF4 source-port — interpreted module for battle_rows_100.
 * Ground truth: src/battle_rows_100.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_100(void)
{
    /* rows: 0x100/0x29 windows, 8011FD34 close; 3F94(3C3C(0x29))
       + 926C/9298/9330 preps. */
    row_open2();
    row_open3();
    row_open();
    row_open();
    wnd_open(0x100);
    row_open();
    cell_cursor_read();
    row_close();
    row_pad();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    config_dialog_gates_b4_c_d48_cell();
    return;
}
