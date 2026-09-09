/* FF4 source-port — interpreted module for func_800FE634.
 * Ground truth: src/func_800FE634.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u16 *D_8019ED58;
void func_800FE634(void)
{
    u8 *s1 = (u8 *)cell_state(0x6FB);
    u8 *s0 = (u8 *)cell_peek_v(0x14EF00, 0);
    u8 a = (u8)(*D_8019ED40 + *s0);
    u16 t = (u16)((s0[1] << 8) | s0[0]);
    s1[6] = a;
    u16 r = (u16)(((u32)s1[0xAD] * t) >> 8);
    if (a & 0x80)
        r = (u16)-r;
    *D_8019ED58 = r;
}
