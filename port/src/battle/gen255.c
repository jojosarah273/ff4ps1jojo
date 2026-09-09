/* FF4 source-port — interpreted module for func_8011285C.
 * Ground truth: src/func_8011285C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011285C(void)
{
    /* battle item/status detail: 0xEC window + 0x1800-0x1802 title,
       0xFD6/0xAD-series texts, 800FC1CC/800FD6E8/80176060/800FB09C/
       80116398/80169128/80115BCC sub-renders, 80115D2C scroll loop. */
    latch(0xEC);
    txt_draw(0x1800);
    cell_clear_bank(0x1801);
    txt_set(0xFD6);
    row_read(0x8F);
    txt_draw(0x1802);
    func_800FC1CC();
    func_800FD6E8();
    func_80176060();
    page_open(0x1706);
    row_open();
    wnd_open(0x7763);
    label(0x1706);
    cell_clear_bank(0x1700);
    shop_view2_run();
    latch(0x20);
    cell_put(0xAD);
    latch(0x81);
    txt_draw(0x4200);
    latch(3);
    shop_rows_run();
    wnd_open(0x40);
    func_80116398();
    latch(1);
    cell_put(0xE3);
    latch(0x20);
    txt_draw(0xACF);
    latch(2);
    txt_draw(0xAD0);
    latch(3);
    txt_draw(0xAD1);
    wnd_open(0x7070);
    label(0xAD4);
    wnd_open(0x40);
    label(0xAD2);
    cell_clear_bank(0xACD);
    latch(2);
    txt_draw(0xACE);
    latch(0x42);
    txt_draw(0x1E01);
    latch(1);
    txt_draw(0x1E00);
    func_80169128();
    func_80115BCC();
L1129c4:
    for (;;) {
        shop_view_run();
        func_80115D2C();
        page_open(0xAD2);
        poll_t(0x10);
        if (io_go() != 0)
            goto L112A18;
        txt_draw(0x2100);
        func_800FD6E8();
    L112A18:
        page_open(0xAD2);
        if (cell_flags_pack(0x202) != 0)
            continue;
        break;
    }
    row_close();
    label(0x1706);
    open_row(0xE3);
    open_row(0x80);
    battle_wndfx_run();
    return;
}
