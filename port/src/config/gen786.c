/* FF4 source-port — interpreted module for func_801526F8.
 * Ground truth: src/func_801526F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801526F8(void)
{
    /* shop rows: 0xE1/0xE5/0xDF windows, 8015240C row + 0xE3; loop
       L15275C on 56AC(3C3C(0xE5)). */
    cell_put(0xE1);
    row_page(0xE5);
    cell_put(0xDF);
    row_page(0xE1);
    cell_put(0xE5);
    options_row_run();
    cell_fmt2(0xE3);
    sep();
L15275c:
    for (;;) {
        cell_push_c8_b4o(0x80);
        cell_draw(0x289C);
        step2();
        cell_step();
        if (cell_flags_cmp(cell_state(0xE5)) == 0)
            continue;
        break;
    }
    return;
}
