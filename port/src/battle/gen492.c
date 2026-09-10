/* FF4 source-port — interpreted module for battle_buy_detail_xb3_window_x8fb.
 * Ground truth: src/battle_buy_detail_xb3_window_x8fb.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_buy_detail_xb3_window_x8fb(void)
{
    /* battle buy detail: 0xB3 window, 0x8FB/0x9D5 texts; 80106370 +
       80109A28 preps, 801082C8/80107C98/80107F3C item rows; loops
       L119A00 on 54D4(3B04(0x8FB)); L1199F8 gate on 5574(0xEC/0xFE/
       0xED). */
    cell_step();
    tail(0xB3);
    fn_1x06370();
    wnd_fx_7d_b();
    fn_1x09a28();
    txt_set(0x8FB);
    io_poll(0xFF);
    if (io_just() != 0)
        goto L119998;
    page(0xB3);
    txt_cell(0x9D5);
    if (io_press(cell_state(0x8FB)) != 0)
        goto L1199B0;
    latch(0x14);
    cell_put(0xB2);
    fn_1x082c8();
    config_sub_screen();
    config_confirm_loop_a();
L119998:
    fn_1x175c4();
    battle_wndfx_run();
    return;
L1199B0:
    io_poll(0xEC);
    if (io_just() != 0)
        goto L119A80;
    io_poll(0xFE);
    if (io_go() != 0)
        goto L1199F8;
    io_poll(0xED);
    if (io_go() != 0)
        goto L119A80;
L1199F8:
    wnd_open_cur();
L119a00:
    for (;;) {
        txt_cell(0x1440);
        if (io_press(cell_state(0x8FB)) != 0)
            goto L119A48;
    }
L119A48:
    if (cell_0xf5b2c(cell_state_of()) != 0)
        goto L119A80;
    page_paint(0x1440);
L119A80:
    battle_wndfx_run();
    return;
}
