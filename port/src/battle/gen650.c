/* FF4 source-port — interpreted module for func_80118EF8.
 * Ground truth: src/func_80118EF8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80118EF8(void)
{
    /* battle rows: 0x6/0x1440/0x1441/0x1033/0x1034 texts/windows;
       loops L118F18 (5A90/53D4) and L118F78 (54D4(3C3C(6)) gates). */
    func_80117594();
    cell_put(6);
    draw_pad_cur();
L118f18:
    for (;;) {
        cell_push_c8_d58(0x1440);
        if (io_press(cell_state(6)) != 0)
            goto L118FF0;
        poll_t(0x60);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open_cur();
L118f78:
    for (;;) {
        txt_cell(0x1033);
        if (io_press(cell_state(6)) != 0)
            goto L118FD0;
        func_80117DF8();
        poll_t(0x140);
        if (io_just() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
L118FD0:
    page_paint(0x1033);
    page_paint(0x1034);
    func_8011EA5C();
    return;
L118FF0:
    latch_cur();
    cell_pull_c8(0x1440);
    cell_pull_c8(0x1441);
    func_8011EA5C();
    return;
}
