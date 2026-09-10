/* FF4 source-port — interpreted module for func_8012CF18.
 * Ground truth: src/func_8012CF18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012CF18(void)
{
    /* config sub-menu (file save): 0x45 window, 0x1B3B text, 0x15C0
       wait gate; 8012D204 cursor, 8012C250/80120A0C/801210AC/8011FB74/
       8012FBB0/80120B6C/80169170/801240A8/801263F0 renders; loops at
       L12CF28/L12CFE0/L12D030. */
    open_row(0x45);
L12cf28:
    for (;;) {
        row_page(0x45);
        midrow_prep_a();
        io_poll(3);
        if (io_just() != 0)
            goto L12CFA8;
        io_poll(0x11);
        if (io_just() != 0)
            goto L12CFA8;
        key_page(0x45);
        row_page(0x45);
        io_poll(5);
        if (io_just() == 0)
            continue;
        goto L12CF90;
    L12CFA8:
        cell_put(0xED);
        txt_set(0x1B3B);
        sep_b();
        cell_pos_back(0xB6);
        cell_put(0x45);
        row_prep_close();
        func_800F756C(0x41);
    L12cfe0:
        for (;;) {
            func_800F6D40(0x15C0);
            if (io_press(cell_state(0x45)) != 0)
                goto L12CF90;
            func_800F6390();
            func_800F59F4(0x18);
            if (io_just() == 0)
                continue;
            break;
        }
        func_800F756C(0x41);
    L12d030:
        for (;;) {
            func_800F6D40(0x15C0);
            if (gate(2) != 0)
                goto L12D068;
            func_800F6390();
            func_800F59F4(0x18);
            if (io_just() == 0)
                continue;
            break;
        }
    L12D068:
        row_page(0x45);
        func_800F8930(0x15C0);
        cell_cursor_dec();
        row_prep(0x10);
        midrow_paint_a();
        draw_pad_cur();
        func_8011FB74();
        draw_pad(0x29A);
        row_page(0xED);
        func_80120A0C();
        page_paint2(0x1BC8);
        row_close2();
        wnd_open(0x39A);
        func_8012FBB0();
        cell_clear_bank(0x1BC8);
        battle_row_45b();
        func_80169170();
        config_row_a600();
        config_row_f320();
        row_prep(0x10);
        return;
    L12CF90:
        row_prep(0x10);
        func_8012C250();
        return;
    }
}
