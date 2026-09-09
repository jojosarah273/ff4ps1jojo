/* FF4 source-port — interpreted module for func_801198F0.
 * Ground truth: src/func_801198F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801198F0(void)
{
    /* battle buy detail: 0xB3 window, 0x8FB/0x9D5 texts; 80106370 +
       80109A28 preps, 801082C8/80107C98/80107F3C item rows; loops
       L119A00 on 54D4(3B04(0x8FB)); L1199F8 gate on 5574(0xEC/0xFE/
       0xED). */
    cell_step();
    tail(0xB3);
    func_80106370();
    func_800FE7B0();
    func_80109A28();
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
    func_801082C8();
    func_80107C98();
    func_80107F3C();
L119998:
    func_801175C4();
    func_8011EA5C();
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
    if (func_800F5B2C(cell_state_of()) != 0)
        goto L119A80;
    page_paint(0x1440);
L119A80:
    func_8011EA5C();
    return;
}
