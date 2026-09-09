/* FF4 source-port — interpreted module for func_8011E318.
 * Ground truth: src/func_8011E318.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011E318(void)
{
    /* battle verdict driver: 3D/3E/40 rows with 885C color fills,
       6434(0x202) gate; loops L11E35C (885C/5C64), L11E3C0 (key
       spin), L11E4D4 (fill tail). */
    page(0x3D);
    func_800F6C68();
    cell_put(0x3D);
    func_800F6C68();
    cell_put(0x3E);
    page(0x3D);
L11E35C:
    for (;;) {
        func_800F6C68();
        if (gate_cur() != 0)
            goto L11E450;
        row_read(0x7F);
        func_800F9200();
        func_800F6C68();
        step2();
        row_close2();
        page(0x40);
    L11E3C0:
        for (;;) {
            func_800F885C();
            cell_step();
            poll_pair_cur();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        tail(0x40);
        io_poll_cur();
        if (io_just() != 0)
            goto L11E4C4;
        page(0x3D);
        tail(0x3D);
    }
L11E450:
    page(0x40);
    func_800F885C();
    cell_step();
    tail(0x40);
    io_poll_cur();
    if (io_just() != 0)
        goto L11E4C4;
    page(0x3D);
    cell_step();
    tail(0x3D);
    goto L11E35C;
L11E4C4:
    draw_pad(0x40);
    page(0x40);
L11E4D4:
    for (;;) {
        func_800F6C68();
        func_800F885C();
        func_800F885C();
        func_800F885C();
        cell_step();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
