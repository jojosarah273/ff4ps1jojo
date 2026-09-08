#include "common.h"
void func_801004D4(void)
{
    /* battle stats: 0x16A0-0x16A2 texts, 0x30-0x32 windows rows via
       3F38(3C3C); 5574 cursor ladder. */
    func_800F6564(0x16A0);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x30));
    func_800F8188(0x16A0);
    func_800F6564(0x16A1);
    func_800F3F38(func_800F3C3C(0x31));
    func_800F8188(0x16A1);
    func_800F6564(0x16A2);
    func_800F3F38(func_800F3C3C(0x32));
    func_800F8188(0x16A2);
    func_800F5574(0x98);
    if (func_800F53C0() == 0)
        return;
    func_800F6564(0x16A1);
    func_800F5574(0x96);
    if (func_800F53C0() == 0)
        return;
    func_800F6564(0x16A0);
    func_800F5574(0x7F);
    if (func_800F53C0() == 0)
        return;
    func_800F654C(0x7F);
    func_800F8188(0x16A0);
    func_800F654C(0x96);
    func_800F8188(0x16A1);
    func_800F654C(0x98);
    func_800F8188(0x16A2);
    return;
}
