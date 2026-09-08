#include "common.h"
void func_80162BD0(void)
{
    /* options row: 8005FFEC prep, 0xCD/0x2005/0x357F windows/texts,
       80152CDC row; 6434 gate closes with 0x33A2-0x33A5 codes. */
    func_8005FFEC();
    func_800F6630(0xCD);
    if (func_800F6434() != 0)
        goto L162C10;
    func_800F4248(0x7F);
    func_800F5410();
    func_800F4008(5);
L162C10:
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F6B68(0x2005);
    func_800F4248(0xFD);
    func_800F8768(0x2005);
    func_800F6630(0xCD);
    func_800F5140();
    func_800F6564(0x357F);
    func_800F8768(0x29EA);
    func_800F6630(0xCD);
    if (func_800F6434() != 0)
        return;
    func_800F654C(0xDE);
    func_800F8188(0x33C2);
    func_800F654C(0xF8);
    func_800F8188(0x33C3);
    func_800F654C(4);
    func_800F8188(0x33C4);
    func_800F654C(0xFF);
    func_800F8188(0x33C5);
    return;
}
