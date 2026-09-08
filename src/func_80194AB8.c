#include "common.h"
extern u8 D_800F39CC;
extern u8 *D_8019DB56;
extern u32 *D_8019DB50;
void func_80194AB8(u32 a0, u32 a1)
{
    if (*D_8019DB56 >= 2)
        ((void (*)(u8 *, u8 *, u8 *))D_8019DB50[0])((u8 *)D_800F39CC, (u8 *)a0, (u8 *)a1);
}
