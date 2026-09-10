/* FF4 source-port — interpreted module for battle_cast_x6cc0_test_d4_gates_re.
 * Ground truth: src/battle_cast_x6cc0_test_d4_gates_re.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_cast_x6cc0_test_d4_gates_re(void)
{
    /* battle cast: 0x6CC0 test, 53D4/6434(2) gates; 8058(8) reads. */
    row_open();
    txt_set_cur();
    sep_b();
    cell_pos_back(8);
    txt_draw_cur();
    if (io_just() == 0)
        goto L141EC8;
    page_paint2_cur();
L141EC8:
    txt_set_cur();
    if (gate(2) != 0)
        goto L141F3C;
    txt_set_cur();
    io_poll(0xFF);
    if (io_just() != 0)
        goto L141F3C;
    txt_set_cur();
    cell_push_c8();
    txt_draw_cur();
    page_paint2_cur();
L141F3C:
    row_close();
    return;
}
