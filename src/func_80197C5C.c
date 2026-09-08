#include "common.h"
extern u32 *D_8019DCB8;
void func_80197C5C(void)
{
    s32 n;
    *((u16 *)D_8019DCB8 + 5) = 0;
    n = 10;
    do {
        n--;
    } while (n != -1);
}
