/* FF4 source-port — interpreted module for func_80101788.
 * Ground truth: src/func_80101788.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80101788(void)
{
    row_page(2);
    row_read(0x80);
    if (sel(2) != 0)
        return;
    row_page(0x54);
    if (gate(2) == 0)
        return;
    key_page(0x54);
    latch(0x3D);
    func_8011B6B4();
    io_poll(0);
    if (io_just() != 0) {
        latch(0x30);
        func_8011B6B4();
        io_poll(0);
        if (io_just() != 0)
            goto menu2;
        goto menu1;
    }
    /* settings menu (1704, items 4/5) */
menu1:
    txt_set(0x1704);
    io_poll(4);
    if (io_just() != 0)
        goto setting_b;
    io_poll(5);
    if (io_just() == 0)
        goto menu2;
setting_b:
    txt_set(0x1700);
    if (gate(0x202) != 0)
        goto setting_a;
    txt_set(0x1706);
    io_poll(0x69);
    if (io_go() == 0)
        goto menu2;
    io_poll(0x6C);
    if (io_go() != 0)
        goto menu2;
    txt_set(0x1707);
    io_poll(0xD3);
    if (io_go() == 0)
        goto menu2;
    goto gate14;
setting_a:
    txt_set(0x1700);
    io_poll(1);
    if (io_just() == 0)
        goto menu2;
    txt_set(0x1706);
    io_poll(0x70);
    if (io_go() == 0)
        goto menu2;
    io_poll(0x73);
    if (io_go() != 0)
        goto menu2;
    txt_set(0x1707);
    io_poll(0xF);
    if (io_go() == 0)
        goto menu2;
    io_poll(0x12);
gate14:
    io_poll(0);
    if (io_go() != 0)
        goto menu2;
    latch(1);
    cell_put(0xCE);
    return;
    /* main options master (1704, gate 2) */
menu2:
    txt_set(0x1704);
    if (gate(2) != 0)
        goto flow_screen;
    io_poll(1);
    if (io_just() != 0)
        goto submenu1;
    io_poll(2);
    if (io_just() != 0)
        goto submenu2;
    io_poll(3);
    if (io_just() == 0)
        goto item3;
    row_page(0xA1);
    row_read(1);
    if (sel(0x202) == 0)
        return;
    open_row(0x79);
    for (;;) {                              /* save prompt loop */
        func_80102ED8();
        poll_pair(0xB6);
        key_page(0x79);
        row_page(0x79);
        io_poll(4);
        if (io_just() != 0)
            break;
    }
    func_800F8F74(0x1704);
    open_row(0xAC);
    open_row(0x7B);
    latch(2);
    txt_draw(0x1705);
    txt_set(0x1701);
    txt_draw(0x171B);
    page_open(0x1706);
    label(0x1719);
    goto flow_screen;
item3:
    io_poll(4);
    if (io_just() != 0) {
        func_80104354();
        return;
    }
    io_poll(5);
    if (io_just() != 0)
        goto submenu1;
    /* item 6 -> equipment screen */
    io_poll(6);
    if (io_just() == 0)
        return;
    func_80102494();
    return;
submenu1:                                   /* "cast/settings" 0x21 menu */
    latch(0x30);
    cell_put(0x79);
    open_row(0x7A);
    for (;;) {
        func_80102E78();
        row_page(0x79);
        io_poll(0x21);
        if (io_go() != 0) {
            poll_pair(0xB8);
            row_page(0xB8);
            sep_a();
            row_open_w(0x10);
            cell_put(0xAD);
            row_page(0xB8);
            func_8017559C();
            poll_pair(0x79);
            continue;
        }
        row_page(0xA2);
        row_read(0x10);
        if (sel(0x202) == 0)
            break;
        page_open(0x1719);
        func_800F56AC(cell_state(0x1706));
        if (io_just() != 0)
            break;
        txt_set(0x171F);
        io_press(cell_state(0x1723));
        if (io_just() == 0)
            goto item1727;
        page_open(0x171D);
        func_800F56AC(cell_state(0x1706));
        if (io_just() != 0)
            break;
    item1727:
        txt_set(0x1727);
        io_press(cell_state(0x1723));
        if (io_just() == 0)
            goto success21;
        page_open(0x1725);
        func_800F56AC(cell_state(0x1706));
        if (io_just() != 0)
            break;
    success21:
        row_page(1);
        func_800F7864();
        txt_draw(0x6FD);
        poll_pair(0x79);
        poll_pair(0x79);
        if (poll_go(0x202) != 0)
            continue;
        func_800F8F74(0x1704);
        open_row(0xAC);
        open_row(0x7B);
        latch(2);
        txt_draw(0x1705);
        page_open(0x1706);
        label(0x1721);
        txt_set(0x1701);
        txt_draw(0x1723);
        goto memscreen;
    }
    func_801034E0();
    return;
