/* FF4 source-port — interpreted module for func_80135574.
 * Ground truth: src/func_80135574.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80135574(void)
{
    page(0x41);
    label(0x1A78);
    label(0x1A7A);
    label(0x1A7C);
    label(0x1A7E);
    config_row_d600b();
    wnd_open(0x1B55);
    tail(0x51);
    latch_cur();
    stat_sync();
    txt_set(0x1A00);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_prep(0x20);
    cell_pos_fwd(0xA300);
    cell_put_hi9(0x5A);
    row_prep_close();
    latch(0x13);
    cell_put(0x5C);
    cell_fmt2(0x41);
L5634:
    for (;;) {
        cell_pull60(0x1A80);
        cell_push_c8_b4o(0x5A);
        io_poll(0xFF);
        if (io_just() != 0)
            return;
        cell_put(0x5D);
        cell_pull_c8_sel2(0x51);
        func_80136174();
        row_sync();
        battle_put43();
        cell_push_c8();
        if (gate(0x8080) != 0)
            goto L58b0;
        row_read(0x7F);
        row_prep(0x20);
        row_arm_s_cur();
        row_arm_s2_cur();
        row_prep_close();
        cell_push_c8_cur(0x4216);
        cell_put(0x45);
        cell_push_c8_cur(0x4217);
        cell_put(0x46);
        latch_cur();
        cell_put(0x47);
        row_sel2(cell_state(0x45));
        cell_flags_repack2();
        row_sel2(cell_state(0x46));
        cell_flags_repack2();
        row_sel2(cell_state(0x47));
        cell_flags_repack2();
        row_sel2(cell_state(0x45));
        cell_flags_repack2();
        row_sel2(cell_state(0x46));
        cell_flags_repack2();
        row_sel2(cell_state(0x47));
        page(0x45);
        row_prep(0x20);
        func_800F8A48(0x51);
        cell_inc_cell(0x51);
        cell_inc_cell(0x51);
        row_prep_close();
        row_page(0x47);
        cell_pull_c8_sel2(0x51);
        func_80136174();
        goto L59d8;
    L58b0:
        row_prep(0x20);
        row_arm_s_cur();
        cell_sink89_c(0x4216);
        func_800F8A48(0x51);
        cell_inc_cell(0x51);
        cell_inc_cell(0x51);
        row_prep_close();
        latch_cur();
        cell_pull_c8_sel2(0x51);
        func_80136174();
    L59d8:
        func_801376F0();
        row_prep(0x20);
        sep_b();
        cell_pos_back2(0x30);
        row_prep_close();
        draw_pad_cur();
        func_8011F8D4();
        row_done();
        row_page(0x5D);
        row_sync();
        row_prep(0x20);
        row_arm_s_cur();
        row_prep_close();
        row_page(0x5D);
        func_80125100();
        row_done();
        step2();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
