#include "common.h"
void func_8016AB14(void)
{
    /* shop store registers: 0x3304 gate title, 0x43/0x42 windows with
       0x4300-0x4330 index rows (8188/8D00 pairs); loop L16AB44 polls
       5958(0x15). */
    func_800F971C();
L16ab44:
    for (;;) {
        func_800F6C68();
        func_800F8768(0x3304);
        func_800F6364();
        func_800F5958(0x15);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F926C();
    func_800F971C();
    func_800F9200();
    func_800F9448();
    func_800F654C(0x43);
    func_800F8188(0x4300);
    func_800F8188(0x4310);
    func_800F654C(0x42);
    func_800F8188(0x4320);
    func_800F654C(0x1B);
    func_800F8188(0x4301);
    func_800F654C(0x1D);
    func_800F8188(0x4311);
    func_800F654C(0xE);
    func_800F8188(0x4321);
    func_800F71DC(0x3304);
    func_800F8D00(0x4302);
    func_800F71DC(0x330B);
    func_800F8D00(0x4312);
    func_800F71DC(0x3312);
    func_800F8D00(0x4322);
    func_800F654C(0x7E);
    func_800F8188(0x4304);
    func_800F8188(0x4307);
    func_800F8188(0x430C);
    func_800F8188(0x430F);
    func_800F8188(0x4324);
    func_800F8188(0x4327);
    func_800F654C(3);
    func_800F8188(0x420C);
    func_800F9448();
    return;
}
