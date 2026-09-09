/* FF4 source-port — interpreted module for func_8011F8D4.
 * Ground truth: src/func_8011F8D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011F8D4(void)
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
    func_8011FD34();
    return;
}
