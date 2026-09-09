/* FF4 source-port — interpreted module for func_8012CE54.
 * Ground truth: src/func_8012CE54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
u32 func_8012CE54(void)
{
    txt_set(0x1A04);
    row_read(0x40);
    if (sel(2) == 0) {
        func_8012CEA8();
        return 1;
    }
    func_8012CC4C();
    return 2;
}
