/* FF4 source-port — interpreted module for func_8015FB70.
 * Ground truth: src/func_8015FB70.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015FB70(void)
{
    /* options: 0x38E6/0x29B5 texts, 0x8A window, 8016046C row;
       loop L15FBA4 on 5574(0xFF). */
    page_paint2(0x38E6);
    sep();
L15fba4:
    for (;;) {
        txt_cell(0x29B5);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L15FBD4;
        cell_step();
    }
L15FBD4:
    tail(0x8A);
    latch(1);
    func_8016046C();
    return;
}
