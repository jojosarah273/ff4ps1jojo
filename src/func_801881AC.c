#include "common.h"
extern u32 D_801F6678[];
extern u32 D_8019EF5C;
extern s32 D_8019EF5C_slot; /* placeholder, unused */
s32 func_801881AC(void)
{
    /* box claim: promote the pending box state and arm up to two
       cursor entries into the EF5C slot table. */
    u8 *box = (u8 *)D_801F6678;
    u32 *base = (u32 *)D_8019EF5C;
    u8 idx;
    if (*(u32 *)box != 1)
        return -1;
    *(u32 *)box = 3;
    idx = box[0x18];
    ((u8 *)base + idx * 0x10)[8] = 2;
    *((u32 *)((u8 *)base + idx * 0x10) + 3) = 0x800;
    if (*(u16 *)&box[0x14] != 0) {
        idx = box[0x19];
        ((u8 *)base + idx * 0x10)[8] = 2;
        *((u32 *)((u8 *)base + idx * 0x10) + 3) = 0x800;
    }
    return 0;
}
