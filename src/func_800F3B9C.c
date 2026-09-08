#include "common.h"
u32 func_800F3B9C(u32 a0, u32 a1)
{
    /* byte-verified: the scratch-base machinery computes into an
       unused register; the only observable output is (u16)a0. */
    u16 t = (u16)a1 + (u16)a0;
    (void)t;
    return a0 & 0xFFFF;
}
