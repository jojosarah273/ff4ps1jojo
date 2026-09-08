#include "common.h"
void func_800FE7D8(void)
{
    /* shop view dispatcher: 0x1700 gate picks 800FE110/800FDBBC vs
       800FDD8C/800FDF34/80175494; tail always runs 801769B4/
       80174F64/80175004. */
    func_800FE7B0();
    func_800F6564(0x1700);
    if (func_800F6434(0x202) != 0)
        goto L8FE818;
    func_800FE110();
    func_800FDBBC();
    goto L8FE848;
L8FE818:
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L8FE848;
    func_800FDD8C();
    func_800FDF34();
    func_80175494();
L8FE848:
    func_801769B4();
    func_80174F64();
    func_80175004();
    return;
}
