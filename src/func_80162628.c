#include "common.h"
void func_80162628(void)
{
    /* options: 80153218/8015329C rows; gate 5574(0x80) picks the
       0x34CA/0x26D2 variants. */
    func_80153218();
    func_800F5574(0x80);
    if (func_800F53C0() == 0)
        goto L162670;
    func_8015329C();
    func_800F654C(0x10);
    func_800F8188(0x34CA);
    return;
L162670:
    func_800F654C(0xE);
    func_800F8188(0x26D2);
    func_80062B08();
    func_800F654C(0xB);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    return;
}
