/* FF4 source-port — interpreted module for func_80150C58.
 * Ground truth: src/func_80150C58.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED54[8];
extern u32 D_8019ED58[8];
void func_80150C58(void)
{
    func_80151F28();
    wnd_open(0xFF);
    for (;;) {
        cell_push_c8();
        cell_draw(0x1900);
        cell_set50_from54();
        if (poll_go(0x8080) == 0)
            break;
    }
    func_80151CD8();
    wnd_open(0x7F);
    sep();
    sep_a();
    for (;;) {
        cell_poke0(cell_state(0x600 + *(u16 *)D_8019ED54[0]));
        cell_set50_from54();
        if (poll_go(0x8080) == 0)
            break;
    }
    cell_put(0x97);
    func_8005A234();
    txt_set(0x1802);
    cell_cursor_dec();
    cell_cursor_dec();
    row_read(0x80);
    txt_draw(0x352C);
    row_close2();
    row_read(0x40);
    cell_put(0xA9);
    row_close2();
    row_read(0x3F);
    txt_draw(0x1802);
    row_page(0xA9);
    if (gate(2) == 0) {
        latch(7);
        txt_draw(0x1802);
    }
    txt_set(0x1801);
    row_read(0x80);
    txt_draw(0x38EF);
    txt_set(0x1801);
    row_read(0x7F);
    txt_draw(0x1801);
    row_prep(0x20);
    cell_push9(0x1800);
    cell_flags_cmp3(0x100);
    if (io_go() == 0)
        goto df4;
    sep_b();
    cell_pos_back2();
    cell_pull9_hi(0x1800);
df4:
    cell_push9(0x1800);
    cell_pull9_hi(0x393D);
    row_sync2(8);
    cell_pull9_hi(0x393F);
    func_8015236C();
    sep();
    row_prep_close();
    page_open(0x3941);
    sep();
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x299C);
        step2();
        cell_step();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    txt_set(0x299C);
    txt_draw(0x29A4);
    row_read(8);
    txt_draw(0x3581);
    wnd_open(3);
    poll_pair_cur();
    for (;;) {
        txt_cell(0x299C);
        cell_pull_c8(0x29AD);
        cell_pull_c8(0x29B1);
        cell_set50_from54();
        poll_pair_cur();
        if (poll_go(0x8080) == 0)
            break;
    }
    latch(0xFF);
    txt_draw(0x29B0);
    txt_draw(0x29B4);
    sep();
    txt_set(0x29A0);
    cell_put(0xAB);
    for (;;) {
        page_paint(0x29CA);
        row_arm2(cell_state(0xAB));
        row_sel_cell2_cur();
        row_sel2(cell_state(0x29CA + *(u16 *)D_8019ED54[0]));
        row_arm2(cell_state(0xAB));
        row_sel_cell2_cur();
        row_sel2(cell_state(0x29CA + *(u16 *)D_8019ED54[0]));
        cell_step();
        poll_t(3);
        if (io_just() != 0)
            break;
    }
    sep();
view14:
    step2();
view30:
    for (;;) {
        txt_cell(0x29AD);
        io_poll(0xFF);
        if (io_just() != 0)
            goto viewF8;
        if (io_press(cell_state(0x29AD + *(u16 *)D_8019ED58[0])) == 0)
            goto viewD8;
        sep_a();
        txt_cell(0x29CA);
        cell_poke0(cell_state(0x29CA + *(u16 *)D_8019ED58[0]));
        cell_draw(0x29CA);
        sep();
        cell_pull_c8(0x29CA);
        poll_spin();
        cell_pull_c8(0x29AD);
    viewD8:
        step2();
        poll_t(3);
        if (io_just() == 0)
            continue;
        break;
    }
viewF8:
    cell_step();
    poll_t(2);
    if (io_just() == 0)
        goto view14;
    latch(0xFF);
    draw_pad(7);
    for (;;) {
        cell_pull_c8(0x29B5);
        cell_pull_c8(0x29BD);
        poll_pair_cur();
        if (poll_go(0x8080) == 0)
            break;
    }
    step2();
view74:
    for (;;) {
        txt_cell(0x29CA);
        cell_put(0xAB);
        if (gate(2) != 0)
            goto viewE4;
        for (;;) {
            cell_pull_c8(0x29B5);
            cell_pull_c8(0x29BD);
            step2();
            poll_pair(0xAB);
            row_page(0xAB);
            if (gate(0x202) == 0)
                break;
        }
    viewE4:
        cell_step();
        poll_t(3);
        if (io_just() == 0)
            continue;
        break;
    }
    txt_set(0x29A1);
    cell_put(0xDF);
    latch(8);
    cell_put(0xE1);
    func_8015240C();
    page(0xE3);
    sep();
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x29A5);
        cell_step();
        step2();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    sep_a();
    txt_set(0x29CA);
    cell_poke0(cell_state(0x29CB));
    cell_poke0(cell_state(0x29CC));
    txt_draw(0x29CD);
    txt_set(0x29CA);
    txt_draw(0x38F0);
    txt_set(0x29CB);
    txt_draw(0x38F1);
    txt_set(0x29CC);
    txt_draw(0x38F2);
    txt_set(0x29A3);
    cell_put(0xDF);
    latch(0x10);
    cell_put(0xE1);
    func_8015240C();
    page(0xE3);
    sep();
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x29CF);
        cell_step();
        step2();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    func_801539C4();
    txt_set(0x2282);
    io_poll(0x61);
    if (io_go() != 0) {
        sep_b();
        cell_pos_back(0x61);
        cell_push_c8();
        txt_draw(0x38D6);
    }
    txt_set(0x38E5);
    row_read(0xC);
    io_poll(3);
    if (io_just() == 0) {
        cell_push_c8();
        func_8016E500();
    }
    latch(3);
    func_80150C38();
l146C:
    txt_set(0x16AC);
    cell_push_c8();
    cell_set50_from40();
    txt_draw(0x3538);
    cell_clear_bank(0x38E6);
    for (;;) {
        latch(2);
        func_80150C38();
        txt_set(0x38D9);
        cell_tick_or(cell_state(0x38DA));
        if (ticker_reblend2(0x202) != 0)
            continue;
        cell_dec_bank(0x3538);
        if (gate(0x202) != 0)
            continue;
        txt_set(0x38D7);
        if (gate(0x202) != 0)
            goto l1540;
        txt_set(0x3581);
        row_read(8);
        if (sel(2) != 0)
            goto l15E8;
        break;
    }
l1540:
    txt_set(0x3581);
    row_read(8);
    if (sel(2) != 0)
        goto l1570;
    latch(4);
    goto l15A0;
l1570:
    txt_set(0x38D7);
    if (gate(0x80) != 0)
        goto l1598;
    latch(2);
    goto l15A0;
l1598:
    latch(3);
l15A0:
    txt_draw(0x34CA);
    latch(0xFF);
    txt_draw(0x34CB);
    txt_draw(0x33C4);
    func_80153264();
    latch(5);
    func_80150C38();
    cell_clear_bank(0x38D7);
    cell_clear_bank(0x3581);
l15E8:
    txt_set(0x2282);
    io_poll(0x63);
    if (io_just() == 0)
        goto l1630;
    txt_set(0x352D);
    if (gate(0x202) != 0)
        goto l1630;
    latch(0xF);
    txt_draw(0x38D6);
l1630:
    func_80157AD0();
    txt_set(0x3601);
    io_poll(0xFF);
    if (io_just() == 0)
        goto l1668;
    func_80150B88();
    func_8015D9A8();
l1668:
    func_8015AC7C();
    row_page(0xA8);
    if (gate(0x202) != 0)
        goto l1718;
    txt_set(0x3601);
    io_poll(0xFF);
    if (io_just() == 0)
        goto l16B8;
    func_8015DCA4();
    func_8015BD34();
l16B8:
    func_80157F30();
    row_page(0xD1);
    if (gate(2) != 0)
        goto l146C;
    func_80158190();
    func_80151C0C();
    txt_set(0x352E);
    io_poll(2);
    if (io_just() == 0)
        goto l146C;
    func_8005F188();
    goto l146C;
l1718:
    func_8016E560();
    latch(0x85);
    txt_draw(0x35F3);
    row_page(0xD7);
    if (gate(2) != 0)
        goto l1758;
    latch(1);
    func_80150C38();
l1758:
    row_page(0xA8);
    txt_draw(0x1803);
    row_read(0x60);
    if (sel(0x202) != 0)
        goto l18A8;
    row_page(0xA8);
    row_read(4);
    if (sel(2) != 0)
        goto l17C8;
    latch(0x15);
    func_80150C38();
    func_80153518();
    func_8016571C();
    goto l19F0;
l17C8:
    txt_set(0x38E5);
    row_read(0xC);
    io_poll(0xC);
    if (io_just() != 0)
        goto l1800;
    latch(0x8B);
    txt_draw(0x35F3);
l1800:
    latch(0xC);
    func_80150C38();
    latch(2);
    func_80150C38();
    latch(0x15);
    func_80150C38();
    func_80153264();
    latch(0x24);
    txt_draw(0x34CA);
    latch(0xFF);
    txt_draw(0x34CB);
    txt_draw(0x33C4);
    cell_clear_bank(0x359A);
    latch(0x40);
    txt_draw(0x34C2);
    txt_set(0x388B);
    if (gate(0x202) != 0)
        goto l19F0;
    latch(5);
    func_80150C38();
    goto l19F0;
l18A8:
    row_read(0x40);
    if (sel(2) != 0)
        goto l1908;
    latch(0x13);
    func_80150C38();
    func_80153518();
    func_8016571C();
    txt_set(0x38F3);
    if (gate(0x202) != 0)
        goto l19F0;
    func_80153608();
    goto l19F0;
l1908:
    func_801533BC();
    row_page(0xA9);
    if (gate(0x202) != 0)
        goto l1950;
    txt_set(0x38E5);
    row_read(0xC);
    io_poll(0xC);
    if (io_just() != 0)
        goto l1968;
l1950:
    latch(8);
    txt_draw(0x38BE);
    page_paint2(0x38BD);
l1968:
    func_80153518();
    latch(2);
    func_80150C38();
    func_801534D8();
    row_page(0xA9);
    if (gate(0x202) != 0)
        goto l19B0;
    latch(0x12);
    func_80150C38();
l19B0:
    func_8016571C();
    row_page(0xA8);
    row_read(0x10);
    if (sel(2) != 0)
        goto l19F0;
    func_80163F68();
    func_80153518();
    func_8016571C();
l19F0:
    sep();
    for (;;) {
        cell_set50_from54();
        if (poll_go(0x202) == 0)
            break;
    }
    open_row(0xAB);
    page_open(0x1800);
    poll_t(0x1C0);
    if (io_go() == 0)
        goto l1A5C;
    key_page(0xAB);
l1A5C:
    wnd_open(7);
    for (;;) {
        txt_cell(0x1804);
        cell_tick_or(cell_state(0xAB));
        cell_put(0xAB);
        cell_set50_from54();
        if (poll_go(0x8080) == 0)
            break;
    }
    cell_step();
    for (;;) {
        cell_set50_from54();
        if (poll_go(0x202) == 0)
            break;
    }
    txt_set(0x38E5);
    row_read(0xC);
    io_poll(0xC);
    if (io_just() != 0)
        goto l1B4C;
    row_page(0xAB);
    if (gate(0x202) != 0)
        goto l1B4C;
    txt_set(0x1800);
    io_poll(0xB7);
    if (io_just() == 0)
        goto l1B34;
    txt_set(0x1801);
    if (gate(0x202) != 0)
        goto l1B4C;
l1B34:
    txt_set(0x35F3);
    txt_draw(0x1E00);
    func_80169128();
l1B4C:
    latch(0xFF);
    cell_put(0xA9);
    latch(0x10);
    cell_put(0xAA);
    for (;;) {
        key_page(0xA9);
        poll_pair(0xAA);
        row_page(0xAA);
        if (gate(2) != 0)
            goto l1BEC;
        row_page(0xA9);
        func_80152908();
        txt_draw(0x6CC2);
        row_page(0xAA);
        txt_draw(0x6CC1);
        latch(2);
        func_80150C38();
    }
l1BEC:
    latch(0);
    cell_pull_c8_lo(0x2106);
    return;
}
