/* FF4 source-port — interpreted module for fn_1x4e9c4.
 * Ground truth: src/fn_1x4e9c4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED44[8];
extern u32 D_8019ED58[8];
void fn_1x4e9c4(void)
{
    return (((volatile u8 *)(D_8019ED58[0]))[0x0] = (u16)((volatile u8 *)(D_8019ED44[0]))[0x0]);
}
