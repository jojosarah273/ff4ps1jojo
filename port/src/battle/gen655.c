/* FF4 source-port — interpreted module for func_8010E878.
 * Ground truth: src/func_8010E878.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010E878(void)
{
    /* battle rows: 0x300-0x303/0x200 cells, 0xFF window, 8010D9D4
       rows; loop L10E898 on 5A90(0x200). */
    func_80103F40();
    draw_pad(0x10);
    wnd_open_cur();
L10e898:
    for (;;) {
        func_8010D9D4();
        func_800F7864();
        sep_a();
        row_open_w(0x40);
        func_800F8960(0x300);
        func_8010D9D4();
        func_800F7864();
        sep_a();
        row_open_w(0x40);
        func_800F8960(0x301);
        latch(0xFF);
        func_800F8960(0x302);
        func_8010D9D4();
        row_read(7);
        row_sel_cell_cur();
        func_800F8960(0x303);
        func_800F8960(0x200);
        poll_t(0x200);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
