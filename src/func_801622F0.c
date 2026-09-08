#include "common.h"
void func_801622F0(void)
{
    /* options timer (alt): 0x1D/0x34C8/0x34C7/0x357A/0x2006/0x3534/
       0x3303 texts/windows, 80152CDC + 80150C38; loop L162360 on
       5574(0x1D). */
    func_800F654C(0x1D);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    func_800F6564(0x357A);
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F6B68(0x2006);
    func_800F4248(0xFD);
    func_800F8768(0x2006);
    func_800F6630(0xCD);
    func_80152CDC();
    func_800F7210(0x3534);
L162360:
    for (;;) {
        func_800F6B68(0x3303);
        func_800F5574(0x1D);
        if (func_800F53D4() != 0)
            goto L1623A8;
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
    }
L1623A8:
    func_800F654C(0x13);
    func_800F8768(0x3303);
    func_800F654C(0x18);
    func_800F8768(0x3302);
    func_800F6630(0xCD);
    func_800F824C();
    func_800F654C(9);
    func_80150C38();
    return;
}
