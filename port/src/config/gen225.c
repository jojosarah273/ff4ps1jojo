/* FF4 source-port — interpreted module for func_80123320.
 * Ground truth: src/func_80123320.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80123320(void)
{
    row_info(0x4B);
    tail(0x48);
    txt_cell(3);
    func_800F52BC(0x80);
    if (io_just() == 0)
        goto L3400;
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_put(0x45);
    txt_cell(4);
    func_800F7C6C();
    func_800F7A68();
    func_800F7C6C();
    func_800F7A68();
    func_800F7C6C();
    row_read(1);
    func_800F78C4(cell_state(0x45));
    if (func_800F7918(2) != 0)
        goto L3440;
    func_800F9200();
    func_80123AA8();
    func_80122334();
    row_close2();
    poll_pair_cur();
    poll_pair_cur();
    goto L3488;
L3400:
    func_80123AA8();
    draw_pad_cur();
    func_8011F8D4();
    return;
L3440:
    txt_set(0x1BC2);
    if (gate(2) == 0)
        return;
    cell_fmt2(0x48);
    func_800F6D70(1);
    func_800F9200();
    func_80123AA8();
    row_close2();
    goto L3640;
L3488:
    cell_put(0x45);
    latch(0x21);
    cell_put(0x46);
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    wnd_open(8);
L34fc:
    for (;;) {
        row_page(0x45);
        func_800F52BC(0x80);
        if (io_just() != 0)
            goto L3574;
        row_page(0x46);
        func_800F8960(0x34);
        func_800F78C4(cell_state_of());
        func_800F8960(1);
        goto L3584;
    L3574:
        latch(0xFF);
        func_800F8960();
    L3584:
        row_sync();
        row_prep(0x20);
        sep_b();
        func_800F80D0(0x40);
        row_prep_close();
        latch(0xFF);
        func_800F8960();
        row_done();
        key_page(0x46);
        row_arm2(cell_state(0x45));
        func_800F5E48();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
L3640:
    row_read(0xF);
    func_800F9200();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    row_close2();
    row_sel_cell_cur();
    cell_put(0x45);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x45));
    cell_put(0x45);
    open_row(0x46);
    page(0x45);
    latch(6);
    cell_put(0x45);
    func_8012371C();
    return;
}
