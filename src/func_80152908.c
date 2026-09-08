#include "common.h"
void func_80152908(void)
{
    /* options row: v0 gate picks 5140/4F4C vs 516C/5050. */
    if (func_800F53D4() != 0)
        goto L15295C;
    func_800F5140();
    func_800F4F4C();
    return;
L15295C:
    func_800F516C();
    func_800F5050();
    return;
}
