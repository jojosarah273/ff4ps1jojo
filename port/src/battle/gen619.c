/* FF4 source-port — interpreted module for func_80118428.
 * Ground truth: src/func_80118428.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80118428(void)
{
    /* battle rows: 0x7/0x3D windows, 0x1030/0x1032 texts, 80150A30
       row; loop L11849C on 5DA0(7)/5B8C(0x202). */
    cell_put(7);
    sep_b();
    cell_tick_sub(cell_state(7));
    latch(7);
    cell_put(7);
    cell_fmt2(0x3D);
L11849c:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x1030);
        cell_step();
        step2();
        poll_pair(7);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    cell_word_half(cell_state(0x3E));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x3D));
    row_page(0x3D);
    func_80150A30();
    return;
}
