#include "common.h"
void func_8010D34C(void)
{
    /* battle rows: 3C3C/3B9C + 9330 gates; 8010D54C + 95A0 tail. */
    func_800F3C3C();
    func_800F3B9C();
    func_800F9330();
    if (func_800F53D4() == 0)
        goto L10D438;
    if (func_800F53D4() == 0)
        goto L10D438;
    func_8010D54C();
L10D43C:
    func_800F95A0();
    return;
L10D438:
    goto L10D43C;
}
