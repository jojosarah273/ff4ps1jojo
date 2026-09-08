#include "common.h"
extern u32 D_801F66E8[];
s32 func_80189A90(s16 a0)
{
    /* event registry (free): clears slot a0 (stride 20) and runs
       8018B4C8 on its payload. */
    u32 *slot = &D_801F66E8[a0 * 5];
    if (slot[0] != 0) {
        slot[0] = 0;
        func_8018B4C8(slot[1]);
    }
    return 0;
}
