/* FF4 source-port — interpreted module for func_80169A18.
 * Ground truth: src/func_80169A18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80169A18(void)
{
    /* config map-name screen: 0x64/0x2/0x4/0x6 windows, 0x3D1E/0x7D1B/
       0x7D19/0x7D1E/0x7D1D texts, 80169958/8016D4D8 rows; loops
       L169B10/L169B34/L169C04. */
    row_page(0x64);
    io_poll(1);
    if (io_just() != 0)
        goto L169AC0;
    io_poll(2);
    if (io_just() == 0)
        goto L169A70;
    func_80169958();
    return;
L169A70:
    wnd_open(0x3D1E);
    label(0x7D1B);
    wnd_open_cur();
    label(0x7D19);
    latch(0x13);
    txt_draw(0x7D1E);
    latch(0x80);
    txt_draw(0x7D1D);
    func_8016D4D8();
    return;
L169AC0:
    sep();
    draw_pad(0x3D19);
    row_info(6);
    latch(6);
    cell_put(2);
    latch(1);
    cell_put(4);
L169b10:
    for (;;) {
        sep();
    L169b34:
        for (;;) {
            row_page(4);
            func_800F82EC(6);
            key_page(4);
            step2();
            cell_step();
            poll_t(5);
            if (io_just() != 0)
                break;
        }
        row_prep(0x20);
        row_read2(6);
        sep_a();
        func_800F4064(0x80);
        func_800F8274(6);
        sep();
        row_prep_close();
        poll_pair(2);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    sep();
    func_800F81E8(0x2115);
L169c04:
    for (;;) {
        txt_cell(0x3D19);
        cell_step();
        poll_t(0x4000);
        if (io_just() == 0)
            continue;
        break;
    }
    latch(0x80);
    func_800F81E8(0x2115);
    return;
}
