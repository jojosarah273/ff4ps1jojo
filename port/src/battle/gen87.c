/* FF4 source-port — interpreted module for func_8014F7A8.
 * Ground truth: src/func_8014F7A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014F7A8(void)
{
    /* battle item-count screen: 0x18 window, 0x18/0x19 rows, 0x6CC0
       gate picks the 300/301 vs 769/770/771 count cells; loop L14F850
       (6434(2)) polls. */
    row_page(0x18);
    row_sel_cell_cur();
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L14F828;
    txt_cell_cur();
    cell_put(0x12);
    txt_cell_cur();
    sep_a();
    row_open_w(6);
    cell_put(0x13);
    goto L14F848;
L14F828:
    txt_cell_cur();
    cell_put(0x12);
    txt_cell_cur();
    cell_put(0x13);
L14F848:
    wnd_open_cur();
L14f850:
    for (;;) {
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto L14F92C;
        func_800F6C68();
        sep_a();
        cell_poke0(cell_state(0x12));
        sep_b();
        func_800F8058(0xF);
        func_800F8960(0x300);
        func_800F6C68();
        sep_a();
        cell_poke0(cell_state(0x13));
        func_800F8960(0x301);
        func_800F6C68();
        func_800F8960(0x302);
        func_800F6C68();
        func_800F8960(0x303);
        goto L14F9A8;
    L14F92C:
        func_800F6C68();
        sep_a();
        cell_poke0(cell_state(0x12));
        func_800F8960(0x300);
        func_800F6C68();
        sep_a();
        cell_poke0(cell_state(0x13));
        func_800F8960(0x301);
        func_800F6C68();
        func_800F8960(0x302);
        func_800F6C68();
        func_800F8960(0x303);
    L14F9A8:
        txt_set_cur();
        if (gate(2) != 0)
            goto L14F9E8;
        func_800F6D70(0x303);
        func_800F8960(0x303);
    L14F9E8:
        page_paint2(8);
        poll_t_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
