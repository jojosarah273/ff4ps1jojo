#include "common.h"
s32 func_80185714(u8 *rows, s32 i, s32 a2)
{
    /* battle slot search (linked rows, field0/4 variant). */
    u8 *row = rows + i * 4;
    for (;;) {
        s16 v1;
        if (i >= 0xE0)
            return i + 1;
        v1 = *(s16 *)(row);
        if (v1 + i == a2)
            return i + 1;
        if (v1 == *(s16 *)(row + 4)) {
            i++;
            row += 4;
        } else {
            return i + 1;
        }
    }
}
