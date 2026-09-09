/* FF4 source-port — interpreted module for func_80100BE0.
 * Ground truth: src/func_80100BE0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80100BE0(void)
{
    /* shop buy row: 0x711 gate, 0x3D/0x18/0x19/0x77 windows, 0xFE7/
       0x8FC texts, 80100B30/80100978 rows; loop L100C10 on
       54D4(3B04(0x711)). */
    txt_set(0x711);
    if (gate(0x202) == 0)
        return;
    func_80100B30();
    draw_pad_cur();
L100c10:
    for (;;) {
        page(0x3D);
        sep_a();
        cell_poke0(cell_state(0xFE7));
        txt_draw(0x8FC);
        row_sync();
        func_80100978();
        row_done();
        io_poll_cur();
        if (io_just() != 0)
            goto L100CE4;
        page(0x3D);
        func_800F6C68();
        cell_put(0x18);
        func_800F6C68();
        cell_put(0x19);
        page(0x18);
        func_800F6C68();
        io_poll(0x78);
        if (io_just() == 0)
            goto L100CE4;
        latch(0x77);
        func_800F885C();
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
