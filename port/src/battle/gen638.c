/* FF4 source-port — interpreted module for func_8014B6E8.
 * Ground truth: src/func_8014B6E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014B6E8(void)
{
    /* battle item: 801442BC/8014B98C/80148CAC/800953F4 preps; loop
       L14B738 (6D70(0x29C5)/5A90(5) gates), closes 8014DA2C/8014D568. */
    func_801442BC();
    func_8014B98C();
    func_80148CAC();
    func_800953F4();
    txt_set(0x34C2);
    row_read(0x80);
    cell_put_cur();
    open_row(1);
    draw_pad_cur();
L14b738:
    for (;;) {
        func_800F6D70(0x29C5);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L14B7AC;
        func_800F6C68();
        func_800F78C4(cell_state(1));
        cell_put(1);
    L14B7AC:
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    open_row(2);
    latch(0x3D);
    func_8014DA2C();
    latch_cur();
    func_8014D568();
    return;
}
