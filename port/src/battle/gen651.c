/* FF4 source-port — interpreted module for battle_row_e5.
 * Ground truth: src/battle_row_e5.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_row_e5(void)
{
    /* battle rows: 0xE5/0xACD/0xACE texts, gates 6434(0x202); loops
       L115C20 (0xDD4/0xDFC cells) and L115C90 (0xA6D/0x40 reads). */
    open_row(0xE5);
    txt_set(0xACD);
    wnd_open_cur();
L115c20:
    for (;;) {
        txt_set(0xACE);
        if (gate(0x202) != 0)
            goto L115C50;
        cell_push_c8();
        cell_pull_c8(0xDDB);
        goto L115C60;
    L115C50:
        cell_push_c8();
        cell_pull_c8(0xDFB);
    L115C60:
        step2();
        cell_step();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open_cur();
L115c90:
    for (;;) {
        row_read(3);
        cell_draw(0xA6D);
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
