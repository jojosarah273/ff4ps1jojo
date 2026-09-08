#include "common.h"
extern u16 D_8019B5B4[];
extern u16 D_8019B5CA[];
extern u16 D_8019B6CA[];
u32 func_8018EBB8(u32 a0, u32 a1, u32 a2)
{
    /* packed sprite-field: normalize the value, two table divisions,
       recombine (t1 index + geometry). */
    u32 t3 = 0;
    u32 a3, v1, t2, t1, t0;
    if ((u16)a2 >= 0x4000)
        a2 = 0x3FFF;
    a3 = 0;
    v1 = a2 & 0xFFFF;
    do {
        if (((v1 >> a3) & 1) != 0)
            t3 = a3;
        a3++;
    } while (a3 < 0xE);
    a2 = (a2 & 0xFFFF) << (0xF - t3);
    a3 = 0xB;
    t2 = 0;
    while (a3 >= 0) {
        if ((a2 & 0xFFFF) >= D_8019B5CA[a3]) {
            t2 = a3;
            break;
        }
        a3--;
    }
    v1 = ((a2 & 0xFFFF) << 15) / D_8019B5B4[t2];
    a3 = 0x7F;
    t1 = 0;
    while (a3 >= 0) {
        if (v1 >= D_8019B6CA[a3]) {
            t1 = a3;
            break;
        }
        a3--;
    }
    t1 = a1 + (t1 + 1);
    t0 = a0 + t2 + ((t3 - 12) * 12) + (t1 >> 7);
    return ((t0 & 0xFFFF) << 8) | (t1 & 0x7E);
}
