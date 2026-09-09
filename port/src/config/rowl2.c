/* FF4 source-port — interpreted module for func_80169170.
 * Ground truth: src/func_80169170.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80169170(void)
{
    /* rows: 0x1E05 text, 0x29/0x14A windows, 801691F0/8011F300
       rows; loop L1691B0 on 5C64(0x202). */
    txt_set(0x1E05);
    cell_cursor_dec();
    latch(0x29);
    func_801691F0();
    wnd_open(0x14A);
L1691b0:
    for (;;) {
        func_8011F300();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_close2();
    func_801691F0();
    return;
}
