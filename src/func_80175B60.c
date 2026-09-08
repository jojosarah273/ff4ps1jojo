#include "common.h"
void func_80175B60(void)
{
    /* shop rows: 0xD4 window, 0x2115/0x6FE/0x700 texts + 0x6FE/0x6FF
       window rows; gate 6434(0x202). */
    func_800F6630(0xD4);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8FB8(0xD4);
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F7210(0x6FE);
    func_800F7210(0x700);
    func_800F7210(0x6FE);
    func_800F6564();
    func_800F5410();
    func_800F4008(0x20);
    func_800F8188(0x6FE);
    func_800F6564(0x6FF);
    func_800F4008();
    func_800F8188(0x6FF);
    func_800F7210(0x6FE);
    func_800F7210(0x704);
    func_800F7210(0x702);
    return;
}
