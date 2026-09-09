/* FF4 source-port — interpreted module for func_800FA9B4.
 * Ground truth: src/func_800FA9B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40;
extern u32 D_8019ED54;
void func_800FA9B4(u32 a0)
{
    return (((volatile u8 *)(D_8019ED40))[0x0] = ((u8)cell_put_cur()));
}
