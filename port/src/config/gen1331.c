/* FF4 source-port — interpreted module for fn_1x2ce54.
 * Ground truth: src/fn_1x2ce54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
u32 fn_1x2ce54(void)
{
    txt_set(0x1A04);
    row_read(0x40);
    if (sel(2) == 0) {
        fn_1x2cea8();
        return 1;
    }
    fn_1x2cc4c();
    return 2;
}
