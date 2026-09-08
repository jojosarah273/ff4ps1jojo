#include "common.h"
void func_80189F9C(void)
{
    /* event: 801975E8 prep + 801774B4 loop L189FAC. */
    do {
        func_801975E8();
        func_801774B4();
    } while (func_800F53D4() != 0);
    return;
}
