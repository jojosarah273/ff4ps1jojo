/* FF4 source-port — interpreted module for func_800F8B68.
 * Ground truth: src/func_800F8B68.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED60;
void func_800F8B68(void)
{
    return (((volatile u8 *)(func_800F3CC4()))[0x0] = ((u8)(u8)*((volatile u8 *)((0x1F800000) | 0x1F8003C8))));
}
