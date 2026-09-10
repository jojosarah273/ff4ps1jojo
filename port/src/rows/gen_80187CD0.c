/* FF4 source-port — interpreted module for fn_1x87cd0.
 * Ground truth: src/fn_1x87cd0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019EDAA;
extern u8 D_801CF568[];
void fn_1x87cd0(u16 a0)
{
    u8 *dst;
    u8 *src;
    *D_8019EDAA = a0;
    if (a0 != 0) {
        dst = (u8 *)0x800D2200u;
        src = (u8 *)D_801CF568;
    } else {
        dst = (u8 *)D_801CF568;
        src = (u8 *)0x800D2200u;
    }
    s32 n = 0x7FF;
    do {
        *dst++ = *src++;
    } while (--n >= 0);
}
