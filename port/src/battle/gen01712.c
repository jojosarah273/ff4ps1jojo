/* FF4 source-port — interpreted module for func_80119BDC.
 * Ground truth: src/func_80119BDC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40[8];
void func_80119BDC(void)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)cell_put_cur()));
}
