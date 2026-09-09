/* FF4 source-port — interpreted module for func_801368E8.
 * Ground truth: src/func_801368E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801368E8(void)
{
    /* ability rows: 0x1B7B/0x1B55 texts, 801224D0 row, 801369B8
       loop; gates 6434(0x202)/5574(0xCE). */
    cell_clear_bank();
    cell_clear_bank();
    cell_clear_bank();
    cell_clear_bank();
    cell_clear_bank();
    txt_set(0x1B7B);
    func_801224D0();
    txt_cell(0x1B55);
    if (gate(0x202) == 0)
        return;
    io_poll(0xCE);
    if (io_go() != 0)
        return;
    txt_draw(0x1B39);
    latch_cur();
L136980:
    for (;;) {
        func_801369B8();
        cell_set50_from40();
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
