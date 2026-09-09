/* FF4 source-port — interpreted module for func_80125ACC.
 * Ground truth: src/func_80125ACC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80125ACC(void)
{
    /* config/equip-form confirm: 0x45/0x46/0x43/0x15 windows, 0x1BC0/
       0x1BBF texts; 8012D204 gate; L125B14 renders the 1/3 option rows
       (801224D0 + 6CF4/8210 cells); L125C78 alt row; tail L125DA0. */
    cell_cursor_dec();
    cell_put(0x45);
    open_row(0x46);
    if (func_8012D204() != 0)
        goto L125B14;
    row_close2();
    return;
L125B14:
    cell_cursor_dec();
    txt_cell(1);
    row_read(0xF);
    txt_draw(0x1BC0);
    cell_clear_bank(0x1BBF);
    txt_cell(3);
    row_read(0x38);
    if (sel(2) != 0)
        goto L125C78;
    func_801224D0();
    row_prep(0x20);
    cell_push9_bank(0x20);
    row_prep_close();
    row_page(0x45);
    row_sel_cell_cur();
    cell_put(0x43);
    page(0x43);
    latch(0x80);
    cell_pull_c8_lo(0x2115);
    row_prep(0x20);
    func_800F8210(0x2116);
    row_prep_close();
    row_close2();
    row_open3();
    wnd_open(0x2100);
    row_open();
    cell_cursor_read();
    goto L125DA0;
L125C78:
    row_close2();
    row_open3();
    wnd_open(0x2100);
    row_open();
    cell_cursor_read();
    poll_spin();
    row_sel_cell_cur();
    txt_draw(0x143);
    latch(0x80);
    cell_put(0x15);
    row_prep(0x20);
    cell_push9(0x1BBF);
    row_sel2_cur();
    sep_a();
    cell_peek0(cell_state(0x1BBF));
    cell_pos_fwd(0x145);
    cell_push9();
    row_arm_s(0x16);
    cell_put_hi9();
    row_prep_close();
L125DA0:
    row_open2();
    latch(0x1D);
    cell_cursor_dec();
    row_pad();
    latch(0x10);
    func_80125DF8();
    row_pad();
    cell_cursor_read();
    row_close2();
    return;
}
