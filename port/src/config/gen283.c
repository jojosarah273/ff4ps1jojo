/* FF4 source-port — interpreted module for func_80127168.
 * Ground truth: src/func_80127168.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80127168(void)
{
    /* ability-move sub-screen: 1A3C/1B47 texts, two browse loops
       (L127294 equip, L127354 detail) with 801282D4 row-commit; exits via
       80136148 or the 80135BE4/80136014 left-route. */
    func_801360AC();
L127178:
    for (;;) {
        txt_set(0x1A3C);
        io_poll(5);
        if (io_go() == 0)
            goto L1271A0;
        cell_clear_bank(0x1A3C);
    L1271A0:
        midrow_pad88_run();
        battle_state_dc400();
        latch(0x1F);
        cell_pull_c8_lo(0x212C);
        page_paint2(0x16A7);
        midrow_degen();
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L127210;
        sep_b();
        func_80136148();
        return;
    L127210:
        /* v1/v0 gate */
        func_80135BE4();
        sep_a();
        func_80136014();
        return;
    L127264:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L127324;
        latch(0xF);
        cell_pull_c8_lo(0x212C);
    L127294:
        for (;;) {
            txt_set(0x1B47);
            if (gate(2) != 0)
                goto L1272D4;
            txt_set(0x1A3C);
            poll_spin();
            if (poll_go(2) != 0)
                goto L1272F4;
            goto L1272FC;
        L1272D4:
            txt_set(0x1A3C);
            poll_spin();
            if (poll_go_cur() != 0)
                goto L1272FC;
        L1272F4:
            latch(4);
        L1272FC:
            txt_draw(0x1A3C);
            func_801282D4();
            if (io_go() == 0)
                continue;
            break;
        }
        goto L1273A4;
    L127324:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto L1273C4;
        latch(0xF);
        cell_pull_c8_lo(0x212C);
    L127354:
        for (;;) {
            txt_set(0x1A3C);
            cell_set50_from40();
            io_poll(5);
            if (io_just() == 0)
                goto L127384;
            txt_set(0x1B47);
        L127384:
            txt_draw(0x1A3C);
            func_801282D4();
            if (io_go() == 0)
                continue;
            break;
        }
    L1273A4:
        txt_set(0x1A3C);
        func_80127668();
        func_80124298();
        func_801280D4();
    L1273C4:
        row_page(1);
        row_read(0x80);
        if (sel(2) == 0) {
            sep_a();
            func_80136148();
            return;
        }
        continue;
    }
}
