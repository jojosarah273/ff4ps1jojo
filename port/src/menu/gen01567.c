/* FF4 source-port — interpreted module for func_800F756C.
 * Ground truth: src/func_800F756C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED60;
void func_800F756C(u32 a0)
{
    return (((volatile u8 *)(D_8019ED60))[0x0] = ((u8)(u8)((volatile u8 *)(cell_state((u16)a0)))[0x0]));
}
