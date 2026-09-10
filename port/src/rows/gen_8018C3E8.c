/* FF4 source-port — interpreted module for fn_1x8c3e8.
 * Ground truth: src/fn_1x8c3e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019B0B0;
extern u32 *D_8019B0AC;
void fn_1x8c3e8(u32 a0)
{
    u32 r = 0;
    if (a0 != 0 && region_walk_shifted_like_b928_with(*D_8019B0B0) == 0)
        r = 1;
    *D_8019B0AC = r;
    return r;
}
