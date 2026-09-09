/* FF4 source-port — interpreted module for func_800FE110.
 * Ground truth: src/func_800FE110.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FE110(void)
{
    row_page(0x7C);
    row_read(1);
    if (sel(2) == 0)
        goto Lfe2ac;
    row_page(0x7C);
    func_800F7864();
    row_read(0xF);
    func_800F9690();
    func_800F9690();
    func_800F6C68();
    cell_put(6);
    draw_pad(7);
    for (;;) {
        func_800F6C68();
        func_800F885C();
        func_800F5E48();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_read(0xF8);
    sep_a();
    row_open_w(0x47);
    func_800F9690();
    func_800F6C68();
    func_800F885C();
    draw_pad(7);
    for (;;) {
        func_800F6C68();
        func_800F885C();
        func_800F5E48();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_read(0xF8);
    func_800F9690();
    row_page(6);
    func_800F885C();
Lfe2ac:
    row_page(0x7C);
    row_read(0xF);
    func_800F9690();
    sep_a();
    row_open_w(0x38);
    func_800F9690();
    func_800F6C68();
    cell_put(6);
    draw_pad(7);
    for (;;) {
        func_800F6C68();
        func_800F885C();
        sep_b();
        func_800F8058(8);
        func_800F9690();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_page(0x7C);
    row_read(0xF);
    func_800F9690();
    sep_a();
    row_open_w(0xB8);
    func_800F9690();
    func_800F6C68();
    func_800F885C();
    draw_pad(7);
    for (;;) {
        func_800F6C68();
        func_800F885C();
        sep_b();
        func_800F8058(8);
        func_800F9690();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_page(6);
    func_800F885C();
    row_page(0x7C);
    row_read(0xF);
    func_800F9690();
    sep_a();
    row_open_w(0x38);
    func_800F9690();
    func_800F6C68();
    cell_put(6);
    draw_pad(7);
    for (;;) {
        func_800F6C68();
        func_800F885C();
        sep_b();
        func_800F8058(8);
        func_800F9690();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_page(0x7C);
    row_read(0xF);
    func_800F9690();
    sep_a();
    row_open_w(0xB8);
    func_800F9690();
    func_800F6C68();
    func_800F885C();
    draw_pad(7);
    for (;;) {
        func_800F6C68();
        func_800F885C();
        sep_b();
        func_800F8058(8);
        func_800F9690();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_page(6);
    func_800F885C();
    key_page(0x7C);
    return;
}
