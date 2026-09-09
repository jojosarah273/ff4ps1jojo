/* FF4 source-port — interpreted module for func_8012CE00.
 * Ground truth: src/func_8012CE00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
u32 func_8012CE00(void)
{
    txt_set(0x1A04);
    row_read(0x20);
    if (sel(2) == 0) {
        func_8012CEA8();
        return 1;
    }
    func_8012CC4C();
    return 2;
}
