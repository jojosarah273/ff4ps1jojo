#include "common.h"
void func_8019584C(void)
{
    /* event: 80196898 gate; 801968CC spin loop L1958E8. */
    if (func_80196898() == 0)
        goto L195918;
    do {
        func_801968CC();
        if (func_800F53D4() != 0)
            goto L195918;
    } while (func_800F53D4() != 0);
    return;
L195918:
    return;
}
