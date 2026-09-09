/* FF4 source-port — interpreted module for func_8014F0BC.
 * Ground truth: src/func_8014F0BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014F0BC(void)
{
    /* battle item-count detail: 8014EE20 row, 80148CAC close, 8014FA4C
       sub-list, 8014F2CC/8014F7A8 row handlers; loop L14F1CC picks
       rows on 4FAC keys. */
    txt_set_cur();
    if (gate(2) != 0)
        goto L14F0E4;
    func_8014EE20();
L14F0E4:
    txt_set_cur();
    if (gate(0x202) == 0)
        return;
    txt_draw_cur();
    func_8014EE20();
    txt_set_cur();
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L14F144;
    txt_set_cur();
    txt_draw_cur();
    func_80148CAC();
L14F144:
    cell_clear_bank();
    txt_set_cur();
    txt_draw_cur();
    open_row(0x18);
    func_8014FA4C();
    page_open_cur();
    tail(0xE);
    txt_set_cur();
    row_prep(0x20);
    sep();
    row_prep_close();
L14f1cc:
    for (;;) {
        row_arm2(cell_state_of());
        if (func_800F4FAC(0x101) != 0)
            goto L14F20C;
        row_arm2(cell_state_of());
        func_8014F7A8();
        goto L14F22C;
    L14F20C:
        row_arm2(cell_state_of());
        if (func_800F4FAC(1) != 0)
            goto L14F294;
    L14F22C:
        key_page(0x18);
        row_page(0x18);
        io_poll(8);
        if (io_just() == 0)
            continue;
        cell_dec_bank();
        if (poll_go(0x202) != 0)
            return;
        txt_set_cur();
        txt_draw_cur();
        txt_set_cur();
        txt_draw_cur();
        return;
    L14F294:
        page_open_cur();
        if (cell_flags_pack(2) != 0)
            continue;
        func_8014F2CC();
    }
    return;
}
