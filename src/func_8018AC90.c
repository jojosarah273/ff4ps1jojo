#include "common.h"
void func_8018AC90(void)
{
    s32 acc = 0xD;
    s32 n = 0;
    do {
        acc = 13 * acc;
        n++;
    } while (n < 0x3C);
}
