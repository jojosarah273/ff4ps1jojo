/* FF4 source-port — interpreted module for func_8017583C.
 * Ground truth: src/func_8017583C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8017583C(void)
{
    /* shop/dungeon item menu: 0x93 window, 0x1281-0x1286 texts; 5574
       key-code ladders route through 885C color fills; exits at L75B50. */
    row_page(0x93);
    row_read(0x3F);
    cell_put(0x3E);
    open_row(0x3D);
    page(0x3D);
    txt_set(0x1282);
    row_read(0x10);
    if (sel(2) != 0)
        goto L758F4;
    row_page(0x93);
    io_poll(0x39);
    if (io_just() != 0)
        goto L758C4;
    io_poll(0x3A);
    if (io_just() == 0)
        goto L758F4;
L758C4:
    latch_cur();
    func_800F885C();
    func_800F61E8();
    func_800F885C();
    return;
L758F4:
    txt_set(0x1281);
    row_read(0x40);
    if (sel(2) != 0)
        goto L75A00;
    row_page(0x93);
    io_poll(0x76);
    if (io_just() != 0)
        goto L759B4;
    io_poll(0x77);
    if (io_just() == 0)
        goto L7599C;
    latch(0x12);
    func_800F885C();
    latch(0x13);
    func_800F885C();
    func_800F885C();
    func_800F885C();
    latch(0x14);
    goto L759F0;
L7599C:
    io_poll(0x78);
    if (io_just() == 0)
        goto L75A00;
L759B4:
    latch(0x13);
    func_800F885C();
    func_800F885C();
    func_800F885C();
    func_800F885C();
L759F0:
    func_800F885C();
    return;
L75A00:
    txt_set(0x1286);
    row_read(1);
    if (sel(0x202) != 0)
        return;
    row_page(0x93);
    io_poll(0xD2);
    if (io_just() == 0)
        goto L75A5C;
    latch(0x13);
    func_800F885C();
    return;
L75A5C:
    io_poll(0xD3);
    if (io_just() != 0)
        goto L75AF0;
    io_poll(0xD4);
    if (io_just() == 0)
        goto L75AD8;
    latch(0x13);
    func_800F885C();
    func_800F885C();
    func_800F885C();
    func_800F885C();
    func_800F885C();
    return;
L75AD8:
    io_poll(0xD5);
    if (io_just() == 0)
        goto L75B24;
L75AF0:
    latch(0x13);
    func_800F885C();
    func_800F885C();
    func_800F885C();
    return;
L75B24:
    io_poll(0xD6);
    if (io_just() == 0)
        return;
    latch(0x13);
    func_800F885C();
    return;
}
