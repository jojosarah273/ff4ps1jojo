/* FF4 source-port — interpreted module for battle_rows_x3d_x3e_windows_xfe5_x.
 * Ground truth: src/battle_rows_x3d_x3e_windows_xfe5_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x3d_x3e_windows_xfe5_x(void)
{
    /* battle rows: 0x3D/0x3E windows, 0xFE5/0x1701 texts; gates
       6434(0x80/2) route the 4008(0x20) reads. */
    cell_cursor_dec();
    cell_put(0x3D);
    open_row(0x3E);
    txt_set(0xFE5);
    if (gate(0x80) != 0)
        goto L11B81C;
    txt_set(0x1701);
    if (gate(2) != 0)
        goto L11B83C;
L11B81C:
    row_page(0x3D);
    sep_a();
    row_open_w(0x20);
    cell_put(0x3D);
L11B83C:
    row_close2();
    row_read(7);
    return;
}
