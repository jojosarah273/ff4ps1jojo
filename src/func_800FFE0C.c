#include "common.h"
void func_800FFE0C(void)
{
    /* shop gates: 0xB1/0x5A/0x5C/0x2/0x54/0xEA windows with
       4120/6434 gates; 800FFEFC/8010A964 rows close. */
    func_800F6630(0xB1);
    if (func_800F6434(0x202) != 0)
        return;
    func_800F6630(0x5A);
    func_800F4248(0xF);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F6630(0x5C);
    func_800F4248(0xF);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F6630(2);
    func_800F4248(0x80);
    if (func_800F4120(0x202) == 0)
        return;
    func_800F6630(0x54);
    if (func_800F6434(2) == 0)
        return;
    func_800F62BC(0x54);
    func_800F6630(0xEA);
    if (func_800F6434(0x202) != 0)
        goto L8FFECC;
    func_800F62BC(0xEA);
L8FFECC:
    func_800FFEFC();
    func_8010A964();
    return;
}
