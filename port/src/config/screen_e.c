/* FF4 source-port — interpreted module for func_8013389C.
 * Ground truth: src/func_8013389C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED54[8];
extern u32 D_8019ED58[8];
void func_8013389C(void)
{
    latch_cur();
    stat_sync();
    cell_push_c8_lo(0x57);
    row_prep(0x20);
    sep_a();
    cell_pos_fwd(0xFF98);
    cell_put_hi9(0x99);
    row_prep_close();
    func_80120F1C();
    row_page(0xE8);
    func_80124EAC();
    tail(0xE5);
    func_8012AAC0();
    func_801264C0();
    func_8016EA7C();
    row_page(0xE8);
    func_80124EAC();
    tail(0x60);
main_loop:
    cell_push_c8_lo(0x51);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x76);
    cell_put(0x46);
    cell_push_c8_lo(0x54);
    if (gate(2) == 0)
        latch(0x68);
    row_open_w(8);
    cell_put(0x45);
    func_8011F6AC();
    func_8011F684();
    func_8011F884();
loop_bottom:
    row_page(1);
    row_read(1);
    if (sel(2) != 0)
        goto a28;
    cell_push_c8_lo(0x54);
    cell_set50_from40();
    row_read(1);
    func_800F8A18(0x54);
    if (sel(2) != 0)
        goto b70;
a28:
    row_page(1);
    row_read(2);
    if (sel(2) != 0)
        goto a78;
    cell_push_c8_lo(0x54);
    cell_set50_from40();
    row_read(1);
    func_800F8A18(0x54);
    if (sel(0x202) != 0)
        goto a98;
a78:
    row_page(1);
    row_read(8);
    if (sel(2) != 0)
        goto b50;
a98:
    cell_push_c8_lo(0x51);
    poll_spin();
    if (poll_go(0x8080) != 0)
        goto b48;
    cell_push_c8_lo(0x57);
    poll_spin();
    if (poll_go(0x80) != 0)
        goto b50;
    func_800F8A18(0x57);
    latch(8);
    for (;;) {
        row_prep(0x20);
        cell_dec_cell(0x99);
        cell_dec_cell(0x99);
        row_prep_close();
        func_801266C8();
        poll_spin();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_8011F7D4();
    if (io_go() == 0)
        goto loop_bottom;
    goto b50;
b48:
    func_800F8A18(0x51);
b50:
    row_page(1);
    row_read(4);
    if (sel(2) != 0)
        goto c38;
b70:
    cell_push_c8_lo(0x51);
    cell_set50_from40();
    io_poll(6);
    if (io_just() == 0)
        goto c30;
    cell_push_c8_lo(0x57);
    cell_set50_from40();
    io_poll(0x13);
    if (io_just() != 0)
        goto c38;
    func_800F8A18(0x57);
    latch(8);
    for (;;) {
        row_prep(0x20);
        cell_inc_cell(0x99);
        cell_inc_cell(0x99);
        row_prep_close();
        func_801266C8();
        poll_spin();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_8011F7D4();
    if (io_go() == 0)
        goto loop_bottom;
    goto c38;
c30:
    func_800F8A18(0x51);
c38:
    row_page_cur();
    row_read(0x80);
    if (sel(2) != 0)
        goto ec;
    page(0x60);
    tail(0x5D);
    cell_push_c8_lo(0x51);
    sep_a();
    cell_poke0(cell_state(cell_bank_sel(0x57)));
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(cell_bank_sel(0x54)));
    row_sel_cell_cur();
    func_801224D0();
    txt_cell(0x1440);
    tail(0x4B);
    if (gate(2) != 0)
        goto d10;
    page(0x5D);
    tail(0xE5);
    func_8013441C();
    if (io_go() == 0)
        goto L36C;
d10:
    txt_set(0x1B37);
    func_801224D0();
    page(0x4B);
    cell_put(0x43);
    cell_fmt2(0x43);
    txt_set(0x1B37);
    io_poll(2);
    if (io_go() == 0)
        goto f78;
    cell_push_c8_sel(0x60);
    if (gate(0x202) != 0)
        goto db8;
    txt_cell(0x1440);
    if (gate(0x202) == 0)
        return;
    goto L2D4;
db8:
    txt_cell(0x1440);
    if (gate(0x202) != 0)
        goto e08;
    cell_push_c8_sel(0x60);
    cell_draw(0x1440);
    cell_dispatch(cell_state(0x1441 + *(u16 *)D_8019ED54[0]));
    goto L12C;
e08:
    if (io_press(cell_state(cell_bank_sel(0x60))) != 0)
        return;
    txt_cell(0x1441);
    io_poll(1);
    if (io_just() == 0)
        goto e90;
    cell_push_c8_sel(0x60);
    cell_cursor_dec();
    txt_cell(0x1440);
    cell_pull_c8_bank(0x60);
    row_close2();
    goto L314;
e90:
    cell_push_c8_sel(0x60);
    row_open();
    func_80134948();
    if (io_just() != 0)
        goto ed8;
    sep();
    func_80134948();
    if (io_just() == 0)
        goto f60;
ed8:
    cell_push_c8_sel(0x60);
    cell_draw(0x1440);
    cell_dispatch(cell_state(0x1441 + *(u16 *)D_8019ED54[0]));
    row_close();
    txt_cell(0x1440);
    cell_pull_c8_bank(0x60);
    func_800F5B2C(cell_state(0x1441 + *(u16 *)D_8019ED54[0]));
    if (poll_go(0x202) != 0)
        return;
    page_paint(0x1440);
    return;
f60:
    row_close();
f68:
    func_8012219C();
    return;
f78:
    cell_push_c8_sel(0x60);
    if (gate(0x202) != 0)
        goto L008;
    txt_cell(0x1440);
    if (gate(0x202) == 0)
        return;
    cell_pull_c8_bank(0x60);
    func_80134A50();
    if (io_go() == 0)
        goto fe8;
    step2();
    txt_cell(0x1441);
    cell_pull_c8_bank(0x60);
    goto L34C;
fe8:
    step2();
    cell_push_c8_sel(0x60);
    cell_set50_from40();
    goto L2D4;
L008:
    txt_cell(0x1440);
    if (gate(0x202) != 0)
        goto L068;
    cell_push_c8_sel(0x60);
    cell_draw(0x1440);
    step2();
    cell_push_c8_sel(0x60);
    cell_draw(0x1441);
    latch_cur();
    cell_pull_c8_bank(0x60);
    poll_pair_cur();
    goto L134;
L068:
    if (io_press(cell_state(cell_bank_sel(0x60))) == 0)
        goto L144;
    func_80134A50();
    if (io_go() == 0)
        return;
    txt_cell(0x1441);
    step2();
    sep_a();
    cell_poke0(cell_state(cell_bank_sel(0x60)));
    io_poll(0x64);
    if (io_go() == 0)
        goto L344;
    sep_b();
    cell_pos_back(0x63);
    cell_draw(0x1441);
L12C:
    latch_cur();
L134:
    cell_pull_c8_bank(0x60);
    return;
L144:
    txt_cell(0x1440);
    func_80134A50();
    if (io_go() != 0)
        goto L184;
    txt_cell(0x1441);
    io_poll(1);
    if (io_just() == 0)
        goto L1AC;
L184:
    func_80134AB0();
    step2();
    cell_step();
    func_80134AB0();
    return;
L1AC:
    step2();
    latch(0x63);
    sep_b();
    cell_tick_sub(cell_state(cell_bank_sel(0x60)));
    cell_put(0xE3);
    poll_pair_cur();
    cell_push_c8_sel(0x60);
    func_80134948();
    if (io_just() != 0)
        goto L23C;
    latch_cur();
    func_80134948();
    if (io_just() == 0)
        goto f68;
L23C:
    cell_push_c8_sel(0x60);
    cell_draw(0x1440);
    step2();
    cell_push_c8_sel(0x60);
    sep_a();
    cell_poke0(cell_state(0x1441 + *(u16 *)D_8019ED54[0]));
    cell_draw(0x1441);
    page(0x4B);
    txt_cell(0x1440);
    func_80134A50();
    if (io_go() != 0)
        goto L324;
    latch(1);
    cell_pull_c8_bank(0x60);
    poll_pair_cur();
    txt_cell(0x1440);
L2D4:
    cell_pull_c8_bank(0x60);
    func_800F5B2C(cell_state(0x1441 + *(u16 *)D_8019ED54[0]));
    if (poll_go(0x202) != 0)
        return;
    latch_cur();
L314:
    cell_draw(0x1440);
    return;
L324:
    txt_cell(0x1441);
    cell_pull_c8_bank(0x60);
    poll_pair_cur();
    txt_cell(0x1440);
L344:
    cell_pull_c8_bank(0x60);
L34C:
    latch_cur();
    cell_draw(0x1440);
    cell_draw(0x1441);
    return;
L36C:
    func_8012219C();
    row_page(0xEB);
    if (gate(2) != 0)
        goto ec;
    func_8012B0D8();
    func_80120FBC();
    draw_pad_cur();
    func_8011FB74();
    func_80126458();
    func_8011F6A4();
    func_8011FF40();
    func_801240D0();
    draw_pad_cur();
    func_8011EF30();
    func_80126458();
ec:
    row_page(1);
    row_read(0x80);
    if (sel(2) != 0)
        goto main_loop;
    return;
}
