/* FF4 source-port — interpreted module for battle_verdict_driver_d_e_rows_wit.
 * Ground truth: src/battle_verdict_driver_d_e_rows_wit.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_verdict_driver_d_e_rows_wit(void)
{
    /* battle verdict driver: 3D/3E/40 rows with 885C color fills,
       6434(0x202) gate; loops L11E35C (885C/5C64), L11E3C0 (key
       spin), L11E4D4 (fill tail). */
    page(0x3D);
    cell_push_c8();
    cell_put(0x3D);
    cell_push_c8();
    cell_put(0x3E);
    page(0x3D);
L11E35C:
    for (;;) {
        cell_push_c8();
        if (gate_cur() != 0)
            goto L11E450;
        row_read(0x7F);
        cell_cursor_dec();
        cell_push_c8();
        step2();
        row_close2();
        page(0x40);
    L11E3C0:
        for (;;) {
            cell_pull_c8_off();
            cell_step();
            poll_pair_cur();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        tail(0x40);
        io_poll_cur();
        if (io_just() != 0)
            goto L11E4C4;
        page(0x3D);
        tail(0x3D);
    }
L11E450:
    page(0x40);
    cell_pull_c8_off();
    cell_step();
    tail(0x40);
    io_poll_cur();
    if (io_just() != 0)
        goto L11E4C4;
    page(0x3D);
    cell_step();
    tail(0x3D);
    goto L11E35C;
L11E4C4:
    draw_pad(0x40);
    page(0x40);
L11E4D4:
    for (;;) {
        cell_push_c8();
        cell_pull_c8_off();
        cell_pull_c8_off();
        cell_pull_c8_off();
        cell_step();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
