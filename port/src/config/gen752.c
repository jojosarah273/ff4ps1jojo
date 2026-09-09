/* FF4 source-port — interpreted module for func_801533FC.
 * Ground truth: src/func_801533FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801533FC(void)
{
    /* options: 0xA9/0xAB windows, 0x1800/0x1801 texts; loop L153430
       on 67FC(0xAB)/54D4(3B04) gates. */
    open_row(0xA9);
    sep();
L153430:
    for (;;) {
        func_800F67FC(0xAB);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L1534C8;
        if (io_press(cell_state(0x1800)) == 0)
            goto L1534B0;
        step2();
        func_800F67FC(0xAB);
        if (io_press(cell_state(0x1801)) == 0)
            goto L1534B8;
        key_page(0xA9);
        goto L1534C8;
    L1534B0:
        step2();
    L1534B8:
        step2();
    }
    return;
L1534C8:
    return;
}
