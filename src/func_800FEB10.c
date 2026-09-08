#include "common.h"
void func_800FEB10(void)
{
    /* shop rows: 0x79 window + 0x6F/0x6E stamp rows, 0x4209/0x2126/
       0x2127 texts, 0x677/0xA1 windows; closes on 0x2A5 text. */
    func_800F6630(0x79);
    func_800F5140();
    func_800F9690();
    func_800F654C(0x6F);
    func_800F5480();
    func_800F7F48(func_800F3B9C());
    func_800F96E0();
    func_800F8E50(0x4209);
    func_800F654C(0x80);
    func_800F5480();
    func_800F7F48(func_800F3B9C());
    func_800F8188(0x2126);
    func_800F654C(0x7F);
    func_800F5410();
    func_800F3F38(func_800F3B9C());
    func_800F8188(0x2127);
    func_800F6630(0x79);
    func_800F7864();
    func_800F5410();
    func_800F4008(3);
    func_800F8188(0x677);
    func_800F654C(0xA1);
    func_800F8188(0x4200);
    return;
}
