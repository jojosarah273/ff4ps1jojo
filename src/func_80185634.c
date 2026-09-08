#include "common.h"
s32 func_80185634(u8 *rows, s32 i, s32 a2)
{
    /* battle slot search: walk i while rows[i].field2 + i == a2;
       returns the failing index. */
    while (i < 0xE0) {
        if ((s16)(*(s16 *)(rows + i * 4 + 2)) + i == a2) {
            i++;
            continue;
        }
        break;
    }
    return i;
}
