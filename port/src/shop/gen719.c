/* FF4 source-port — interpreted module for options_x2000_xa9_x2a04_x2a06_text.
 * Ground truth: src/options_x2000_xa9_x2a04_x2a06_text.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_x2000_xa9_x2a04_x2a06_text(void)
{
    /* options: 0x2000/0xA9/0x2A04-0x2A06 texts/windows, 8015330C/
       80152CDC/8015310C rows; loops L160824 and L160864. */
    sep();
    tail(0xA9);
L160824:
    for (;;) {
        txt_cell(0x2000);
        row_read(0x1F);
        io_poll(0x11);
        if (io_just() != 0)
            goto L160864;
        rows_u16_d44_d54_swap_chain_with_c();
        key_page(0xA9);
    }
L160864:
    row_page(0xA9);
    options_rows_run();
    latch(3);
    option_value_copy();
    page_open(0x3598);
    latch(0xA);
    cell_draw(0x2A04);
    page_paint(0x2A05);
    page_paint(0x2A06);
    page_paint2(0x38E4);
    return;
}
