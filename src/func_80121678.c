#include "common.h"
void func_80121678(void)
{
    /* battle row: 6A78(0xA2)/6434 gate routes the 6AF4(0xA1) stat
       cells (0x1D/0x89/0x8B windows); 53C0 check. */
    func_800F6A78(0xA2);
    if (func_800F6434() != 0)
        goto L121720;
    func_800F9644(0x20);
    func_800F6AF4(0xA1);
    func_800F4264(0x7FFF);
    func_800F8274(0x1D);
    func_800F6AF4(0x89);
    func_800F5480();
    func_800F7FCC(func_800F3C3C(0x1D));
    func_800F86F0(0x89);
    func_800F9660(0x20);
    if (func_800F53C0() != 0)
        goto L1217DC;
    func_800F5B2C(func_800F3C3C(0x8B));
    return;
L121720:
    func_800F9644(0x20);
    func_800F6AF4(0x89);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0xA1));
L121798:
    func_800F86F0(0x89);
    func_800F9660(0x20);
    if (func_800F53C0() == 0)
        return;
    func_800F6048(func_800F3C3C(0x8B));
    return;
    return;
L1217DC:
    return;
}
