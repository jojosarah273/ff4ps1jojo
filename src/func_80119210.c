#include "common.h"
void func_80119210(void)
{
    /* battle rows: 0x18-0x1B windows, 0x16A0-0x16A2 texts,
       80174F0C row; 53C0 gate closes 0x16A0-0x16A2 fills. */
    func_80117594();
    func_800F824C(0x18);
    func_800F8FB8(0x19);
    func_800F654C(0x64);
    func_800F824C(0x1A);
    func_800F8FB8(0x1B);
    func_80174F0C();
    func_800F6564(0x16A0);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0x30));
    func_800F8188(0x16A0);
    func_800F6564(0x16A1);
    func_800F3C3C(0x31);
    func_800F7F48();
    func_800F8188(0x16A1);
    func_800F6564(0x16A2);
    func_800F3C3C(0x32);
    func_800F7F48();
    func_800F8188(0x16A2);
    if (func_800F53C0() != 0)
        goto L1192E0;
    func_800F8F74(0x16A0);
    func_800F8F74(0x16A1);
    func_800F8F74(0x16A2);
L1192E0:
    func_800FE778();
    return;
}
