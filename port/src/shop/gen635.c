/* FF4 source-port — interpreted module for func_801617D8.
 * Ground truth: src/func_801617D8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801617D8(void)
{
    /* options bars: 0x2001/0xA9/0xAA cells; loop L161820 on 5A90(5). */
    sep();
L161820:
    for (;;) {
        txt_cell(0x2001);
        cell_put(0xA9);
        row_read(0x80);
        cell_put(0xAA);
        row_page(0xA9);
        row_read(0x7F);
        func_800F78C4(cell_state(0xAA));
        cell_draw(0x2001);
        row_prep(0x20);
        sep_a();
        func_800F4064(0x80);
        sep();
        row_prep_close();
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
