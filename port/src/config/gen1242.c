/* FF4 source-port — interpreted module for fn_1x32248.
 * Ground truth: src/fn_1x32248.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
u32 fn_1x32248(void)
{
    txt_set(0x1A04);
    row_read(0x20);
    if (sel(2) != 0) {
        fn_1x31294();
        fn_1x2219c();
        return 2;
    }
    latch(4);
    fn_1x32310();
    return 1;
}
