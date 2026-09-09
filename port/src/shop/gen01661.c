/* FF4 source-port — interpreted module for func_8016B68C.
 * Ground truth: src/func_8016B68C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016B68C(void)
{
    /* battle prep: 0x118 x 0xF0 bytes at buffer(0x300). */
    u8 *buf = (u8 *)cell_state(0x300);
    s32 i;
    for (i = 0; i < 0x118; i++)
        buf[i] = 0xF0;
}
