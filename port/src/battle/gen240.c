/* FF4 source-port — interpreted module for func_801425FC.
 * Ground truth: src/func_801425FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801425FC(void)
{
    func_8013D12C();
    func_8013EF78();
    latch(0x84);
    txt_draw(0xF427);
    latch(0x70);
    cell_put(4);
    cell_put(6);
    func_80142BCC();
    latch(4);
    txt_draw(0xF3AC);
    txt_draw(0xF3AD);
    func_80142CB4();
    txt_set(0x6CC0);
    if (gate(2) != 0)
        goto L268c;
    latch(8);
    goto L2694;
L268c:
    latch(0xF8);
L2694:
    cell_put(2);
    txt_set(0x49);
    row_sel_cell_cur();
    txt_set(0x34C2);
    if (gate(0x8080) != 0)
        goto L2734;
    cell_push_c8_d58(0xF053);
    sep_a();
    row_open_w(0x18);
    cell_poke0(cell_state(2));
    txt_draw(0xF111);
    cell_push_c8_d58(0xF054);
    sep_b();
    cell_pos_back(8);
    txt_draw(0xF112);
    goto L277c;
L2734:
    cell_push_c8_d58(0xF043);
    sep_a();
    cell_poke0(cell_state(2));
    txt_draw(0xF111);
    cell_push_c8_d58(0xF044);
    sep_b();
    cell_pos_back(8);
    txt_draw(0xF112);
L277c:
    txt_set(0x48);
    row_sel_cell_cur();
    txt_set(0x34C4);
    if (gate(0x8080) != 0)
        goto L2804;
    cell_push_c8_d58(0xF053);
    sep_a();
    row_open_w(0x18);
    txt_draw(0xF113);
    cell_push_c8_d58(0xF054);
    sep_b();
    cell_pos_back(8);
    txt_draw(0xF114);
    goto L284c;
L2804:
    cell_push_c8_d58(0xF043);
    sep_a();
    cell_poke0(cell_state(2));
    txt_draw(0xF113);
    cell_push_c8_d58(0xF044);
    sep_b();
    cell_pos_back(8);
    txt_draw(0xF114);
L284c:
    latch(0x10);
    txt_draw(0xF115);
    func_801490AC();
    page_paint2(0xF428);
    txt_set(0x34C2);
    row_read(0x80);
    cell_put_cur();
    txt_set(0x34C4);
    row_read(0x80);
    io_press(cell_state_of());
    if (io_just() != 0)
        return;
L28b4:
    for (;;) {
        func_80149374();
        if (io_go() != 0)
            return;
        page_open(0xF118);
        label(0xF429);
        func_80142DC0();
    }
    return;
}
