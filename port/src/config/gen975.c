/* FF4 source-port — interpreted module for func_8012CD6C.
 * Ground truth: src/func_8012CD6C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012CD6C(void)
{
    /* config rows: 0x1A04/0x1A03/0x1B19/0x93/0x1BA5/0x1A65 texts;
       gate 4120(2) picks 8012CC4C. */
    txt_set(0x1A04);
    row_read(0x80);
    if (sel(2) == 0)
        goto L12CDA4;
    func_8012CC4C();
    return;
L12CDA4:
    latch(7);
    txt_draw(0x1A03);
    cell_clear_bank(0x1B19);
    page(0x93);
    label(0x1BA5);
    page_open(0x1A65);
    return;
}
