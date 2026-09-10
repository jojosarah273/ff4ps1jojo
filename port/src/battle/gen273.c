/* FF4 source-port — interpreted module for battle_status_cast_xe_x10_xd_windo.
 * Ground truth: src/battle_status_cast_xe_x10_xd_windo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_status_cast_xe_x10_xd_windo(void)
{
    /* battle status-cast: 0xE/0x10/0xD windows, 4FAC(0x101) gate loops
       (L14EE88 stat rows, L14EF60 scroll, L14F030 alt), 6DE8/922C/89D4
       cell draws. */
    txt_set_cur();
    if (gate(2) != 0)
        goto L14F0AC;
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L14EFF0;
    txt_set_cur();
    if (gate(2) != 0)
        goto L14F0AC;
    wnd_open_cur();
    txt_set_cur();
    cell_put(0xE);
L14EE88:
    for (;;) {
        cell_state(0xE);
        row_arm2_cur();
        if (cell_flags_zero50(0x101) != 0)
            goto L14EFC8;
        row_prep(0x20);
        cell_sink89();
        cell_cursor_ret2();
        row_sync();
        row_sync2(0xD);
        cell_put_hi9(0x10);
        sep_a();
        cell_pos_fwd(0x1C);
    L14ef60:
        for (;;) {
            cell_sink89();
            cell_stamp8_9_b(0x10);
            cell_dec_cell();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        row_done();
        cell_cursor_adv2();
        cell_stamp8_9_b(0x10);
        sep();
        row_prep_close();
    L14EFC8:
        cell_step();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    goto L14F0AC;
L14EFF0:
    txt_set_cur();
    io_poll(3);
    if (io_just() == 0)
        return;
    row_prep(0x20);
    cell_push9();
    cell_cursor_ret2();
    wnd_open(0xC);
L14F030:
    for (;;) {
        cell_sink8_9();
        cell_stamp8_9(0x202);
        if (poll_go_cur() != 0)
            continue;
        break;
    }
    cell_cursor_adv2();
    cell_pull9_hi();
    cell_pull9_hi();
    sep();
    row_prep_close();

L14F0AC:
    return;
}
