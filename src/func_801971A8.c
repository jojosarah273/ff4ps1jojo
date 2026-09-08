#include "common.h"

void func_801971A8(u32 a0, u32 a1, u32 a2, u32 a3)
{
    return ((((((a0 & 0x3) << 7) | ((a1 & 0x3) << 5)) | ((s32)((a3 & 0x100)) >> 4)) | ((s32)((a2 & 0x3FF)) >> 6)) | ((a3 & 0x200) << 2));
}
