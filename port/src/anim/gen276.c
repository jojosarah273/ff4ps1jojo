/* FF4 source-port — interpreted module for battle_timer_screen_staged_poll_lo.
 * Ground truth: src/battle_timer_screen_staged_poll_lo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_timer_screen_staged_poll_lo(void)
{
    /* battle timer screen: staged poll loops reading 0x1900/0x1A00 (and
       0x2000/0x1FFF/0x1A05/0x1E00/0x2000 gate texts) with 90EC/6364/
       5958 pacing, then a 885C frame fill driven by 6180(0x202), and the
       L17649C countdown loop on 8768(0x1900). */
    wnd_open_cur();
L1762e0:
    for (;;) {
        txt_cell(0x1900);
        if (io_press(cell_peek_cur()) == 0)
            goto L176350;
        cell_step();
        poll_t(0x100);
        if (io_just() != 0)
            goto L176380;
    }
L176350:
    wnd_open(0x1A00);
L176358:
    for (;;) {
        page_paint_cur();
        cell_step();
        poll_t(0x1A65);
        if (io_just() != 0)
            break;
    }
L176380:
    wnd_open_cur();
L176388:
    for (;;) {
        page_paint_cur();
        cell_step();
        poll_t(0x200);
        if (io_just() != 0)
            break;
    }
    wnd_open(0x300);
L1763b8:
    for (;;) {
        page_paint_cur();
        cell_step();
        poll_t(0xFFF);
        if (io_just() != 0)
            break;
    }
    cell_step();
L1763e8:
    for (;;) {
        page_paint_cur();
        cell_step();
        poll_t(0x1A00);
        if (io_just() != 0)
            break;
    }
    wnd_open(0x1A65);
L176418:
    for (;;) {
        page_paint_cur();
        cell_step();
        poll_t(0x1E00);
        if (io_just() != 0)
            break;
    }
    wnd_open(0x2000);
    latch_cur();
L176450:
    for (;;) {
        cell_pull_c8_off();
        cell_step();
        if (func_800F6180(0x202) != 0)
            continue;
        break;
    }
L176470:
    for (;;) {
        cell_pull_c8_off();
        cell_step();
        if (func_800F6180(0x202) != 0)
            continue;
        break;
    }
    wnd_open_cur();
L17649c:
    for (;;) {
        cell_push_c8();
        cell_draw(0x1900);
        cell_step();
        poll_t(0x100);
        if (io_just() != 0)
            break;
    }
    return;
}
