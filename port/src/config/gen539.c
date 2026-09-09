/* FF4 source-port — interpreted module for func_8015CB80.
 * Ground truth: src/func_8015CB80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015CB80(void)
{
    /* options seed row: 0x393B/0x393A texts, 0xA9/0xAD/0xAB windows,
       80152EAC/8015CC80 rows; 5C64(2) gate. */
    row_open();
    txt_set(0x393B);
    func_800F78C4(cell_state(0x393A));
    func_80152EAC();
    func_800F5E48();
    if (poll_go(2) != 0)
        goto L15CC68;
    sep();
    txt_set(0x393B);
    cell_put(0xA9);
    cell_put(0xAD);
    wnd_open(5);
    tail(0xAB);
    func_8015CC80();
    row_page(0xAD);
    txt_draw(0x393B);
    txt_set(0x393A);
    cell_put(0xA9);
    cell_put(0xAD);
    wnd_open(0xD);
    tail(0xAB);
    func_8015CC80();
    row_page(0xAD);
    txt_draw(0x393A);
    return;
L15CC68:
    row_close();
    return;
}
