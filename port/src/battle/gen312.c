/* FF4 source-port — interpreted module for func_80144C78.
 * Ground truth: src/func_80144C78.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80144C78(void)
{
    /* battle cast flow: 2/3/4 windows, 80143E44/80143D14 rows;
       nested scroll loops L144D38/L144D48 (5DD4(4)/5C64(0x202)) and
       L144EA4, wrapped by L144CA4 (6D70/5A90(6)). */
    sep();
L144ca4:
    for (;;) {
        cell_push_c8_d58();
        row_read(4);
        cell_set50_from40();
        cell_put(2);
        open_row(3);
        cell_push_c8(0x20);
        row_prep_cur();
        row_sync2(0xC);
        cell_put_hi9();
    L144d38:
        for (;;) {
            row_read2(2);
            cell_put_hi9(4);
        L144d48:
            for (;;) {
                func_800F5BE8(cell_state_of());
                func_800F5DD4(4);
                if (poll_go(0x202) != 0)
                    continue;
                break;
            }
            cell_step();
            cell_step();
            func_800F5DD4();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        sep();
        row_prep_close();
        latch(2);
        func_80143E44();
        txt_cell_cur();
        cell_draw_cur();
        func_80143D14();
        cell_cursor_dec();
        cell_push_c8(0xC);
        latch_cur();
        cell_put_cur();
        row_close2();
    L144ea4:
        for (;;) {
            cell_draw_cur();
            cell_step();
            cell_step();
            poll_pair_cur();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        cell_push_c8_d58();
        cell_set50_from40();
        cell_pull_c8();
        step2();
        poll_t(6);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
