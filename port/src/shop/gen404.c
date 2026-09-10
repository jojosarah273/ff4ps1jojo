/* FF4 source-port — interpreted module for func_801669BC.
 * Ground truth: src/func_801669BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801669BC(void)
{
    /* battle confirm flow: 0x42/0x38BE/0x38BD texts, 8016694C/80166B80/
       8016762C/80140944 preps, L166A44 loop with 70174/7534 gates and
       80140310/8014D528 commits. */
    latch(0x42);
    txt_draw(0x38BE);
    page_paint2(0x38BD);
    func_8016694C();
    func_80166B80();
    wnd_open(0x40);
    func_8016762C();
    func_8016694C();
    func_80140944();
    wnd_open(0x20);
    func_8016762C();
    func_80166B80();
    wnd_open_cur();
    label_cur();
    label_cur();
    txt_draw_cur();
L166a44:
    for (;;) {
        func_80070174();
        txt_set_cur();
        row_read(7);
        cell_push_c8();
        cell_pull60();
        txt_set_cur();
        row_read(0xF);
        if (sel(0x202) != 0)
            goto L166AD8;
        cell_push60();
        poll_pair_cur();
        cell_pull60();
    L166AD8:
        txt_set_cur();
        io_poll(0x8C);
        if (io_just() != 0)
            goto L166B28;
        io_poll(0x10);
        if (io_just() != 0)
            goto L166B28;
        io_poll(0x20);
        if (io_just() == 0)
            goto L166B30;
    L166B28:
        func_80166B80();
    L166B30:
        page_paint2_cur();
        config_row_8468();
        cell_push60();
        poll_t_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    latch(0x20);
    battle_row_d568();
    return;
}
