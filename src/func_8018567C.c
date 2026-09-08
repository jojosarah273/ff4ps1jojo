#include "common.h"
s32 func_8018567C(u8 *rows, s32 i, s32 a2)
{
    /* battle slot search (linked rows, field2/6): walk while the row
       B field links forward; returns i + 1. */
    u8 *row = rows + i * 4;
    for (;;) {
        s16 v1;
        if (i >= 0xE0)
            return i + 1;
        v1 = *(s16 *)(row + 2);
        if (v1 + i == a2)
            return i + 1;
        if (v1 == *(s16 *)(row + 6)) {
            i++;
            row += 4;
        } else {
            return i + 1;
        }
    }
}
