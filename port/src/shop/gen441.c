/* FF4 source-port — interpreted module for func_8016AC7C.
 * Ground truth: src/func_8016AC7C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016AC7C(void)
{
    /* shop status: 0x4A window, 0x2203/0x22C1/0x22A3/0x22B3 texts,
       gates 4120(0x202); loops L16ACFC (5A90(0x20)) and L16AD74
       (5958(0x12)). */
    row_page(0x4A);
    cell_tick_half();
    row_read(1);
    cell_push_c8();
    sep();
L16acfc:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x2203);
        cell_step();
        step2();
        poll_t(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    row_page(0x4A);
    row_read(7);
    if (sel(0x202) != 0)
        return;
    row_prep(0x20);
    cell_push9(0x22C1);
    cell_cursor_ret2();
    wnd_open(0x1C);
L16ad74:
    for (;;) {
        cell_sink8_9(0x22A3);
        cell_stamp8_9(0x22A5);
        cell_set50_from54();
        cell_set50_from54();
        poll_t(0x12);
        if (io_just() == 0)
            continue;
        break;
    }
    cell_cursor_adv2();
    cell_pull9_hi(0x22B7);
    sep();
    row_prep_close();
    return;
}
