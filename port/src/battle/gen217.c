/* FF4 source-port — interpreted module for fn_1x1124c.
 * Ground truth: src/fn_1x1124c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x1124c(void)
{
    fn_1x11b14();
    latch(0x81);
    txt_draw(0x4200);
    open_row(0xAC);
    open_row(0x79);
    open_row(0x20);
    open_row(0x7A);
L1294:
    for (;;) {
        row_page(0x7A);
        row_read(3);
        txt_draw(0x1705);
        fn_1x11adc();
        row_page(0x7A);
        row_read(1);
        if (sel(0x202) != 0)
            goto L1318;
        latch(4);
        goto L1320;
    L1318:
        latch_cur();
    L1320:
        cell_put(0xAB);
        fn_1x02770();
        battle_rows_xc_xe_windows_x2c_x2e();
        row_page(0x2C);
        txt_draw(0x340);
        txt_draw(0x300);
        sep_a();
        row_open_w(0x10);
        txt_draw(0x344);
        txt_draw(0x304);
        sep_a();
        row_open_w(0x10);
        txt_draw(0x348);
        txt_draw(0x308);
        sep_a();
        row_open_w(0x10);
        txt_draw(0x34C);
        txt_draw(0x30C);
        latch(0x68);
        sep_a();
        cell_poke0(cell_state(0x20));
        io_poll(0x78);
        if (io_go() == 0)
            goto L13f0;
        latch(0x78);
    L13f0:
        txt_draw(0x341);
        txt_draw(0x345);
        txt_draw(0x349);
        txt_draw(0x34D);
        latch(0x30);
        txt_draw(0x342);
        latch(0x32);
        txt_draw(0x346);
        latch(0x34);
        txt_draw(0x34A);
        latch(0x36);
        txt_draw(0x34E);
        latch(0x37);
        txt_draw(0x343);
        txt_draw(0x303);
        txt_draw(0x347);
        txt_draw(0x307);
        txt_draw(0x34B);
        txt_draw(0x30B);
        txt_draw(0x34F);
        txt_draw(0x30F);
        latch(0x70);
        txt_draw(0x301);
        txt_draw(0x305);
        txt_draw(0x309);
        txt_draw(0x30D);
        row_page(0x7A);
        row_read(2);
        sep_a();
        row_open_w(0xE4);
        txt_draw(0x302);
        txt_draw(0x306);
        txt_draw(0x30A);
        txt_draw(0x30E);
        txt_draw_cur();
        row_page(0x7A);
        row_read(7);
        if (sel(0x202) != 0)
            goto L1588;
        key_page(0x20);
    L1588:
        row_page(0x7A);
        row_read(3);
        if (sel(0x202) != 0)
            goto L15b0;
        key_page(0x2C);
    L15b0:
        row_page(0x20);
        io_poll(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    cell_clear_bank(0x1728);
    battle_wndfx_run();
    return;
}
