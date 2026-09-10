/* FF4 source-port — interpreted module for waiter_latch_up_to_four_pending_u1.
 * Ground truth: src/waiter_latch_up_to_four_pending_u1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019B0CC;
extern u16 *D_8019B114;
extern u16 D_801F6788[8];
extern u16 D_801F6790[8];
extern u16 D_801F6794[8];
extern u16 D_801F6798[8];
void waiter_latch_up_to_four_pending_u1(u32 a0)
{
    /* waiter: latch up to four pending u16 pairs from the F67xx
       queue into B114 and clear their busy bits (gated on a0). */
    u32 a1 = a0;
    u32 a2 = 0;
    u32 a3 = a0;
    if (a1 == 0 || (a1 & 2)) {
        if (D_8019B0CC & 2) {
            D_8019B0CC &= ~2;
            D_8019B114[0xC8] = D_801F6790[0];
            D_8019B114[0xC9] = D_801F6790[1];
            a2 |= 2;
        }
    }
    if (a3 == 0 || (a1 & 4)) {
        if (D_8019B0CC & 4) {
            D_8019B0CC &= ~4;
            D_8019B114[0xCA] = D_801F6794[0];
            D_8019B114[0xCB] = D_801F6794[1];
            a2 |= 4;
        }
    }
    if (a3 == 0 || (a1 & 8)) {
        if (D_8019B0CC & 8) {
            D_8019B0CC &= ~8;
            D_8019B114[0xCC] = D_801F6798[0];
            D_8019B114[0xCD] = D_801F6798[1];
            a2 |= 8;
        }
    }
    if (a3 == 0 || (a1 & 1)) {
        if (D_8019B0CC & 1) {
            D_8019B0CC &= ~1;
            D_8019B114[0xC4] = D_801F6788[0];
            D_8019B114[0xC5] = D_801F6788[1];
            a2 |= 1;
        }
    }
    return a2;
}
