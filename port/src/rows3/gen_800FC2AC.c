/* FF4 source-port — interpreted module for func_800FC2AC.
 * Ground truth: src/func_800FC2AC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
uint32_t battle_confirm_dialog(void)
{
    /* battle confirm-dialog: two 5958/53C0 key-gates select the 0x1802
       header, then the 0x1700-0x1702 option rows, then 0x1803 dispatch
       (801762D0/80187B00 vs the 0x1804-0x180B detail fill), 0x2100 title,
       and 8010CA74 confirm. */
    func_800F7210(0x1800);
    func_800F5958(0x1B7);
    if (func_800F53C0() == 0)
        goto LFC2FC;
    func_800F5958(0x1B9);
    if (func_800F53C0() != 0)
        goto LFC2FC;
    func_800F654C(0x10);
    txt_draw(0x1802);
LFC2FC:
    func_800F6564(0x1700);
    io_poll(3);
    if (func_800F53D4() == 0)
        goto LFC3C0;
    func_800F6564(0x1701);
    if (gate(2) != 0)
        goto LFC3C0;
    func_800F6564(0x1702);
    io_poll(0x5A);
    if (func_800F53C0() == 0)
        goto LFC36C;
    io_poll(0x5D);
    if (func_800F53C0() == 0)
        goto LFC39C;
LFC36C:
    io_poll(0x67);
    if (func_800F53C0() == 0)
        goto LFC3C0;
    io_poll(0x7F);
    if (func_800F53C0() != 0)
        goto LFC3C0;
LFC39C:
    func_800F6564(0x1801);
    txt_draw_cur();
LFC3C0:
    func_800FB3F8();
    cell_0xf92d8();
    func_800F54B8();
    battle_splash_e8_fc_bc_preps_loop();
    cell_0xfc548();
    cell_0xf9538();
    func_800F6564(0x1803);
    if (gate_cur() != 0)
        goto LFC434;
    battle_timer_screen_staged_poll_lo();
    func_80187B00();
    goto LFC538;
LFC434:
    func_800F6630(0xC6);
    if (gate(2) != 0)
        goto LFC464;
    txt_draw(0x1804);
    func_800F8FB8(0xC6);
    goto LFC4EC;
LFC464:
    func_800F6564(0x1804);
    cell_tick_or(catalog_base(0x1805));
    cell_tick_or(catalog_base(0x1806));
    cell_tick_or(catalog_base(0x1807));
    cell_tick_or(catalog_base(0x1808));
    cell_tick_or(catalog_base(0x1809));
    cell_tick_or(catalog_base(0x180A));
    cell_tick_or(catalog_base(0x180B));
    if (ticker_reblend2(2) != 0)
        goto LFC4FC;
LFC4EC:
    fn_1x1eb5c();
    cell_0xfc548();
LFC4FC:
    func_800F654C(0x80);
    txt_draw(0x2100);
    func_800F6564(0x1700);
    io_poll(3);
    if (func_800F53D4() == 0)
        goto LFC538;
    battle_rows_xae_x9d1_x9cf_texts_d6();
    return;
LFC538:
    return;
    return 0;
}
