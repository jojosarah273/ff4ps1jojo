/* FF4 source-port — interpreted module for func_8011B158.
 * Ground truth: src/func_8011B158.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011B158(void)
{
    /* battle item-selection flow: 62/61 label window, 64/65 + BC/BD item
       slot rows, AB result rows. 8011B6B4/8011B448 draw the row halves;
       801163E8 performs the use. Sub-loops: L1B214 (wait), L1B264 (scroll),
       L1B2E0 (row select). */
    open_row(0x3E);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    cell_put(0x3D);
    txt_set(0xFE5);
    if (gate(0x80) != 0)
        goto L1B1C0;
    txt_set(0x1701);
    if (gate(2) != 0)
        goto L1B1D0;
L1B1C0:
    key_page(0x3E);
    key_page(0x3E);
L1B1D0:
    page(0x3D);
    cell_push_c8();
    cell_put(0x40);
    cell_push_c8();
    cell_put(0x41);
    page(0x40);
    cell_set50_from54();
L1b214:
    for (;;) {
        cell_push_c8();
        io_poll(0xFF);
        if (io_just() != 0)
            goto L1B244;
        cell_set50_from54();
    }
L1B244:
    cell_step();
    label(0xA69);
    cell_step();
    draw_pad_cur();
L1b264:
    for (;;) {
        cell_state(0x40);
        cell_flags_cmp();
        if (io_just() != 0)
            goto L1B2B0;
        cell_push_c8();
        cell_pull_c8(0xA49);
        step2();
        cell_step();
    }
L1B2B0:
    page(0x3D);
    cell_push_c8();
    cell_put(0xBC);
    cell_push_c8();
    cell_put(0xBD);
L1b2e0:
    for (;;) {
        page(0xBC);
        cell_push_c8();
        io_poll(0xFF);
        if (io_just() != 0)
            goto L1B3E0;
        io_poll(0xFE);
        if (io_just() == 0)
            goto L1B370;
        page(0xBC);
        cell_step();
        tail(0xBC);
        cell_push_c8();
        func_8011B6B4();
        io_poll_cur();
        if (io_just() != 0)
            goto L1B390;
        goto L1B3C0;
    L1B370:
        func_8011B6B4();
        io_poll_cur();
        if (io_just() != 0)
            goto L1B3C0;
    L1B390:
        func_8011B448();
        page(0xBC);
        if (cell_flags_cmp(cell_state(0xA69)) != 0)
            goto L1B3E0;
        continue;
    L1B3C0:
        page(0xBC);
        cell_step();
        tail(0xBC);
    }
L1B3E0:
    latch(1);
    cell_put(0xB1);
    open_row(0xAB);
    page(0xBC);
    cell_push_c8();
    if (gate(2) != 0)
        goto L1B42C;
    func_801163E8();
    if (io_go() != 0)
        goto L1B438;
L1B42C:
    open_row(0xB1);
L1B438:
    return;
}
