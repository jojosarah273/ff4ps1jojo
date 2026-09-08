#include "common.h"
extern s16 *D_8019EF0A;
s32 func_801879E4(void)
{
    s16 x = *D_8019EF0A;
    if (x == 0x10)
        return 1;
    if (x == 1)
        return 0;
    return -1;
}
