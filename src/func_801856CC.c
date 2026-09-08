#include "common.h"
s32 func_801856CC(u8 *rows, s32 i, s32 a2)
{
    /* battle slot search (field0 variant). */
    while (i < 0xE0) {
        if ((s16)(*(s16 *)(rows + i * 4)) + i == a2) {
            i++;
            continue;
        }
        break;
    }
    return i;
}
