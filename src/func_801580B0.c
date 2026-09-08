#include "common.h"
void func_801580B0(void)
{
    /* options: 0xA9/0xD2/0xAD/0xAF windows, 0x2A04/0x3598 texts,
       80152CDC/8015310C rows; gates 7918(0x202)/4120(2). */
    func_800F6630(0xA9);
    func_800F824C(0xD2);
    func_80152CDC();
    func_800F6630(0xAD);
    func_800F824C(0xD3);
    func_800F5140();
    func_800F5410();
    func_800F3F38(func_800F3C3C(0xAD));
    func_800F824C(0xAF);
    func_800F6630(0xAF);
    func_8015310C();
    func_800F7210(0x3598);
    func_800F6B68(0x2A04);
    func_800F78C4(func_800F3B04());
    if (func_800F7918(0x202) != 0)
        return;
    func_800F6B68(0x2A06);
    func_800F4248(1);
    if (func_800F4120(2) != 0)
        return;
    func_800F62BC(0xD1);
    return;
}
