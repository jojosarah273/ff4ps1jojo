/* FF4 source-port — interpreted module for battle_spell_cast_helper_xc7_x48_x.
 * Ground truth: src/battle_spell_cast_helper_xc7_x48_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_spell_cast_helper_xc7_x48_x(void)
{
    /* battle spell-cast helper: 0xC7/0x48/0xC/0xE/0xCF windows, 0xACF-
       0xAD8 texts, 801105A4/801187C0/8010F484/80116398/8011053C/80115BCC
       sub-renders, 80115D2C/80173780 in the L10F5C4 loop. */
    latch(1);
    cell_put(0xC7);
    wnd_open(0x30);
    latch(0x60);
    cell_put(0xC);
    latch(0x50);
    cell_put(0xE);
    battle_rows_xc_xe_windows_x340_x34();
    latch(0xCF);
    battle_rows_x6_x83_x82_x79_x81_win();
    fn_1x0f484();
    wnd_open(0x20);
    fn_1x16398();
    fn_1x1053c();
    latch(0x10);
    txt_draw(0xACF);
    wnd_open(0x24);
    label(0xAD2);
    cell_clear_bank(0xACD);
    cell_clear_bank(0xACE);
    latch(0x70);
    txt_draw(0xAD4);
    txt_draw(0xAD5);
    battle_row_e5();
    latch(0x23);
    wnd_fx_pads();
    latch(1);
    cell_put(0xE3);
L10f5c4:
    for (;;) {
        wnd_fx_7d();
        cell_clear_pad();
        cell_fill_aa();
        battle_window_24();
        wnd_open(0x30);
        latch(0x60);
        cell_put(0xC);
        latch(0x50);
        cell_put(0xE);
        battle_rows_xc_xe_windows_x340_x34();
        fn_1x73780();
        page_open(0xAD2);
        poll_t(4);
        if (io_just() != 0)
            goto L10F64C;
        latch(1);
        cell_put(0xE5);
    L10F64C:
        poll_t_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    open_row(0xE3);
    fn_1x1053c();
    open_row(0xC7);
    return;
}
