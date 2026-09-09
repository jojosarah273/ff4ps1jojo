/* FF4 source-port — interpreted module for func_80146954.
 * Ground truth: src/func_80146954.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_80146954(void)
{
    ((volatile u8 *)(cell_state(32768)))[0x6FC2] = ((u8)0);
    return (((volatile u8 *)(cell_state(32768)))[0x6FC3] = ((u8)((u8)((volatile u8 *)(cell_state(32768)))[0x6FC3] | 0x1)));
}
