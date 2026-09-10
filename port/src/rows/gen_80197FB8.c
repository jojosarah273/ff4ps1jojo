/* FF4 source-port — interpreted module for trig_table_abs_folds.
 * Ground truth: src/trig_table_abs_folds.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern s16 D_8019C4C4[];
extern s16 D_8019D4C4[];
extern s16 D_8019DCC4[];
s16 trig_table_abs_folds(s32 a0)
{
    /* trig table (abs + folds). */
    u32 v = (u32)((a0 < 0) ? -(s32)a0 : a0);
    v &= 0xFFF;
    if (v < 0x401)
        return D_8019DCC4[0x400 - v];
    if (v < 0x801)
        return -D_8019D4C4[v];
    if (v < 0xC01)
        return -D_8019DCC4[0xC00 - v];
    return D_8019C4C4[v];
}
