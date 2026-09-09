/* FF4 source-port — interpreted module for func_80141468.
 * Ground truth: src/func_80141468.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80141468(void)
{
    /* battle rows: gate 6434(0x202); loop L1414E0 on 5A90(6). */
    txt_set_cur();
    if (gate(0x202) != 0) {
        txt_set_cur();
    }
    sep();
L1414e0:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        cell_step();
        step2();
        poll_t(6);
        if (io_just() == 0)
            continue;
        break;
    }
    page_paint2_cur();
    return;
}
