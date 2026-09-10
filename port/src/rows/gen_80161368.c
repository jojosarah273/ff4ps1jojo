/* FF4 source-port — interpreted module for fn_1x61368.
 * Ground truth: src/fn_1x61368.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40[8];
extern u32 D_8019ED60[8];
void fn_1x61368(void)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)(u8)((volatile u8 *)(D_8019ED60[0]))[0x0]));
}
