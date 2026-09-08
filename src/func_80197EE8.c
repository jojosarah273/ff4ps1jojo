#include "common.h"
u32 func_80197EE8(s32 a0)
{
    if (a0 < 0)
        return (u32)(-func_80197F24((u32)-a0 & 0xFFF));
    return (u32)func_80197F24((u32)a0 & 0xFFF);
}
