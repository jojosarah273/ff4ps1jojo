#include "common.h"
void func_80180BB4(void)
{
    /* battle anim: 801824D8 spin; 80194640 row. */
    do {
        func_801824D8();
    } while (func_800F53D4() != 0);
    func_80194640();
    return;
}
