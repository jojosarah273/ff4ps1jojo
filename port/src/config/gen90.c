/* FF4 source-port — interpreted module for func_8013463C.
 * Ground truth: src/func_8013463C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013463C(void)
{
    /* config/weapon-switch screen: 1B37-1B3A texts; 801224D0/801345B4
       renders; 4C44/4300/6C61/5354/5F54 option texts; exit 5480. */
    txt_draw(0x1B39);
    if (io_just() != 0)
        goto L134930;
    txt_set(0x1B37);
    battle_put43();
    txt_draw(0x1B3A);
    io_poll(0x30);
    if (io_just() != 0)
        goto L134910;
    io_poll(0x31);
    if (io_just() != 0)
        goto L1348F0;
    io_poll(0x32);
    if (io_just() != 0)
        goto L134900;
    txt_set(0x1B39);
    txt_set(0x1B37);
    if (gate(2) != 0)
        goto L134714;
    latch(0x33);
    goto L13471C;
L134714:
    latch(0x35);
L13471C:
    cell_put(0x43);
    cell_fmt2(0x43);
    cell_push_c8_sel(0xE5);
    txt_draw(0x1B38);
    if (gate(0x202) != 0)
        goto L13475C;
    sep_b();
    return;
L13475C:
    wnd_open(0x4C44);
    func_801345B4();
    if (io_go() == 0)
        goto L134794;
L13477C:
    key_page(0xEB);
L134784:
    sep_a();
    return;
L134794:
    txt_set(0x1B39);
    wnd_open(0x4C44);
    func_801345B4();
    if (io_go() != 0)
        goto L13477C;
    txt_set(0x1B39);
    wnd_open(0x4300);
    func_801345B4();
    if (io_go() == 0)
        goto L13484C;
    cell_push_c8_lo(0xE5);
    row_read(0xC0);
    io_poll(0xC0);
    if (io_just() != 0)
        goto L13481C;
L13480C:
    txt_set(0x1B38);
    goto L1348D8;
L13481C:
    txt_set(0x1B38);
    wnd_open(0x4300);
    func_801345B4();
    if (io_go() == 0)
        goto L13480C;
    return;
L13484C:
    wnd_open(0x6C61);
    func_801345B4();
    if (io_go() == 0)
        goto L13487C;
    txt_set(0x1B38);
    goto L1348D8;
L13487C:
    wnd_open(0x5354);
    func_801345B4();
    if (io_go() == 0)
        goto L1348AC;
    txt_set(0x1B38);
    goto L1348D8;
L1348AC:
    wnd_open(0x5F54);
    func_801345B4();
    if (io_go() == 0)
        goto L134784;
    txt_set(0x1B38);
L1348D8:
    wnd_open_cur();
    func_801345B4();
    return;
L1348F0:
    wnd_open_cur();
    goto L134918;
L134900:
    wnd_open_cur();
    goto L134918;
L134910:
    wnd_open_cur();
L134918:
    txt_set(0x1B39);
    func_801345B4();
    return;
L134930:
    sep_b();
    return;
}
