/* FF4 source-port — interpreted module for func_8015F8B8.
 * Ground truth: src/func_8015F8B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40[8];
void func_8015F8B8(void)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)cell_put_cur()));
}
