/* FF4 source-port — interpreted module for func_8011AEAC.
 * Ground truth: src/func_8011AEAC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011AEAC(void)
{
    /* battle item-select (right-side variant): 62/61 label window, 64/65
       slot rows, BE/BF select rows; 8011B6B4 row draw, 801163E8 use. */
    open_row(0x3E);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    cell_put(0x3D);
    page(0x3D);
    cell_push_c8();
    cell_put(0x40);
    cell_push_c8();
    cell_put(0x41);
    page(0x40);
    cell_set50_from54();
L11af28:
    for (;;) {
        cell_push_c8();
        io_poll(0xFF);
        if (io_just() != 0)
            goto L11AF58;
        cell_set50_from54();
    }
L11AF58:
    cell_step();
    label(0xA6B);
    page(0x3D);
    cell_push_c8();
    cell_put(0xBE);
    cell_push_c8();
    cell_put(0xBF);
L11af98:
    for (;;) {
        page(0xBE);
        cell_push_c8();
        io_poll(0xFF);
        if (io_just() != 0)
            goto L11B0D4;
        io_poll(0xFE);
        if (io_just() == 0)
            goto L11B028;
        page(0xBE);
        cell_step();
        tail(0xBE);
        cell_push_c8();
        func_8011B6B4();
        io_poll_cur();
        if (io_just() != 0)
            goto L11B048;
        goto L11B0B4;
    L11B028:
        func_8011B6B4();
        io_poll_cur();
        if (io_just() != 0)
            goto L11B0B4;
    L11B048:
        page(0xBE);
    L11b050:
        for (;;) {
            cell_step();
            cell_push_c8();
            io_poll(0xFF);
            if (io_just() != 0)
                break;
        }
        cell_step();
        tail(0xBE);
        page(0xBE);
        if (cell_flags_cmp(cell_state(0xA6B)) != 0)
            goto L11B0D4;
        continue;
    L11B0B4:
        page(0xBE);
        cell_step();
        tail(0xBE);
    }
L11B0D4:
    latch(1);
    cell_put(0xB1);
    open_row(0xAB);
    page(0xBE);
    cell_push_c8();
    if (gate(2) != 0)
        goto L11B13C;
    func_801163E8();
    if (io_go() != 0)
        goto L11B148;
L11B13C:
    open_row(0xB1);
L11B148:
    return;
}
