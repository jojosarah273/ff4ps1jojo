/* FF4 source-port — interpreted module for battle_class_status_screen_windows.
 * Ground truth: src/battle_class_status_screen_windows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_class_status_screen_windows(void)
{
    /* battle class/status screen: 1/2/4/5 windows with 6C68 draws,
       inner row loop L167F70 (6EA8 + 340-343 gates, 80168118 row
       commits); outer loop L167E8C polls 5574(0xFF)/53D4. */
    sep();
L167e8c:
    for (;;) {
        txt_cell_cur();
        io_poll(0xFF);
        if (io_just() != 0)
            goto L1680E8;
        row_sel_cell_cur();
        row_open();
        cell_push_c8();
        cell_put_cur();
        cell_push_c8();
        cell_put(1);
        latch(0x13);
        cell_put(2);
        row_close();
        row_open();
        row_sel_cell_cur();
        txt_cell_cur();
        cell_put(4);
        txt_cell_cur();
        cell_put(5);
    L167f70:
        for (;;) {
            cell_push_c8_b4();
            io_poll(0xFF);
            if (io_just() != 0)
                goto L1680E0;
            sep_a();
            cell_poke0(cell_state(4));
            cell_cursor_dec();
            txt_set(0x6CC0);
            if (gate(2) != 0)
                goto L167FF0;
            row_close2();
            cell_cursor_dec();
        L167FF0:
            row_close2();
            cell_pull_c8(0x340);
            fn_1x68118();
            cell_push_c8_b4();
            sep_a();
            cell_poke0(cell_state(5));
            cell_pull_c8(0x341);
            fn_1x68118();
            cell_push_c8_b4();
            cell_pull_c8(0x342);
            fn_1x68118();
            cell_push_c8_b4();
            cell_cursor_dec();
            txt_set(0x6CC0);
            if (gate(2) != 0)
                goto L1680A0;
            row_close2();
            cell_cursor_dec();
        L1680A0:
            row_close2();
            cell_pull_c8(0x343);
            step2();
            step2();
            step2();
            step2();
            fn_1x68118();
        }
    L1680E0:
        row_close();
    L1680E8:
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
