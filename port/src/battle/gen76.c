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
    func_800F7534();
    txt_set_cur();
    func_8007411C();
    func_800F76BC(cell_state_of());
    func_800F76BC(cell_state_of());
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
        func_800F658C();
        func_800F81B0();
        sep_a();
        func_800F4064(0x40);
        func_800F81B0();
        func_800F658C();
        func_800F81B0();
        sep_a();
        func_800F4064(0x100);
        func_800F81B0();
        func_800F658C();
        sep_a();
        func_800F4064(0x80);
        func_800F81B0();
        func_800F658C();
        sep_a();
        func_800F4064(0x20);
        func_800F81B0();
        sep();
        row_prep_close();
        func_800F5D24();
        if (poll_go(0x202) != 0)
            goto L145E5C;
        latch(8);
        txt_draw_cur();
        row_prep(0x20);
        func_800F658C();
        sep_a();
        func_800F4064(0x100);
        func_800F81B0();
        sep();
        row_prep_close();
    L145E5C:
        latch(1);
        txt_draw_cur();
        txt_draw_cur();
        func_800F5D24();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_8007259C();
    return;
}
