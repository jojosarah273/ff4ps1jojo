/* FF4 source-port — interpreted module for func_800FDD28.
 * Ground truth: src/func_800FDD28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 D_801CFD68[];
extern u8 D_800E7C00[];
void func_800FDD28(void)
{
    u16 i;
    latch(0x80);
    txt_draw(0x2115);
    for (i = 0; i < 0x100; i = (u16)(i + 1)) {
        D_800E7C00[i] = (u8)(D_801CFD68[(i + 0x3800) * 2] >> 8);
    }
}
