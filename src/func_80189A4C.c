#include "common.h"
extern u32 D_801F66E8[];
s32 func_80189A4C(u32 a0, s16 a1)
{
    /* event registry: registers a0 at slot a1 (stride 20); returns
       the slot or -1 when taken already. */
    u32 *slot = &D_801F66E8[a1 * 5];
    if (slot[0] != 0)
        return -1;
    slot[1] = a0;
    return a1;
}
