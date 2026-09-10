/* FF4 source-port — interpreted module for battle_cast_x4800_x4880_text_gates.
 * Ground truth: src/battle_cast_x4800_x4880_text_gates.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_cast_x4800_x4880_text_gates(void)
{
    /* battle cast: 0x4800/0x4880 text gates, 0x1A window, 800723D0 +
       800761C8 rows; loop L141390 on 5A90(8). */
    sep();
L141390:
    for (;;) {
        cell_push_c8();
        cell_pull_c8();
        cell_step();
        step2();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open(0x100);
    tail_cur();
    page_open_cur();
    draw_pad(0x4800);
    latch(0x1A);
    func_800723D0();
    wnd_open(0x100);
    tail_cur();
    page_open_cur();
    draw_pad(0x4880);
    latch(0x1A);
    func_800723D0();
    txt_set_cur();
    wnd_open(4);
    func_800761C8();
    txt_set_cur();
    wnd_open(5);
    func_800761C8();
    return;
}
