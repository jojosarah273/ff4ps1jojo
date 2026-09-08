#include "common.h"
void func_800FE9F8(void)
{
    /* shop rows: 0x7F/0x79/0x6F windows, 0x4209 texts; 6434/0xB1
       gates close on 0x2100/0x4200 titles. */
    func_800F6630(0x7F);
    if (func_800F6434(0x202) != 0)
        goto L8FEAF0;
    func_800F6630(0x79);
    func_800F5140();
    func_800F9690();
    func_800F654C(0x6F);
    func_800F5410();
    func_800F3F38(func_800F3B9C());
    func_800F96E0();
    func_800F8E50(0x4209);
    func_800F6630(0xB1);
    if (func_800F6434(0x202) != 0)
        goto L8FEAD8;
    func_800F654C(0xF);
    goto L8FEAE0;
L8FEAD8:
    func_800F6630(0x80);
L8FEAE0:
    func_800F8188(0x2100);
    return;
L8FEAF0:
    func_800F654C(0x81);
    func_800F8188(0x4200);
    return;
}
