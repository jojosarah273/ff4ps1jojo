/* FF4 source-port — interpreted module for fn_1x298a0.
 * Ground truth: src/fn_1x298a0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x298a0(void)
{
    txt_set(0x1B06);
    if (gate(2) != 0) {
        page(0x41);
        shop_rows_x45_x4b_x48_windows_b4_d();
    } else {
        poll_spin();
        if (poll_go(2) != 0)
            wnd_open(0x50);
    }
}
