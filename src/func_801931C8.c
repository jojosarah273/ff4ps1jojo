#include "common.h"
extern u32 D_8019CF34[8];
extern u32 D_8019CF38[8];
void func_801931C8(u32 a0, u32 a1)
{
    ((volatile u8 *)(D_8019CF38[0]))[0x0] = (0 + 0x100);
    return (D_8019CF34[0] = 0);
}
