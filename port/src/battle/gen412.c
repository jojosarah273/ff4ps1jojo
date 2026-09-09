/* FF4 source-port — interpreted module for func_8010E98C.
 * Ground truth: src/func_8010E98C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010E98C(void)
{
    /* battle row: 0xAD/0x20 windows, 0x420C text, 8010E0D0/8017559C/
       8010E128/8011EA5C rows; 3 loops (L10E9B4 menu, L10EA2C confirm,
       L10EA7C second menu). */
    func_8010E0D0();
    latch(0x20);
    cell_put(0xAD);
    cell_clear_pad();
L10E9B4:
    for (;;) {
        wnd_fx_7d_b();
        cell_clear_bank(0x420C);
        key_page(0xAD);
        func_800FE5D4();
        battle_gate_early();
        row_page(0xAD);
        cell_set50_from40();
        shop_buy_list();
        row_page(0xAD);
        io_poll(0x78);
        if (io_just() == 0)
            continue;
        break;
    }
L10EA2C:
    for (;;) {
        wnd_fx_7d_b();
        cell_clear_bank(0x420C);
        battle_gate_early();
        row_page(2);
        if (gate(0x202) != 0)
            goto L10EA74;
        row_page(3);
        if (gate(2) != 0)
            continue;
    }
L10EA74:
    func_8010E128();
    goto L10EA7C;
L10EA7C:
    for (;;) {
        wnd_fx_7d_b();
        cell_clear_bank(0x420C);
        poll_pair(0xAD);
        func_800FE5D4();
        battle_gate_early();
        row_page(0xAD);
        shop_buy_list();
        row_page(0xAD);
        io_poll(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    latch(0x10);
    cell_put(0xAD);
    battle_wndfx_run();
    return;
}
