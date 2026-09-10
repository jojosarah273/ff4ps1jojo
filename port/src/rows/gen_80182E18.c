/* FF4 source-port — interpreted module for fn_1x82e18.
 * Ground truth: src/fn_1x82e18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x82e18(u32 a0, s16 a1)
{
    s32 m = (s32)a0 * func_80197EE8(a1);
    return (s32)(m << 4) >> 16;
}
