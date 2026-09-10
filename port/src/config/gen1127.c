/* FF4 source-port — interpreted module for fn_1x282d4.
 * Ground truth: src/fn_1x282d4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x282d4(void)
{
    txt_set(0x1B47);
    if (gate(0x202) != 0) {
        sep_b();
        return;
    }
    txt_set(0x1A3C);
    if (gate(0x202) != 0) {
        poll_spin();
        shop_rows_x51_x46_x45_windows_d8_r();
    }
}
