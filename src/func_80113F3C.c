#include "common.h"
void func_80113F3C(void)
{
    /* battle rows: 0x20/0x21/0x31/0x24/0x26/0x8F/0x91 windows, 0x6FB/
       0x302/0x303/0x90 cells, 8011416C/80174F0C/801140A4/80113C04/
       80113C54; loop L113F5C on 54D4(3C3C(0x90)). */
    func_8011416C();
    func_800F8FB8(0x20);
    func_800F8FB8(0x21);
L113f5c:
    for (;;) {
        func_800F9644(0x20);
        func_800F6658(0x20);
        func_800F5410();
        func_800F4064(0x100);
        func_800F8274(0x18);
        func_800F658C(0x6FB);
        func_800F8274(0x1A);
        func_800F6558();
        func_800F9660(0x20);
        func_80174F0C();
        func_800F6630(0x31);
        func_801140A4();
        func_80113C04();
        func_800F6630(0x31);
        func_800F5410();
        func_800F4008(0x40);
        func_801140A4();
        func_80113C54();
        func_800F6630(0x8F);
        func_800F5574(0xC0);
        if (func_800F53D4() == 0)
            goto L11404C;
        func_800F6630(0x7A);
        func_800F4248(2);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x8F));
    L11404C:
        func_800F8960(0x302);
        func_800F6630(0x91);
        func_800F8960(0x303);
        func_800F62BC(0x20);
        func_800F6630(0x20);
        if (func_800F54D4(func_800F3C3C(0x90)) == 0)
            continue;
        break;
    }
    return;
}
