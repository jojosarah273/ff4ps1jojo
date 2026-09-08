#include "common.h"
void func_80121C4C(void)
{
    /* rows: 0x43/0x29 windows with 3F94(3C3C) reads; linear. */
    func_800F3D48();
    func_800F654C();
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x43));
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    return;
}
