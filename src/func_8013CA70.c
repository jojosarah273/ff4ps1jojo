#include "common.h"
void func_8013CA70(void)
{
    /* ability menu: 0x41 window; 5574 ladder (0x19/0xC8/0xEE codes)
       routes to the 801210AC/8011FB74/801263F0/8012219C/8011FF40/
       801240A8/8011EF30 row block; loop L13CA84 on 5958(0x10). */
    func_800F7270(0x41);
L13ca84:
    for (;;) {
        func_800F6B68();
        func_800F5574(0x19);
        if (func_800F53D4() != 0)
            goto L13CB0C;
        func_800F5574(0xC8);
        if (func_800F53D4() != 0)
            goto L13CB0C;
        func_800F5574(0xEE);
        if (func_800F53C0() != 0)
            goto L13CB0C;
        func_800F6364();
        func_800F6364();
        func_800F5958(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F5410();
    return;
L13CB0C:
    func_801210AC();
    func_800F7500();
    func_8011FB74();
    func_801263F0();
    func_8012219C();
    func_8011FF40();
    func_801240A8();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011FB74();
    func_801263F0();
    func_800F5480();
    return;
}
