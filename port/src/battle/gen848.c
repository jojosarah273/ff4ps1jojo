/* FF4 source-port — interpreted module for battle_rows_29.
 * Ground truth: src/battle_rows_29.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_29(void)
{
    /* rows: 0x29/0x100 windows, 8011FD34 close; 3F94(3C3C(0x29))
       + 926C/9298/9330 preps. */
    row_open2();
    row_open3();
    row_open();
    wnd_open(0x100);
    row_open();
    cell_cursor_read();
    row_pad();
    row_prep(0x20);
    /* v0/v1 latch -> L11FC7C / L11FCB4 */
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    func_8011FD34();
    return;
}
