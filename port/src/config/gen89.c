/* FF4 source-port — interpreted module for func_801361A4.
 * Ground truth: src/func_801361A4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801361A4(void)
{
    /* item/equip configuration screen. Two 6434(0x202) sub-loops (equip
       browse L362AC / detail L36324); 4008(0x50) reads the confirm key
       before the top of the loop; exits on 4120 returns. */
L361ac:
    for (;;) {
        txt_set(0x1B7B);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_open_w(0x50);
        cell_put(0x46);
        latch(0x10);
        cell_put(0x45);
        func_8011F6D4();
        func_801368E8();
        func_80125934();
        func_8011F684();
        func_8011F884();
        row_page(1);
        row_read(0x80);
        if (sel(2) == 0)
            return;
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L3628C;
        func_80136494();
        func_801240D0();
        func_80126458();
        func_801352F0();
        func_801264C0();
    L3628C:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L36304;
    L362AC:
        for (;;) {
            txt_set(0x1B7B);
            poll_spin();
            if (poll_go_cur() != 0)
                goto L362DC;
            txt_set(0x1B7D);
            poll_spin();
        L362DC:
            txt_draw(0x1B7B);
            func_801224D0();
            txt_cell(0x1A78);
            if (gate(0x202) != 0)
                continue;
            break;
        }
    L36304:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto L36384;
    L36324:
        for (;;) {
            txt_set(0x1B7B);
            func_800F61E8();
            if (io_press(cell_state(0x1B7D)) == 0)
                goto L3635C;
            latch_cur();
        L3635C:
            txt_draw(0x1B7B);
            func_801224D0();
            txt_cell(0x1A78);
            if (gate(0x202) != 0)
                continue;
            break;
        }
    L36384:
        row_page(1);
        row_read(3);
        if (sel(2) != 0)
            goto L363EC;
        txt_set(0x1B7A);
        row_read(1);
        txt_draw(0x1B7A);
        func_801378E0();
        func_8013554C();
        func_8011F6A4();
    L363EC:
        row_page_cur();
        row_read(0x40);
        if (sel(2) != 0)
            continue;
        txt_set(0x1B7A);
        if (gate(2) != 0)
            continue;
        txt_set(0x1B7C);
        sep_a();
        row_open_w(0xA);
        io_poll(0x64);
        if (io_go() == 0)
            goto L3645C;
        latch(0xA);
    L3645C:
        txt_draw(0x1B7C);
        draw_pad(0x19A);
        func_801206DC();
        func_8013554C();
    }
    return;
}
