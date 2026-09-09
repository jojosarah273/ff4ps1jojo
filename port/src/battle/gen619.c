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
    func_800F7F48(cell_state(7));
    latch(7);
    cell_put(7);
    cell_fmt2(0x3D);
L11849c:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x1030);
        cell_step();
        step2();
        poll_pair(7);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_800F76BC(cell_state(0x3E));
    func_800F76E8();
    func_800F7CC8(cell_state(0x3D));
    row_page(0x3D);
    func_80150A30();
    return;
}