submenu2:                                   /* save screen */
    open_row(0x79);
    for (;;) {
        func_80102E78();
        poll_pair(0xB5);
        key_page(0x79);
        row_page(0x79);
        io_poll(0x10);
        if (io_just() != 0)
            break;
    }
    row_page(0xA1);
    row_read(8);
    if (sel(0x202) == 0)
        goto flow_screen;
    func_80102414();
    func_800F8F74(0x1704);
    open_row(0xAC);
    open_row(0x7B);
    latch(2);
    txt_draw(0x1705);
    page_open(0x1706);
    label(0x1713);
    txt_set(0x1715);
    io_poll(2);
    if (io_just() == 0)
        goto flow_screen;
    func_800F8F74(0x1715);
    func_800F8F74(0x1712);
    goto flow_screen;
    /* the item gated flow (1701 gate chain) */
flow_screen:
    func_800F8F74(0x1A02);
    row_page(0xAB);
    if (gate(2) == 0)
        return;
    txt_set(0x1701);
    io_poll(0);
    if (io_just() == 0)
        return;
    txt_set(0x170F);
    if (gate(2) != 0)
        return;
    page_open(0x1706);
    func_800F56AC(cell_state(0x1710));
    if (io_just() == 0)
        return;
    func_80102F38();
    return;
    /* 1701/1712 gate */
    txt_set(0x1701);
    io_poll(0);
    if (io_just() == 0)
        return;
    txt_set(0x1712);
    if (gate(2) != 0)
        return;
    page_open(0x1706);
    func_800F56AC(cell_state(0x1713));
    if (io_just() == 0)
        return;
    func_80102F70();
    return;
    /* 1701/171B/1718/1719 gate */
    txt_set(0x1701);
    io_press(cell_state(0x171B));
    if (io_just() == 0)
        return;
    txt_set(0x1718);
    if (gate(2) != 0)
        return;
    page_open(0x1706);
    func_800F56AC(cell_state(0x1719));
    if (io_just() == 0)
        return;
    func_80103030();
    return;
    /* 171F/171C/171D gate */
    txt_set(0x1701);
    io_press(cell_state(0x171F));
    if (io_just() == 0)
        return;
    txt_set(0x171C);
    if (gate(2) != 0)
        return;
    page_open(0x1706);
    func_800F56AC(cell_state(0x171D));
    if (io_just() == 0)
        return;
    func_801031F0();
    return;
    /* 1723/1720/1721 gate */
    txt_set(0x1701);
    io_press(cell_state(0x1723));
    if (io_just() == 0)
        return;
    txt_set(0x1720);
    if (gate(2) != 0)
        return;
    page_open(0x1706);
    func_800F56AC(cell_state(0x1721));
    if (io_just() == 0)
        return;
    func_801033E0();
    return;
    /* 1727/1724/1725 gate + sound */
    txt_set(0x1701);
    io_press(cell_state(0x1727));
    if (io_just() == 0)
        return;
    txt_set(0x1724);
    if (gate(2) != 0)
        return;
    page_open(0x1706);
    func_800F56AC(cell_state(0x1725));
    if (io_just() == 0)
        return;
    latch(0xE);
    txt_draw(0x1E01);
    latch(1);
    txt_draw(0x1E00);
    func_80169128();
    latch(0x54);
    func_8011AEAC();
    return;
    /* memory screens */
memscreen:
    func_800FD718();
    page_paint2(0x1A02);
    row_page(0xA1);
    row_read(1);
    if (sel(0x202) == 0)
        return;
    func_800FD6B8();
    latch(2);
    txt_draw(0x170F);
    latch(0x70);
    txt_draw(0x1710);
    txt_draw(0x1711);
    latch(1);
    txt_draw(0x1705);
    latch(2);
    cell_put(0x2C);
    func_8010D9D4();
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto mem2;
    latch(3);
    txt_draw(0x1705);
    row_page(0x2C);
    func_800F61E8();
    cell_put(0x2C);
mem2:
    latch(2);
    cell_put(0x2E);
    func_8010D9D4();
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto mem_loop;
    row_page(0x2E);
    func_800F61E8();
    cell_put(0x2E);
    func_800F8F74(0x1704);
mem_loop:
    for (;;) {
        func_800FE778();
        func_8010D9D4();
        io_poll(0x10);
        if (io_go() != 0)
            break;
        row_page(0x2E);
        func_800F61E8();
        cell_put(0x2E);
    }
    txt_set(0x1710);
    sep_a();
    cell_poke0(cell_state(0x2C));
    txt_draw(0x1710);
    if (io_just() != 0)
        return;
    io_poll(0xF0);
    if (io_just() != 0)
        return;
    txt_set(0x1711);
    sep_a();
    cell_poke0(cell_state(0x2E));
    txt_draw(0x1711);
    if (io_just() != 0)
        return;
    io_poll(0xF0);
    if (io_just() != 0)
        return;
    latch(1);
    txt_draw(0x1704);
    func_80171608();
    func_800F8F74(0x1704);
    func_80171194();
    func_800FE778();
    func_800FE870();
    func_800F8F74(0x1704);
    func_800F8F74(0x170F);
    func_800FF024();
    func_800FE778();
    open_row(0xAC);
    open_row(0x7B);
    page_paint2(0x1A02);
    func_800FD718();
    return;
}
