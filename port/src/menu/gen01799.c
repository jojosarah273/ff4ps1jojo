/* FF4 source-port — interpreted module for func_800F7894.
 * Ground truth: src/func_800F7894.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED44;
extern u32 D_8019ED50;
void row_sel2(void)
{
    ((volatile u8*)(D_8019ED50))[0x0] = (u16)((volatile u8*)(D_8019ED44))[0x0];
    return (((volatile u8*)(D_8019ED44))[0x0] = ((u32)((u16)((volatile u8*)(D_8019ED44))[0x0]) >> 1));
}
