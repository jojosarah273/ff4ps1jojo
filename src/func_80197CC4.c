#include "common.h"
extern u32 *D_8019DCBC;
u32 func_80197CC4(void)
{
    u32 *p = D_8019DCBC;
    return (p[1] & 1) && (p[0] & 1);
}
