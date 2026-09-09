/* FF4 source-port — interpreted module for func_8011FD34.
 * Ground truth: src/func_8011FD34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011FD34(void)
{
    /* config dialog: 6434(2)/5574(1) gates; 801245B4 + 885C/3D48
       cell rows; loops L11FD3C (regcmp latch) and L11FE24
       (3F94(3C3C(0x29)) refresh). */
L11fd3c:
    for (;;) {
        /* v0/v1 latch -> L11FD70 / L11FD84 */
        if (gate(2) != 0)
            goto L11FE04;
        step2();
        io_poll(1);
        if (io_just() != 0)
            goto L11FE24;
        func_801245B4();
        cell_pull_c8_off();
        stat_sync();
        cell_pull_c8_off();
        goto L11FF18;
    L11FE04:
        row_close();
        cell_cursor_read();
        row_pad();
        return;
    L11FE24:
        row_prep(0x20);
        /* v0/v1 latch -> L11FE88 / L11FEC0 */
        sep_a();
        cell_peek0(cell_state(0x29));
        row_prep_close();
    L11FF18:
        /* loop back to L11FD3C */
        continue;
    }
    return;
}
