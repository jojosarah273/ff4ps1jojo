#include "common.h"
extern u8 D_8019DB54;
extern u8 D_8019DB56;
extern u8 D_8019DB57;
extern u32 D_8019DB50;
extern u8 D_800F388C;
u8 func_8019418C(u8 a0)
{
    /* state change: latch a0 into the state byte; when non-zero,
       dispatch the DB50 message handler. */
    u8 old = D_8019DB56;
    D_8019DB56 = a0;
    if (a0 != 0)
        ((void (*)(u32, u8, u8, u8))D_8019DB50)((u32)&D_800F388C, D_8019DB56,
                                                D_8019DB54, D_8019DB57);
    return old;
}
