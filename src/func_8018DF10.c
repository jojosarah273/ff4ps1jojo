#include "common.h"
extern u32 D_8019B584;
s32 func_8018DF10(void)
{
    /* queue phase -> step id. */
    switch (D_8019B584 & 0xF0) {
    case 0x00: return 0;
    case 0x10: return 3;
    case 0x20: return 4;
    case 0x30: return 7;
    case 0x40: return 8;
    }
    return -3;
}
