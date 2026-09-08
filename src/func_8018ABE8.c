#include "common.h"
extern u32 *D_8019B124;
u32 func_8018ABE8(u32 a0)
{
    u32 *p = D_8019B124;
    *p &= 0xFFF8FFFF;
    return a0 ? (*p | 0x30000) : (*p | 0x50000);
}
