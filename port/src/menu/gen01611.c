/* FF4 source-port — interpreted module for func_800F3CC4.
 * Ground truth: src/func_800F3CC4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED4C;
extern u32 *D_8019ED50;
s32 func_800F3CC4(u32 a0, s32 a1)
{
    /* menu cell: base 0x7FFC8000, upgrades to ROM 0x800D0000 when
       the cursor offset overflows 0x7FFF; merges 2 bytes into D50,
       catalog callback + offset. */
    u32 base = 0x7FFC8000;
    if (0x7FFF < (u32)(D_8019ED4C[0] + a0))
        base = 0x800D0000;
    D_8019ED50[0] = *(volatile u8 *)base;
    D_8019ED50[0] |= (u32)(*(volatile u8 *)(base + 1)) << 8;
    return cell_state(D_8019ED50[0]) + a1;
}
