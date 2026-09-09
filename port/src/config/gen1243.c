/* FF4 source-port — interpreted module for func_801321E8.
 * Ground truth: src/func_801321E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801321E8(void)
{
    txt_set(0x1A04);
    row_read(0x10);
    if (sel(2) == 0) {
        latch(3);
        func_80132310();
    } else {
        func_80131294();
        func_8012219C();
    }
}
