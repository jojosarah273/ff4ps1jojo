/* FF4 source-port — interpreted module for func_80111C2C.
 * Ground truth: src/func_80111C2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80111C2C(void)
{
    /* battle rows: 0xC/0xE windows, 0x2C/0x2E cells, 0x300-0x303 scroll
       gates; loop L11C54 (3F38(3C3C) + 4008(0x10) row reads), closes
       via 8011416C + 0x51C/0x51D texts. */
    draw_pad(0x1C0);
    wnd_open_cur();
    open_row(0xC);
    open_row(0xE);
L11c54:
    for (;;) {
        row_page(0xC);
        sep_a();
        cell_poke0(cell_state(0x2C));
        func_800F8960(0x300);
        row_page(0xE);
        sep_a();
        cell_poke0(cell_state(0x2E));
        func_800F8960(0x301);
        func_800F6C68();
        func_800F8960(0x302);
        func_800F6C68();
        func_800F8960(0x303);
        row_page(0xC);
        sep_a();
        row_open_w(0x10);
        row_read(0x3F);
        cell_put(0xC);
        if (sel(0x202) != 0)
            goto L11D24;
        row_page(0xE);
        sep_a();
        row_open_w(0x10);
        cell_put(0xE);
    L11D24:
        poll_t(0x20);
        if (io_just() != 0)
            goto L11D98;
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        draw_pad(0x10);
    }
L11D98:
    func_8011416C();
    latch(0xAA);
    txt_draw(0x51C);
    txt_draw(0x51D);
    return;
}
