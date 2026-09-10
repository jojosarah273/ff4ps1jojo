/* FF4 source-port — interpreted module for func_800F9CE8.
 * Ground truth: src/func_800F9CE8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
uint32_t cell_rows_420d(void)
{
Lcf0:
    for (;;) {
        func_800F54B8();
        sep_a();
        row_prep(0x10);
        func_800F9660(0x20);
        func_800F8F74(0x420D);
        func_800F8F74(0x420B);
        func_800F8F74(0x420C);
        func_800F654C(0x8F);
        txt_draw(0x2100);
        func_800F654C();
        txt_draw(0x4200);
        func_800F654C();
        func_800F3D48();
        func_800F654C();
        cell_cursor_dec();
        func_800F9448();
        wnd_open(0x600);
        func_800F9330();
        func_800F94B8();
        wnd_open(0x2FF);
        cell_0xfc548();
        battle_godtext_a();
        battle_timer_screen_staged_poll_lo();
        func_801690F8();
        func_8011EB3C();
        if (func_800FB430() != 0)
            goto Ldf4;
        func_801798F0();
        func_80179670();
        func_80179930();
    }
Ldf4:
    ability_main_b9a_text_gate_be4_a5f();
    func_800F6564(0x17EF);
    sep_a();
    ticker_advance(catalog_base(0xFFF));
    txt_draw(0x17EF);
    func_800F5140();
    txt_draw(0x17EE);
    func_800F6564(0x17FB);
    io_poll_cur();
    if (func_800F53D4() == 0)
        goto Lef4;
    func_800FA834();
    cell_0xff0ac();
    fn_1x7477c();
    battle_godtext_a();
    func_800FA9B4();
    fn_1x1b874();
    func_800F654C(1);
    cell_put(0xB1);
    func_800F654C(1);
    cell_put(0x7D);
    func_800F654C(0xF);
    cell_put(0x80);
    func_800F654C(0x81);
    txt_draw(0x4200);
    cell_flags_clr4();
    func_800F8FB8(0xAB);
    func_800F654C(0x10);
    fn_1x163e8();
    func_800F8FB8(0xB1);
    goto Lf74;
Lef4:
    fn_1x1b874();
Lefc:
    battle_godtext_a();
    func_800FA9B4();
    func_800F654C(1);
    cell_put(0x7D);
    func_800F8FB8(0xDF);
    func_800F8FB8(0xB1);
    goto La3a8;
Lf34:
    func_800F8FB8(0x79);
    func_800F8FB8(0x7A);
    func_800F8FB8(0x7B);
    func_800F654C(0x81);
    txt_draw(0x4200);
    func_800FE7D8();
    cell_flags_clr4();
Lf74:
    for (;;) {
        wnd_fx_7d();
        func_800F8FB8(0xE0);
        battle_option_icon_row_windows_wit();
        func_800FA5B8();
        func_800F6630(0xE0);
        if (gate(2) == 0)
            continue;
        func_800F6564(0x1700);
        io_poll(3);
        if (func_800F53D4() != 0)
            goto La144;
        func_800F654C(7);
        txt_draw(0x2105);
        fn_1x01350();
        func_800F6630(0xE0);
        if (gate(2) == 0)
            continue;
        func_800F6630(0xCD);
        if (gate(2) == 0)
            goto La3a8;
        func_800FCCDC();
        func_800F6630(0x85);
        if (gate(2) != 0)
            goto La04c;
        if (func_800FC110() != 0)
            goto Ldf4;
        goto Lefc;
    La04c:
        func_800F6630(0xE0);
        if (gate(2) == 0)
            continue;
        fn_1x0543c();
        func_800F6630(0xE0);
        if (gate(2) != 0)
            goto La094;
        func_800F8F74(0x6AB);
        continue;
    La094:
        fn_1x02770();
        func_800FE870();
        shop_buy_run();
        func_800FDAFC();
        fn_1x75d90();
        func_800F6630(0xCE);
        if (gate(0x202) == 0)
            continue;
        func_800F8FB8(0xCE);
        func_800F6564(0x1700);
        if (gate(0x202) != 0)
            goto La104;
        func_800FF1C0();
        goto Lf34;
    La104:
        io_poll(1);
        if (func_800F53D4() == 0)
            goto La12c;
        func_800FF54C();
        goto Lf34;
    La12c:
        io_poll(2);
        func_800F53D4();
        continue;
    La144:
        if (fn_1x00d50() != 0)
            goto Ldf4;
        func_800F6630(0xCD);
        if (gate(2) == 0)
            goto La3a8;
        func_800FCCDC();
        func_800F6630(0x85);
        if (gate(2) == 0)
            goto La1b4;
        if (func_800FFE0C() != 0)
            goto Ldf4;
        func_800F6630(0x85);
        if (gate(2) != 0)
            goto La1cc;
    La1b4:
        if (battle_rows_x3f_x212c_x79_windows() != 0)
            goto Ldf4;
        goto Lefc;
    La1cc:
        func_800F6630(0xE0);
        if (gate(2) == 0)
            continue;
        fn_1x04934();
        stat_refresh_verify_driver_loops_u();
        fn_1x02770();
        key_dialog_flow_for_a_status_subme();
        func_800FE870();
        fn_1x70c14();
        func_8010B010();
        fn_1x75d90();
        func_800FCAB8();
        func_800F6630(0xD1);
        if (gate(2) != 0)
            continue;
        func_800F7210(0x172C);
        cell_set50_from54();
        cell_set50_from54();
        cell_set50_from54();
        func_800F8D00(0x172C);
        func_800F6B68(0x172E);
        io_poll(0xFB);
        if (func_800F53C0() == 0)
            goto La294;
        cell_0xfd6b8();
    La294:
        cell_0xfec74();
        func_800F8FB8(0xD6);
        func_800F6B68(0x172E);
        func_800F5480();
        cell_pos_back(0xFB);
        if (func_800F53C0() == 0)
            goto La324;
        txt_draw(0x1700);
        func_800F6B68(0x172F);
        txt_draw(0x1706);
        func_800F654C(2);
        txt_draw(0x1705);
        func_800F6B68(0x1730);
        txt_draw(0x1707);
        wnd_open_cur();
        func_800F8D00(0x172C);
        cell_0xfd6b8();
        goto La3a8;
    La324:
        func_800F654C(3);
        txt_draw(0x1700);
        func_800F6B68(0x172E);
        txt_draw(0x1702);
        func_800F6B68(0x172F);
        row_read(0x3F);
        txt_draw(0x1706);
        func_800F6B68(0x172F);
        sep_a();
        func_800F4008(2);
        row_read(3);
        txt_draw(0x1705);
        func_800F6B68(0x1730);
        txt_draw(0x1707);
    La3a8:
        func_800F6564(0x1700);
        if (gate(0x202) != 0)
            goto La3d8;
        func_800FB09C();
    La3c8:
        shop_banner_xd9_x7a_x79_xb1_window();
        goto Lf34;
    La3d8:
        io_poll(1);
        if (func_800F53D4() == 0)
            goto La400;
        cell_0xfb160();
        goto La3c8;
    La400:
        io_poll(2);
        if (func_800F53D4() == 0)
            goto La428;
        cell_0xfb224();
        goto La3c8;
    La428:
        func_800F6630(0x85);
        if (gate(2) != 0)
            goto La450;
        cell_0xfad48();
        goto La3c8;
    La450:
        cell_0xfaa04();
        goto La3c8;
    }
    return 0;
}
