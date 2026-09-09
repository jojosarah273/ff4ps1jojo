/* FF4 source-port — interpreted module for func_80169958.
 * Ground truth: src/func_80169958.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80169958(void)
{
    /* shop rows: 0xA0/0x211A texts + 0x7D1B/0x7D19/0x7D1E/0x7D1D
       texts, 8016D4D8 close; loop L169998 on 5958. */
    sep();
    txt_draw(0xA0);
    func_800F81E8(0x211A);
L169998:
    for (;;) {
        func_800F885C();
        cell_step();
        poll_t_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open_cur();
    label(0x7D1B);
    wnd_open_cur();
    label(0x7D19);
    latch(0x13);
    txt_draw(0x7D1E);
    latch(0x20);
    txt_draw(0x7D1D);
    func_8016D4D8();
    return;
}
