/* FF4 source-port — interpreted module for fn_1x960bc.
 * Ground truth: src/fn_1x960bc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019DC58[8];
extern u32 D_8019DC5C[8];
void fn_1x960bc(u32 a0)
{
    ((volatile u8*)(D_8019DC5C[0]))[0x0] = (a0 | 0x100000000000);
    return (((volatile u32*)(D_8019DC58[0]))[0x0] & (0xFFFFFF0000 | 0xFFFFFF));
}
