/* FF4 source-port — interpreted module for config_rows_x1b3c_x1b3b_x1440_text.
 * Ground truth: src/config_rows_x1b3c_x1b3b_x1440_text.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_rows_x1b3c_x1b3b_x1440_text(void)
{
    /* config rows: 0x1B3C/0x1B3B/0x1440 texts, 0xE8 window,
       8012B168/8011F684/8012219C/8011FF40 rows; gates 5574(3)/
       6434(0x202). */
    page_open(0x1B3C);
    txt_set(0x1B3B);
    cell_draw(0x1440);
    cell_dispatch(cell_state_of());
    row_page(0xE8);
    io_poll(3);
    if (io_just() == 0)
        goto L12C2D8;
    txt_set(0x1B22);
    if (gate(0x202) != 0)
        goto L12C2D8;
    animation_row_300b();
    midrow_pad88_run();
L12C2D8:
    fn_1x2219c();
    fn_1x1ff40();
    return;
}
