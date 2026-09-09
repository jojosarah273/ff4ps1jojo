/* FF4 source-port — interpreted module for func_80145C74.
 * Ground truth: src/func_80145C74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80145C74(void)
{
    /* battle status detail: 6434(2) gate spin (8007259C), then the stat
       block (8007411C + 76BC pairs) and the L145D4C refresh loop with
       658C/81B0/4064(0x40/0x100/0x80/0x20) row reads, 5D24/5B8C(0x202)
       latch. */
L145c7c:
    for (;;) {
        txt_set_cur();
        if (gate(2) != 0)
            goto L145CA4;
        func_8007259C();
    }
L145CA4:
    txt_set_cur();
    tail_cur();
    wnd_open_cur();
    cell_push60();
    txt_set_cur();
    func_8007411C();
    cell_word_half(cell_state_of());
    cell_word_half(cell_state_of());
    wnd_open_cur();
    label_cur();
    wnd_open(0x40);
    label_cur();
    label_cur();
    latch(0x7E);
    txt_draw_cur();
    txt_draw_cur();
L145d4c:
    for (;;) {
        func_8007259C();
        row_prep(0x20);
        cell_push9();
        cell_pull9_hi();
        sep_a();
        cell_pos_fwd(0x40);
        cell_pull9_hi();
        cell_push9();
        cell_pull9_hi();
        sep_a();
        cell_pos_fwd(0x100);
        cell_pull9_hi();
        cell_push9();
        sep_a();
        cell_pos_fwd(0x80);
        cell_pull9_hi();
        cell_push9();
        sep_a();
        cell_pos_fwd(0x20);
        cell_pull9_hi();
        sep();
        row_prep_close();
        cell_dec_bank();
        if (poll_go(0x202) != 0)
            goto L145E5C;
        latch(8);
        txt_draw_cur();
        row_prep(0x20);
        cell_push9();
        sep_a();
        cell_pos_fwd(0x100);
        cell_pull9_hi();
        sep();
        row_prep_close();
    L145E5C:
        latch(1);
        txt_draw_cur();
        txt_draw_cur();
        cell_dec_bank();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_8007259C();
    return;
}
