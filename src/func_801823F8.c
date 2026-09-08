#include "common.h"
void func_801823F8(void)
{
    /* battle anim: 801808D8 spin loops (L182450/L18249C) with
       80194394 rows. */
    do {
        func_801808D8();
    } while (func_800F53D4() != 0);
    func_80194394();
    do {
        func_801808D8();
    } while (func_800F53D4() != 0);
    return;
}
