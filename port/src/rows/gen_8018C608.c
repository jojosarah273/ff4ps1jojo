/* FF4 source-port — interpreted module for event_mask_queue_arm_park_a_u16_pa.
 * Ground truth: src/event_mask_queue_arm_park_a_u16_pa.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019B114;
extern u32 D_8019B0A0;
extern u32 D_8019B0C8;
extern u32 D_8019B0CC;
extern u32 D_8019B100;
extern u16 D_801F6788[8];
void event_mask_queue_arm_park_a_u16_pa(u32 a0, u32 a1, u32 a2, u32 a3)
{
    /* event-mask queue: arm/park a u16 pair (packed 24-bit) against
       the DMA record or the direct B114 cells. */
    u16 p = (u16)(a1 & 0xFFFFFF);
    u16 q = (u16)((a1 & 0xFFFFFF) >> 16);
    if (a0 == 1) {
        if (D_8019B100 & 1) {
            u16 *r = D_801F6788;
            r[0] = p;
            r[1] = q;
            D_8019B0CC |= 1;
            D_8019B0C8 |= p;
            if (r[2] & p)
                r[2] = (u16)(r[2] & ~p);
            if (r[3] & q)
                r[3] = (u16)(r[3] & ~q);
        } else {
            D_8019B0A0 |= p;
            D_8019B114[0xC4] = p;
            D_8019B114[0xC5] = q;
        }
    } else if (a0 == 0) {
        if (D_8019B100 & 1) {
            u16 *r = D_801F6788;
            r[2] = p;
            r[3] = q;
            D_8019B0CC |= 1;
            D_8019B0C8 &= ~p;
            if (r[0] & p)
                r[0] = (u16)(r[0] & ~p);
            if (r[1] & q)
                r[1] = (u16)(r[1] & ~q);
        } else {
            D_8019B114[0xC6] = p;
            D_8019B114[0xC7] = q;
            D_8019B0A0 &= ~p;
        }
    }
}
