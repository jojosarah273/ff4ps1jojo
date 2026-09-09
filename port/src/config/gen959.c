/* FF4 source-port — interpreted module for func_8015FA70.
 * Ground truth: src/func_8015FA70.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015FA70(void)
{
    /* options: 8015254C row, 0x3949/0xA4/0xA5 texts; gate
       53C0 + 5958(0x270F). */
    func_8015254C();
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
