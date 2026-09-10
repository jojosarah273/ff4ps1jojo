/* FF4 source-port — interpreted module for func_801126A0.
 * Ground truth: src/func_801126A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801126A0(void)
{
    /* battle item-status (twin of 8011285C): 0x1706/0x1700 headers,
       0xACF-0xAD8 texts, 80115BCC/80115D2C sub-renders; loop L1127C0
       scrolls on 7170(0x202). */
    battle_godtext_a();
    page_open(0x1706);
    row_open();
    wnd_open_cur();
    label(0x1706);
    cell_clear_bank(0x1700);
    shop_view2_run();
    latch(0x20);
    cell_put(0xAD);
    latch(0x10);
    shop_buy_list();
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
    latch(2);
    txt_draw(0xAD1);
    wnd_open(0x7070);
    label(0xAD4);
    wnd_open(0x40);
    label(0xAD2);
    cell_clear_bank(0xACD);
    latch(2);
    txt_draw(0xACE);
    latch(0x5E);
    wnd_fx_pads();
    battle_row_e5();
L1127c0:
    for (;;) {
        shop_view_run();
        battle_window_24();
        page_open(0xAD2);
        poll_t(0x10);
        if (io_go() != 0)
            goto L11280C;
        txt_draw(0x2100);
    L11280C:
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
