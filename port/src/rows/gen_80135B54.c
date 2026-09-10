/* FF4 source-port — interpreted module for ability_bank_select_d_8019ee56_d_8.
 * Ground truth: src/ability_bank_select_d_8019ee56_d_8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_8019EE42;
extern u16 D_8019EE56;
extern u8 D_800D1A37;
extern u8 D_800D1A38;
extern u8 D_800D1A39;
extern u16 D_8019A068[];
void ability_bank_select_d_8019ee56_d_8(void)
{
    /* ability bank select: D_8019EE56 <- D_8019A068[bank-char][idx]. */
    u8 v = D_8019EE42;
    u8 idx;
    D_8019EE56 = 0;
    switch (v) {
    case 1: idx = D_800D1A37; break;
    case 2: idx = D_800D1A38; break;
    case 3: idx = D_800D1A39; break;
    default: return;
    }
    D_8019EE56 = D_8019A068[idx];
}
