/* FF4 source-port — interpreted module for func_8016380C.
 * Ground truth: src/func_8016380C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016380C(void)
{
    /* options value: 0x34C8/0x34C7 titles, 0xA6/0x202F/0xA9/0xAB
       windows, 80152CDC + 8015329C rows; loop L16386C on 5574(0xD). */
    latch(0x12);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    page(0xA6);
    txt_cell(0x202F);
    cell_tick_half();
    cell_flags_repack();
    cell_put(0xA9);
    wnd_open(5);
    tail(0xAB);
L16386c:
    for (;;) {
        page(0xAB);
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            break;
        func_80152CDC();
        page(0xA6);
        sep_b();
        txt_cell(0x202F);
        cell_tick_sub(cell_state(0xA9));
        if (io_just() != 0)
            goto L1638F0;
        if (io_go() != 0)
            goto L1638F8;
    L1638F0:
        latch(1);
    L1638F8:
        cell_draw(0x202F);
        key_page(0xAB);
        row_page(0xAB);
        io_poll(0xD);
        if (io_just() == 0)
            continue;
        break;
    }
    latch(0x13);
    txt_draw(0x34CA);
    func_8015329C();
    return;
}
