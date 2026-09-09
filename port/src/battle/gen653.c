/* FF4 source-port — interpreted module for func_801105A4.
 * Ground truth: src/func_801105A4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801105A4(void)
{
    /* battle rows: 0xC/0xE windows, 0x340-0x343 cells, 800FC0DC row;
       loop L1105B8 on 5A90(0x18). */
    draw_pad_cur();
L1105b8:
    for (;;) {
        func_800F6C68();
        sep_a();
        cell_poke0(cell_state(0xC));
        func_800F8960(0x340);
        func_800F6C68();
        sep_a();
        cell_poke0(cell_state(0xE));
        func_800F8960(0x341);
        func_800F6C68();
        func_800F8960(0x342);
        func_800F6C68();
        func_800F8960(0x343);
        func_800FC0DC();
        poll_t(0x18);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
