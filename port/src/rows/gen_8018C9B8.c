/* FF4 source-port — interpreted module for fn_1x8c9b8.
 * Ground truth: src/fn_1x8c9b8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern s16 *D_8019B12C;
extern u32 D_8019B13C;
void fn_1x8c9b8(u32 a0)
{
    if (!((u32)0x7EFE8 < (a0 - 0x1010)))
        return 0;
    *D_8019B12C = (s16)event_cache_quantizes_a1_down_to_t(-1);
    return ((u32)(u16)*D_8019B12C << D_8019B13C);
}
