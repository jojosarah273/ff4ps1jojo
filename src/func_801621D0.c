#include "common.h"
void func_801621D0(void)
{
    /* options timer: 0xCE/0x357A/0x2006/0x3534/0x3303 windows/texts,
       80152CDC + 80150C38 rows; loop L162238 on 5574(0x13). */
    func_800F6630(0xCE);
    func_800F8188(0x357A);
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F6B68(0x2006);
    func_800F8768(0x2006);
    func_800F6630(0xCD);
    func_80152CDC();
    func_800F7210(0x3534);
L162238:
    for (;;) {
        func_800F6B68(0x3303);
        func_800F5574(0x13);
        if (func_800F53D4() != 0)
            goto L162280;
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
    }
L162280:
    func_800F654C(0x1D);
    func_800F8768(0x3303);
    func_800F971C();
    func_800F8768(0x3302);
    func_800F6630(0xCD);
    func_800F824C();
    func_800F654C(9);
    func_80150C38();
    func_800F654C(0x13);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    return;
}
