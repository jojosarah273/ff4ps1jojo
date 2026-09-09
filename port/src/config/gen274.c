/* FF4 source-port — interpreted module for func_8012BE34.
 * Ground truth: src/func_8012BE34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012BE34(void)
{
    /* item/equip sub-screen: 0x1B3E/0x1B22 texts, 0x70/0x8/0xE8/0x5D
       windows; 8012D194 cursor gate and 801224D0 detail; loops at
       L2BE3C/L2BEFC/L2BF64 and the L2BECC option ring. */
L2be3c:
    for (;;) {
        if (func_8012D194() == 0)
            goto L2BE94;
        txt_set(0x1B3E);
        func_800F61E8();
        io_poll(5);
        if (io_just() == 0)
            goto L2BE84;
        latch_cur();
    L2BE84:
        txt_draw(0x1B3E);
    }
L2BE94:
    txt_set(0x1B22);
    if (gate(0x202) != 0)
        goto L2BEBC;
    latch(0x70);
    goto L2BEC4;
L2BEBC:
    latch(8);
L2BEC4:
    cell_put(0x5D);
L2becc:
    for (;;) {
        func_8011F684();
        func_8011F884();
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L2BF44;
    L2befc:
        for (;;) {
            txt_set(0x1B3E);
            poll_spin();
            if (poll_go_cur() != 0)
                goto L2BF24;
            latch(4);
        L2BF24:
            txt_draw(0x1B3E);
            if (func_8012D194() != 0)
                continue;
            goto L2BF44;
        }
    L2BF44:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto L2BFB4;
    L2bf64:
        for (;;) {
            txt_set(0x1B3E);
            func_800F61E8();
            io_poll(5);
            if (io_go() == 0)
                goto L2BF94;
            latch_cur();
        L2BF94:
            txt_draw(0x1B3E);
            if (func_8012D194() != 0)
                continue;
            break;
        }
    L2BFB4:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L2C000;
        txt_set(0x1B3E);
        func_801224D0();
        func_800F6C68();
        cell_put(0xE8);
        goto L2C098;
    L2C000:
        row_page(1);
        row_read(0x80);
        if (sel(2) == 0)
            goto L2C088;
        txt_set(0x1B3E);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_open_w(0x40);
        cell_put(0x5E);
        latch_cur();
        page(0x5D);
        draw_pad(0x300);
        func_8011F724();
        continue;
    L2C088:
        latch(0xFF);
        cell_put(0xE8);
        break;
    }
L2C098:
    return;
}
