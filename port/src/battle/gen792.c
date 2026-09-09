/* FF4 source-port — interpreted module for func_8014AAA8.
 * Ground truth: src/func_8014AAA8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014AAA8(void)
{
    /* battle confirm: 8014C96C/8014AA68/8014B9B4/8014BA34 rows,
       0x34C4/0x34C5/0x3522 texts; 6434(2) gate. */
    func_8014C96C();
    page_paint2_cur();
    txt_set(0x34C4);
    txt_draw_cur();
    txt_set(0x34C5);
    func_800F78C4(cell_state(0x3522));
    txt_draw_cur();
    func_8014AA68();
    func_8014B9B4();
    txt_set(0x3522);
    if (gate(2) != 0)
        return;
    txt_set(0x34C4);
    txt_draw_cur();
    txt_set(0x3523);
    txt_draw_cur();
    func_8014AA68();
    func_8014BA34();
    return;
}
