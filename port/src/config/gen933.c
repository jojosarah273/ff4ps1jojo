/* FF4 source-port — interpreted module for func_80132C0C.
 * Ground truth: src/func_80132C0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80132C0C(void)
{
    /* ability rows: 80139CA4 prep, 0x1B4A/0x1B4B texts, 0x43 window,
       80126070 close; gate 6434(0x80). */
    func_80139CA4();
    txt_set(0x1B4A);
    if (gate(0x80) != 0)
        goto L132C84;
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    row_arm_s(0x20);
    row_prep_close();
    latch(8);
    cell_draw(0x1B4B);
L132C84:
    wnd_open(0x2588);
    func_80126070();
    return;
}
