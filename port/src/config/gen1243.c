/* FF4 source-port — interpreted module for fn_1x321e8.
 * Ground truth: src/fn_1x321e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x321e8(void)
{
    txt_set(0x1A04);
    row_read(0x10);
    if (sel(2) == 0) {
        latch(3);
        fn_1x32310();
    } else {
        fn_1x31294();
        fn_1x2219c();
    }
}
