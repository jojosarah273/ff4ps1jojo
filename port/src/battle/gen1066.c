/* FF4 source-port — interpreted module for func_801175C4.
 * Ground truth: src/func_801175C4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801175C4(void)
{
    page_open(0x9D3);
    cell_step();
    for (;;) {
        func_800F6C68(0x128200);
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        cell_step();
    }
    label(0x9D3);
}
