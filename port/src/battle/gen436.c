/* FF4 source-port — interpreted module for shop_rows_x1702_x3e_x3d_xb2_window.
 * Ground truth: src/shop_rows_x1702_x3e_x3d_xb2_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x1702_x3e_x3d_xb2_window(void)
{
    /* shop rows: 0x1702/0x3E/0x3D/0xB2 windows, 0x1762 row texts,
       8017F9A8/800FED3C/800FAA04 sub-rows; loops L108098 on
       6434(0x202)/5C64(0x202) gates, closing via 8D00(0x1762). */
    txt_set(0x1702);
    open_row(0x3E);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    cell_put(0x3D);
    txt_set(0x1701);
    if (gate(2) != 0)
        goto L10802C;
    key_page(0x3E);
    key_page(0x3E);
L10802C:
    page(0x3D);
    cell_push_c8();
    cell_put(0x3D);
    cell_push_c8();
    cell_put(0x3E);
    page(0x3D);
    row_page(0xB2);
    if (gate(2) != 0)
        goto L1082A8;
L108098:
    for (;;) {
        cell_step();
        /* v0 gates -> L108134 */
        cell_push_c8();
        if (gate(0x202) != 0)
            continue;
        /* v0 gates -> L1081C0 / L1081A8 / L1081D4 */
        if (io_poll(3) != 0)
            continue;
        /* v0 gates -> L10825C */
        if (io_poll(4) != 0)
            continue;
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        cell_step();
        break;
    }
L1082A8:
    label(0x772);
    open_row(0xDD);
    return;
}
