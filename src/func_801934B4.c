#include "common.h"
extern u32 D_8019CF44;
extern u32 D_8019CF48[];
u32 func_801934B4(u32 a0, u32 a1)
{
    /* callback-slot flag: set/clear bit (a0+0x10) and keep the slot. */
    u32 *slot = &D_8019CF48[a0];
    u32 old = *slot;
    if (a1 == old)
        return old;
    if (a1 != 0) {
        *slot = a1;
        D_8019CF44 = (D_8019CF44 & 0xFFFFFF) | (1u << (a0 + 0x10)) | 0x800000;
        return old;
    }
    *slot = 0;
    D_8019CF44 = ((D_8019CF44 & 0xFFFFFF) | 0x800000) & ~(1u << (a0 + 0x10));
    return old;
}
