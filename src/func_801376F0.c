#include "common.h"
void func_801376F0(void)
{
    /* ability page: 0x1B7A/0x1B7C gates, 0x76/0x75/0x7A/0x79/0x73/0x77
       windows, 80124D08/801223A4 rows; loop L137790 with
       3F94(3C3C) cells. */
    func_800F9200();
    func_800F6564(0x1B7A);
    if (func_800F6434(0x202) != 0)
        goto L137730;
    func_800F93DC();
    func_80124D08();
    return;
L137730:
    func_800F93DC();
    func_800F8FB8(0x76);
    func_800F824C(0x75);
    func_800F8FB8(0x7A);
    func_800F824C(0x79);
    func_800F8D6C(0x73);
    func_800F8D6C(0x77);
    func_800F6564(0x1B7C);
    func_800F5CCC();
    func_800F824C(0x63);
    func_800F8FB8(0x64);
    func_800F9644(0x20);
L137790:
    for (;;) {
        func_800F6658(0x73);
        func_800F5410();
        func_800F3F94(func_800F3C3C(0x77));
        func_800F8274(0x73);
        func_800F6658(0x75);
        func_800F3F94(func_800F3C3C(0x79));
        func_800F8274(0x75);
        func_800F5DD4(0x63);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F9660(0x20);
    func_800F6630(0x75);
    func_800F5574(0x98);
    if (func_800F53C0() != 0)
        goto L137830;
    func_800F7270(0x73);
    func_80124D08();
    return;
L137830:
    func_800F7270(0x75);
    func_800F5958();
    if (func_800F53C0() != 0)
        goto L137858;
    func_80124D08();
L137858:
    func_800F7500();
    func_801223A4();
    func_800F7210(0x1A80);
    func_800F654C(1);
    func_800F8768(0x1A78);
    return;
}
