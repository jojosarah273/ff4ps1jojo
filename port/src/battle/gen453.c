/* FF4 source-port — interpreted module for shop_buy_row_x711_gate_x3d_x18_x19.
 * Ground truth: src/shop_buy_row_x711_gate_x3d_x18_x19.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_buy_row_x711_gate_x3d_x18_x19(void)
{
    /* shop buy row: 0x711 gate, 0x3D/0x18/0x19/0x77 windows, 0xFE7/
       0x8FC texts, 80100B30/80100978 rows; loop L100C10 on
       54D4(3B04(0x711)). */
    txt_set(0x711);
    if (gate(0x202) == 0)
        return;
    shop_rows_x1702_x3d_x3e_windows_x1();
    draw_pad_cur();
L100c10:
    for (;;) {
        page(0x3D);
        sep_a();
        cell_poke0(cell_state(0xFE7));
        txt_draw(0x8FC);
        row_sync();
        fn_1x00978();
        row_done();
        io_poll_cur();
        if (io_just() != 0)
            goto L100CE4;
        page(0x3D);
        cell_push_c8();
        cell_put(0x18);
        cell_push_c8();
        cell_put(0x19);
        page(0x18);
        cell_push_c8();
        io_poll(0x78);
        if (io_just() == 0)
            goto L100CE4;
        latch(0x77);
        cell_pull_c8_off();
    L100CE4:
        page(0x3D);
        tail(0x3D);
        step2();
        if (io_press(cell_state(0x711)) == 0)
            continue;
        break;
    }
    return;
}
