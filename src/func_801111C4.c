#include "common.h"
extern u8 D_8019ECFE;
extern u32 D_8019ED40[8];
extern u8 D_8019EE6A[8];
void func_801111C4(u32 a0)
{
    D_8019EE6A[0] = (u8)((volatile u8 *)(D_8019ED40[0]))[0x0];
    D_8019ECFE = ((u8)(0 + 0x1));
    return (D_8019EE6A[0] = (D_8019EE6A[0] | a0));
}
