/* FF4 source-port — interpreted module for fn_1x316e0.
 * Ground truth: src/fn_1x316e0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x316e0(void)
{
    txt_set(0x1BBB);
    if (gate(2) == 0) {
        cell_push_c8_cur(0xF9807);
        txt_draw(0x1B91);
        ability_select_screen_x1b91_text_x();
        return;
    }
    latch(0);
    do {
        ability_rows_x1b8b_x16_texts_x43_w();
        cell_set50_from40();
        io_poll(5);
    } while (io_just() == 0);
}
