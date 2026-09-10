/* FF4 source-port — interpreted module for fn_1x322ac.
 * Ground truth: src/fn_1x322ac.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
u32 fn_1x322ac(void)
{
    txt_set(0x1A04);
    row_read(0x40);
    if (sel(2) == 0) {
        latch(5);
        fn_1x32310();
        return 1;
    }
    fn_1x31294();
    fn_1x2219c();
    return 2;
}
