/* FF4 source-port — interpreted module for func_80121D8C.
 * Ground truth: src/func_80121D8C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED54[8];
void func_80121D8C(void)
{
    return (((volatile u8 *)(D_8019ED54[0]))[0x0] = latch_cur());
}
