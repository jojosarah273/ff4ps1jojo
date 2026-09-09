/* FF4 source-port — interpreted module for func_801322AC.
 * Ground truth: src/func_801322AC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
u32 func_801322AC(void)
{
    txt_set(0x1A04);
    row_read(0x40);
    if (sel(2) == 0) {
        latch(5);
        func_80132310();
        return 1;
    }
    func_80131294();
    func_8012219C();
    return 2;
}
