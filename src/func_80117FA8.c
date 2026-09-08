#include "common.h"
void func_80117FA8(void)
{
    /* battle stat rows: 0xB3/0x3D windows, 0x1000/0x9D5 gates, 0x1001-
       0x1008 cells, 8011818C/801183D8/80118244 rows; loop L117FD0
       (4008(0x40) row read). */
    func_800F6364();
    func_800F8D6C(0xB3);
    func_800F71DC();
    func_800F8D6C(0x3D);
L117fd0:
    for (;;) {
        func_800F7270(0x3D);
        func_800F6B68(0x1000);
        if (func_800F6434(2) != 0)
            goto L118030;
        func_800F6630(0x3D);
        func_800F5410();
        func_800F4008(0x40);
        func_800F824C(0x3D);
        func_800F6630(0x3E);
        func_800F4008();
        func_800F824C(0x3E);
    }
L118030:
    func_800F7270(0xB3);
    func_800F6B68(0x9D5);
    func_800F5CCC();
    if (func_800F6434() != 0)
        goto L11816C;
    func_8011818C();
    func_800F7594(0x3D);
    func_800F6D70(0x1000);
    func_800F4248(0xE0);
    func_800F7270(0xB3);
    func_800F78C4(func_800F3B04());
    func_800F8960(0x1000);
    func_800F4248(0x1F);
    func_800F5574(0x11);
    if (func_800F53D4() == 0)
        goto L11811C;
    func_800F654C(0xB);
    func_800F8960(0x1001);
L11811C:
    func_800F6D70(0x1009);
    func_800F8960(0x1007);
    func_800F6D70(0x100A);
    func_800F8960(0x1008);
    func_800F6D70(0x100D);
    func_800F8960(0x100B);
    func_800F6D70(0x100E);
    func_800F8960(0x100C);
    func_801183D8();
    return;
L11816C:
    func_80118244();
    func_800FE778();
    return;
}
