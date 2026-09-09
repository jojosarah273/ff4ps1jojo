/* FF4 source-port — interpreted module for func_800FDD8C.
 * Ground truth: src/func_800FDD8C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FDD8C(void)
{
    /* shop title rows: 0x7C window gate, 0x6/0x7 windows with 885C
       fill loops (L8FDE30/L8FDEB8 on 5C64(0x202)); 4248(0xF8)/
       9690/4008(0x47) reads. */
    row_page(0x7C);
    row_read(1);
    if (sel(2) == 0)
        return;
    row_page(0x7C);
    func_800F7864();
    row_read(0xF);
    func_800F9690();
    func_800F9690();
    func_800F6C68();
    cell_put(6);
    draw_pad(7);
L8fde30:
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
L8fdeb8:
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
    return;
}
