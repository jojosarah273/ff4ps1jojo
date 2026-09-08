#include "common.h"
void func_8016BC6C(void)
{
    /* shop row: 0x4A/0x57 windows, 0x400/0x28/0x57 consts, 8016BBCC
       row; gate 4120(0x202). */
    func_800F6630(0x4A);
    func_800F4248(0xF);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F71DC(0x400);
    func_800F8D6C(0x28);
    func_800F7270(0x57);
    func_800F7500(0x4000);
    func_800F654C(0x7E);
    func_8016BBCC();
    func_800F9644(0x20);
    func_800F6658(0x57);
    func_800F5410();
    func_800F4064(0x400);
    func_800F4264(0x7FFF);
    func_800F8274(0x57);
    func_800F971C();
    func_800F9660(0x20);
    return;
}
