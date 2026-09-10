/* FF4 source-port — interpreted module for fn_1x82ddc.
 * Ground truth: src/fn_1x82ddc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x82ddc(u32 a0, s16 a1)
{
    s32 m = (s32)a0 * trig_table_abs_folds(a1);
    return (s32)(m << 4) >> 16;
}
