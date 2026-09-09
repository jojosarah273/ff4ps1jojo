/* FF4 source-port — interpreted module for func_8013B1E8.
 * Ground truth: src/func_8013B1E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40[8];
void func_8013B1E8(void)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)txt_draw_cur()));
}
