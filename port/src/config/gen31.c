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
    func_80120F1C();
    wnd_open(0x1B55);
    tail(0x51);
    latch_cur();
    stat_sync();
    txt_set(0x1A00);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_prep(0x20);
    func_800F4064(0xA300);
    func_800F8274(0x5A);
    row_prep_close();
    latch(0x13);
    cell_put(0x5C);
    cell_fmt2(0x41);
L5634:
    for (;;) {
        func_800F8E50(0x1A80);
        func_800F67FC(0x5A);
        io_poll(0xFF);
        if (io_just() != 0)
            return;
        cell_put(0x5D);
        func_800F8A18(0x51);
        func_80136174();
        row_sync();
        func_801224D0();
        func_800F6C68();
        if (gate(0x8080) != 0)
            goto L58b0;
        row_read(0x7F);
        row_prep(0x20);
        row_arm_s_cur();
        row_arm_s2_cur();
        row_prep_close();
        func_800F65C8(0x4216);
        cell_put(0x45);
        func_800F65C8(0x4217);
        cell_put(0x46);
        latch_cur();
        cell_put(0x47);
        row_sel2(cell_state(0x45));
        func_800F7A68();
        row_sel2(cell_state(0x46));
        func_800F7A68();
        row_sel2(cell_state(0x47));
        func_800F7A68();
        row_sel2(cell_state(0x45));
        func_800F7A68();
        row_sel2(cell_state(0x46));
        func_800F7A68();
        row_sel2(cell_state(0x47));
        page(0x45);
        row_prep(0x20);
        func_800F8A48(0x51);
        func_800F62F0(0x51);
        func_800F62F0(0x51);
        row_prep_close();
        row_page(0x47);
        func_800F8A18(0x51);
        func_80136174();
        goto L59d8;
    L58b0:
        row_prep(0x20);
        row_arm_s_cur();
        func_800F65F0(0x4216);
        func_800F8A48(0x51);
        func_800F62F0(0x51);
        func_800F62F0(0x51);
        row_prep_close();
        latch_cur();
        func_800F8A18(0x51);
        func_80136174();
    L59d8:
        func_801376F0();
        row_prep(0x20);
        sep_b();
        func_800F80D0(0x30);
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
