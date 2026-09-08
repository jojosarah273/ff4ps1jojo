#include "common.h"
void func_800FC5D8(void)
{
    /* battle confirm-dialog: 0x1700 test branches to the 0x2105 help
       (800FFADC/8017F9A8) vs 0x2120 detail (800FFB1C/8010CA74) rows;
       fee-check 0xFE4/7728(0x101), then the 0x2100/0x4200 tail with
       80175E88/80175E08 right/left rows; loops on 80194394. */
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto LFC654;
    func_800F654C(7);
    func_800F8188(0x2105);
    func_800FFADC();
    func_8017F9A8();
    goto LFC86C;
LFC654:
    func_800F654C(9);
    func_800F8188(0x2105);
    func_800FFB1C();
    func_8010CA74();
    func_8017F9A8();
    func_8017F9A8();
    func_8017F8F8();
    func_8017F8F8();
LFC704:
    for (;;) {
        func_80194700();
        if (func_80194394() == 0)
            break;
    }
    func_800F6564(0xFE4);
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto LFC86C;
    func_800F654C(3);
    func_800F8188(0x2130);
    func_800F654C(0x43);
    func_800F8188(0x2131);
    func_8017F9A8();
    func_8017F9A8();
    func_8017F8F8();
LFC814:
    for (;;) {
        func_80194700();
        if (func_80194394() == 0)
            break;
    }
LFC86C:
    func_80176060();
    func_80175E88();
    func_800F6B68(0x1000);
    if (func_800F6434(0x202) != 0)
        goto LFC89C;
    func_80175E08();
LFC89C:
    func_800FE870();
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_800F654C();
    func_800FD85C();
    func_800F5448();
    return;
}
