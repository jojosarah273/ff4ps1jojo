/* FF4 source-port — interpreted module for func_80107C98.
 * Ground truth: src/func_80107C98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80107C98(void)
{
    /* config sub-screen: 0xEA confirm wait, 0x8F4/0x8F6 save-check texts,
       80108458 status table + 80177DAC scroll; loops at L107CB8/L107D54/
       L107DB4/L107E6C. */
    row_page(0xCC);
    latch(1);
    cell_put(0xEA);
L107cb8:
    for (;;) {
        wnd_fx_7d();
        row_page(0xEA);
        io_poll(2);
        if (io_just() != 0)
            break;
    }
    wnd_open_cur();
    label(0x8F4);
    open_row(0xDE);
    latch(0xEC);
    cell_put(0xBB);
    open_row(0xBA);
    func_80108458();
    latch(1);
    cell_put(0xDF);
    cell_put(0xEB);
    /* v1/v0 gate -> L107D4C (converge) */
L107D4C:
    wnd_fx_7d();
L107D54:
    for (;;) {
        row_page(0x7F);
        io_poll(2);
        if (io_just() != 0)
            break;
    }
    key_page(0xDF);
    row_page(0xDF);
    io_poll(8);
    if (io_just() == 0)
        goto L107D4C;
L107D9C:
    page_open(0x8F4);
    if (cell_flags_pack(2) != 0)
        goto L107DF4;
L107db4:
    for (;;) {
        func_80177DAC();
        if (cell_flags_cmp(cell_state(0x8F6)) == 0)
            continue;
        break;
    }
    wnd_open_cur();
    label(0x8F4);
    goto L107E3C;
L107DF4:
    row_page(0xDE);
    io_poll(2);
    if (io_just() != 0)
        return;
    row_page(0xCB);
    if (gate(0x202) != 0)
        goto L107E3C;
    func_800FD9FC();
    func_800FDA4C();
L107E3C:
    row_page(0xDE);
    if (gate(0x202) != 0)
        return;
    func_80108458();
    latch(0x10);
    cell_put(7);
L107E6C:
    for (;;) {
        wnd_fx_7d();
        row_page(0xCB);
        if (gate(0x202) != 0)
            goto L107EBC;
        key_page(0xBB);
        key_page(0xBB);
        key_page(0xBB);
        key_page(0xBB);
        poll_pair(7);
        goto L107F0C;
    L107EBC:
        row_page(0x7A);
        row_read(7);
        if (sel(0x202) != 0)
            goto L107F0C;
        key_page(0xBB);
        row_page(0x7A);
        row_read(0x1F);
        if (sel(0x202) != 0)
            goto L107F0C;
        poll_pair(7);
    L107F0C:
        row_page(7);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    goto L107D9C;
}
