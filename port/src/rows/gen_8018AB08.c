/* FF4 source-port — interpreted module for event_cache_quantizes_a1_down_to_t.
 * Ground truth: src/event_cache_quantizes_a1_down_to_t.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 D_8019B114[];
extern u32 D_8019B138;
extern u32 D_8019B13C;
extern u32 D_8019B140;
extern u32 D_8019B144;
void event_cache_quantizes_a1_down_to_t(u32 a0, u32 a1)
{
    /* event cache: quantizes a1 down to the table slot a0. */
    u32 a2 = a0;
    if (D_8019B138 != 0) {
        u32 dv = D_8019B140;
        if (dv != 0) {
            u32 hi = a1 % dv;
            if (hi != 0)
                a1 = (a1 + dv) & ~D_8019B144;
        }
    }
    {
        u32 a3 = a1 >> D_8019B13C;
        if (a2 == (u32)-2)
            return a1;
        if (a2 == (u32)-1)
            return (u16)a3;
        D_8019B114[a2] = (u16)a3;
        return a1;
    }
}
