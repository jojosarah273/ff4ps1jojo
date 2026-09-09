/* FF4 source-port — interpreted module for func_80134AF8.
 * Ground truth: src/func_80134AF8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80134AF8(void)
{
    /* weapon sub-menu: 0x1B39 text, 0x45/0x48/0x49/0xE5 windows,
       801224D0 row; loop L134BFC (5DD4(0x48)/5C64(2)), gate
       43A0(0x45)/41E8(0x202). */
    latch_cur();
    stat_sync();
    txt_set(0x1B39);
    io_poll(0xB0);
    if (io_go() != 0)
        goto L134C44;
    row_prep(0x20);
    row_prep_close();
    cell_push_c8();
    row_read(0x1F);
    row_sel_cell_cur();
    func_801224D0();
    row_prep(0x20);
    cell_push9_bank();
    cell_put_hi9(0x45);
    row_prep_close();
    draw_pad(1);
    cell_push_c8_sel(0xE5);
    row_read(0xF);
    cell_set50_from40();
    cell_put(0x48);
    open_row(0x49);
    row_prep(0x20);
    row_sync2(1);
L134bfc:
    for (;;) {
        func_800F5DD4(0x48);
        if (poll_go(2) != 0)
            goto L134C24;
        row_arm_s_cur();
    }
L134C24:
    func_800F43A0(0x45);
    if (func_800F41E8(0x202) != 0)
        goto L134C54;
    row_prep_close();
L134C44:
    sep_a();
    return;
L134C54:
    row_prep_close();
    sep_b();
    return;
}
