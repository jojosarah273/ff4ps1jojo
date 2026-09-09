/* FF4 source-port — interpreted module for func_8012FBB0.
 * Ground truth: src/func_8012FBB0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012FBB0(void)
{
    func_800F9200();
    row_open();
    io_poll(0xE);
    if (io_go() == 0)
        goto Lfc70;
    io_poll(0x1C);
    if (io_go() != 0)
        goto Lfc70;
    txt_draw(0x1A87);
    row_sync();
    func_80130BC8();
    row_done();
    txt_draw(0x1BC4);
    func_800F8F74(0x1BC5);
    row_page(0xE8);
    func_80124EAC();
    row_prep(0x20);
    func_800F6BE0(0xB);
    func_800F5520(cell_state(0x1BC4));
    row_prep_close();
    if (io_go() != 0)
        goto Lfcb0;
Lfc70:
    txt_set(0x1BC8);
    if (gate(0x202) != 0)
        goto Lfcb0;
Lfc88:
    row_page(0x34);
    goto Lfd70;
Lfcb0:
    txt_set(0x1A87);
    io_poll(0x12);
    if (io_just() != 0)
        goto Lfd68;
    txt_set(0x1A86);
    row_read(0x28);
    if (sel(2) != 0)
        goto Lfd68;
    row_read(0x20);
    if (sel(2) != 0)
        goto Lfd28;
    txt_set(0x1A87);
    io_poll(0x19);
    if (io_just() != 0)
        goto Lfd68;
Lfd28:
    txt_set(0x1A86);
    row_read(8);
    if (sel(2) != 0)
        goto Lfc88;
    txt_set(0x1A87);
    io_poll(0x1A);
    if (io_just() == 0)
        goto Lfc88;
Lfd68:
    row_page(0x34);
Lfd70:
    cell_put(0xDB);
    row_close();
    row_close2();
    func_800F9200();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    row_close2();
    row_open2();
    row_open();
    row_sync();
    stat_sync();
    latch_cur();
    stat_sync();
    row_prep(0x20);
    row_arm_s_cur();
    func_800F8274(0x45);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x45));
    func_800F4064(0x8900);
    row_prep_close();
    latch(0xF);
    func_800F9200();
    row_pad();
    func_800F6D70();
    step2();
    func_800F885C();
    latch(0xFF);
    func_800F885C();
    cell_step();
    row_page(0xDB);
    func_800F885C();
    func_800F885C();
    cell_step();
    latch(5);
    cell_put(0x45);
    for (;;) {
        func_800F6D70();
        func_801245B4();
        func_800F885C();
        stat_sync();
        func_800F885C();
        cell_step();
        row_page(0xDB);
        func_800F885C();
        func_800F885C();
        cell_step();
        step2();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_done();
    row_close();
    row_pad();
    return;
}
