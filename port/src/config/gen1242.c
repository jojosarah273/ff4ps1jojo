/* FF4 source-port — interpreted module for func_80132248.
 * Ground truth: src/func_80132248.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
u32 func_80132248(void)
{
    txt_set(0x1A04);
    row_read(0x20);
    if (sel(2) != 0) {
        func_80131294();
        func_8012219C();
        return 2;
    }
    latch(4);
    func_80132310();
    return 1;
}
