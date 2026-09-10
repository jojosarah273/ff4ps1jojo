/* FF4 source-port — interpreted module for fn_1x473a4.
 * Ground truth: src/fn_1x473a4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED44[8];
extern u32 D_8019ED54[8];
void fn_1x473a4(u32 a0)
{
    return (((volatile u8 *)(D_8019ED54[0]))[0x0] = (u16)((volatile u8 *)(D_8019ED44[0]))[0x0]);
}
