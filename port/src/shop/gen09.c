/* FF4 source-port — interpreted module for func_8016CA94.
 * Ground truth: src/func_8016CA94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016CA94(void)
{
    row_prep(0x30);
    func_800F922C();
    row_open();
    row_sync();
    row_open2();
    row_open3();
    wnd_open_cur();
    row_open();
    func_800F94B8();
    sep();
    row_prep_close();
    latch(0x7E);
    func_800F9200();
    row_pad();
    row_page(0x40);
    if (gate(2) == 0)
        goto Lfac;
    key_page(0x40);
    txt_set(0x3303);
    func_800F81E8(0x2100);
    row_page(0xA0);
    func_800F81E8(0x211A);
    txt_set(0x7D28);
    func_800F81E8(0x212C);
    row_page(0x64);
    io_poll(1);
    if (io_just() != 0)
        goto Ld48;
    row_page(0x4A);
    row_read(3);
    if (sel(2) == 0)
        goto Le68;
    row_page(0x66);
    row_page(0x67);
    row_page(0x8C);
    func_800F81E8(0x211F);
    row_page(0x8D);
    func_800F81E8(0x211F);
    row_page(0x8E);
    func_800F81E8(0x2120);
    row_page(0x8F);
    func_800F81E8(0x2120);
    txt_set(0x7D1F);
    if (gate(0x202) != 0)
        goto Le68;
    row_page(0x64);
    if (gate(2) != 0)
        goto Lcd8;
    row_prep(0x20);
    row_read2(0x66);
    row_done2();
    func_800F55C0(0x400);
    if (io_just() == 0)
        goto Ld10;
    sep();
    goto Ld10;
Lcd8:
    row_prep(0x20);
    row_read2(0x66);
    row_done2();
    func_800F55C0(0x400);
    if (io_just() == 0)
        goto Ld10;
    row_scan_cur();
Ld10:
    func_800F8274(0x66);
    sep_a();
    func_800F4064(0x80);
    func_800F8274(0x8E);
    sep();
    row_prep_close();
    goto Le68;
Ld48:
    txt_set(0x61);
    func_800F81E8(0x211B);
    txt_set(0x62);
    func_800F81E8(0x211B);
    txt_set(0x61);
    func_800F81E8(0x211E);
    txt_set(0x62);
    func_800F81E8(0x211E);
    row_page(0x5D);
    row_page(0x5E);
    row_page(0x5F);
    row_page(0x60);
    row_page(0x8C);
    func_800F81E8(0x211F);
    row_page(0x8D);
    func_800F81E8(0x211F);
    row_page(0x8E);
    func_800F81E8(0x2120);
    row_page(0x8F);
    func_800F81E8(0x2120);
Le68:
    func_8016BD2C();
    row_page(0x64);
    io_poll(2);
    if (io_just() == 0)
        goto Lea8;
    func_8016D9B0();
    func_8016E0F8();
    goto Lf24;
Lea8:
    func_8016BC6C();
    func_80181498();
    func_8016B68C();
    func_8016AC7C();
    func_8016C858();
    row_page(0x64);
    if (gate(2) != 0)
        goto Lf24;
    page_open(0x2004);
    poll_t(0xFF80);
    if (io_just() == 0)
        goto Lf24;
    latch(1);
    txt_draw(0x5B);
Lf24:
    txt_set(0x5B);
    if (gate(2) != 0)
        goto Lf74;
    row_page(0x4A);
    row_read(3);
    if (sel(0x202) != 0)
        goto Lf74;
    wnd_open(0xA);
    draw_pad(1);
    func_8016BE1C();
Lf74:
    txt_set(0x7D25);
    if (gate(2) != 0)
        goto Lf94;
    func_8016E358();
Lf94:
    open_row(0x40);
    open_row(0x41);
    key_page(0x4A);
Lfac:
    row_prep(0x30);
    func_800F94B8();
    row_pad();
    row_done();
    row_close();
    func_800F9410();
    return;
}
