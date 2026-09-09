/* FF4 source-port — interpreted module for func_800F6F28.
 * Ground truth: src/func_800F6F28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800F6F28(u32 a0)
{
    *(volatile u8 *)0x1F8003C8u = *(u8 *)func_800F3C94(a0);
}
