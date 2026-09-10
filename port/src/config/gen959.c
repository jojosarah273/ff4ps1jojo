/* FF4 source-port — interpreted module for options_c_row_x3949_xa4_xa5_texts.
 * Ground truth: src/options_c_row_x3949_xa4_xa5_texts.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_c_row_x3949_xa4_xa5_texts(void)
{
    /* options: 8015254C row, 0x3949/0xA4/0xA5 texts; gate
       53C0 + 5958(0x270F). */
    options_b04_x2000_gates_v0_run_l15();
    page_open(0x3949);
    poll_t(0x270F);
    if (io_go() == 0)
        goto L15FAB0;
    wnd_open(0x270F);
    label(0x3949);
L15FAB0:
    txt_set(0x3949);
    cell_put(0xA4);
    txt_set(0x394A);
    cell_put(0xA5);
    return;
}
