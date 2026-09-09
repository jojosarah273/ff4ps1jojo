/* FF4 source-port — interpreted module for func_8016AC7C.
 * Ground truth: src/func_8016AC7C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016AC7C(void)
{
    /* shop status: 0x4A window, 0x2203/0x22C1/0x22A3/0x22B3 texts,
       gates 4120(0x202); loops L16ACFC (5A90(0x20)) and L16AD74
       (5958(0x12)). */
    row_page(0x4A);
    func_800F7864();
    row_read(1);
    func_800F6C68();
    sep();
L16acfc:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x2203);
        cell_step();
        step2();
        poll_t(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    row_page(0x4A);
    row_read(7);
    if (sel(0x202) != 0)
        return;
    row_prep(0x20);
    func_800F658C(0x22C1);
    func_800F922C();
    wnd_open(0x1C);
L16ad74:
    for (;;) {
        func_800F6BE0(0x22A3);
        func_800F87DC(0x22A5);
        func_800F5E48();
        func_800F5E48();
        poll_t(0x12);
        if (io_just() == 0)
            continue;
        break;
    }
    func_800F9410();
    func_800F81B0(0x22B7);
    sep();
    row_prep_close();
    return;
}
