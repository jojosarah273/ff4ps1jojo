/* FF4 source-port — interpreted module for func_800F6FEC.
 * Ground truth: src/func_800F6FEC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3CC4(void);
void func_800F6FEC(void)
{
    u8 *p = (u8 *)func_800F3CC4;
    ((volatile u8 *)0x1F8003C0u)[0] = p[0];
    ((volatile u8 *)0x1F8003C0u)[0] = p[0];
    ((volatile u8 *)0x1F8003C0u)[1] = p[1];
}
