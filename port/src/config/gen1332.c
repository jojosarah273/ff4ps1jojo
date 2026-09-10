/* FF4 source-port — interpreted module for fn_1x2ce00.
 * Ground truth: src/fn_1x2ce00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
u32 fn_1x2ce00(void)
{
    txt_set(0x1A04);
    row_read(0x20);
    if (sel(2) == 0) {
        func_8012CEA8();
        return 1;
    }
    fn_1x2cc4c();
    return 2;
}
