#include "common.h"
void func_8013BB0C(void)
{
    /* ability menu: 0x93/0x9F/0x60 windows, 0x1B1D/0x1BC6 texts,
       8013CB94/8012A868/8013C2FC/8013CA70 sub-rows; loop L13BC38
       (80194700/80194394) and L13BCA4 (8013C2FC gate) end via
       8013BD04. */
    func_800F71DC();
    func_800F8D6C(0x93);
    func_800F71DC();
    func_800F8D6C(0x9F);
    func_801210AC();
    func_8013CB94();
    func_80120FBC();
    func_800F71DC();
    func_800F8D00(0x1B1D);
    func_800F6240(0x1BC6);
    func_8012A868();
    func_80120F1C();
    func_800F7500();
    func_8011EF30();
    func_80120E2C();
    func_8012AAC0();
    func_80126330();
    func_8016EA7C();
    func_800F8FB8(0x60);
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
L13bc38:
    for (;;) {
        func_80194700();
        func_80194394();
        func_80126590();
    L13bca4:
        for (;;) {
            func_8013C2FC();
            func_800F6630(0x60);
            if (func_800F6434(2) != 0)
                goto L13BCE4;
            func_8013CA70();
            if (func_800F53C0() != 0)
                continue;
            goto L13BCEC;
        }
    L13BCE4:
        func_8013BD04();
    L13BCEC:
        return;
    }
}
