/* FF4 source-port — interpreted module for options_xa9_xab_windows_x1800_x180.
 * Ground truth: src/options_xa9_xab_windows_x1800_x180.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_xa9_xab_windows_x1800_x180(void)
{
    /* options: 0xA9/0xAB windows, 0x1800/0x1801 texts; loop L153430
       on 67FC(0xAB)/54D4(3B04) gates. */
    open_row(0xA9);
    sep();
L153430:
    for (;;) {
        cell_push_c8_b4o(0xAB);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L1534C8;
        if (io_press(cell_state(0x1800)) == 0)
            goto L1534B0;
        step2();
        cell_push_c8_b4o(0xAB);
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
