#include "common.h"
void func_80139704(void)
{
    /* ability stat-cast: 0x1440/0x1340/0x1441/0x1442 gates, 0x45/0x41
       windows, 80139694 intro; loop L13978C (3F38(3B04) rows), then
       the L139874 stat block with 80120E2C/80120E9C/8012AAC0/
       801264C0. */
    func_80139694();
    func_800F6B68(0x1440);
    if (func_800F6434(2) != 0)
        return;
    func_800F5574(0x19);
    if (func_800F53D4() != 0)
        return;
    func_800F5574(0xC8);
    if (func_800F53D4() != 0)
        return;
    func_800F5574(0xEE);
    if (func_800F53C0() != 0)
        return;
    func_800F654C(0x7E);
    func_800F824C(0x45);
    func_800F7594(0x41);
L13978c:
    for (;;) {
        func_800F6D70(0x1340);
        if (func_800F6434(2) != 0)
            goto L139874;
        if (func_800F54D4(func_800F3B04()) == 0)
            goto L13981C;
        func_800F6D70(0x1341);
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F5574(0x64);
        if (func_800F53C0() != 0)
            goto L139874;
    L13981C:
        func_800F63BC();
        func_800F63BC();
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_80120E2C();
    func_800F7500();
    func_8011FBA4();
    func_80126528();
    return;
L139874:
    func_800F6B68(0x1440);
    func_800F8960(0x1340);
    func_800F6B68(0x1441);
    func_800F5410();
    func_800F3F38(func_800F3B04());
    func_800F8960(0x1341);
    func_800F90EC(0x1440);
    func_800F90EC(0x1441);
    func_80120E9C();
    func_8012AAC0();
    func_801264C0();
    return;
}
