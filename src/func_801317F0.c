#include "common.h"
void func_801317F0(void)
{
    /* ability/select screen: 0x1B91 text, 0xE8/0x54/0x55/0x57/0x41
       windows, 80124EAC cursor; loops L1318D0 (5DD4/5C64 scroll),
       L13193C (6B38(0x1B8B)/58BC wait), L1319F4 (80131A2C pick). */
    func_800F654C();
    func_800F3D48();
    func_800F6564(0x1B91);
    func_800F9644(0x20);
    func_800F81B0(0x1B91);
    func_800F9660(0x20);
    func_800F6630(0xE8);
    func_80124EAC();
    func_800F6B68(0x18);
    func_800F61E8();
    func_800F824C(0x54);
    func_800F8FB8(0x55);
    func_800F654C();
    func_800F3D48();
    func_800F6B68(0x18);
    func_800F7864();
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3B04(0x1B91));
    func_800F8274(0x57);
L1318d0:
    for (;;) {
        func_800F5410();
        func_800F3F94(func_800F3C3C(0x57));
        func_800F5DD4(0x54);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F8274(0x57);
    func_800F9660(0x20);
    func_800F9660(0x10);
    func_800F7248(0x41);
L13193c:
    for (;;) {
        func_800F6B38(0x1B8B);
        if (func_800F6434(2) != 0)
            goto L13195C;
        func_800F6390();
    L13195C:
        func_800F6338();
        func_800F58BC(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F9644(0x10);
    func_800F6564(0x1BBB);
    if (func_800F6434(2) != 0)
        goto L1319CC;
    func_800F9644(0x20);
    func_800F6658(0x57);
    goto L1319DC;
L1319CC:
    func_800F9644(0x20);
    func_800F6658(0x57);
L1319DC:
    func_800F8274(0x45);
    func_800F9660(0x20);
    func_800F654C();
L1319f4:
    for (;;) {
        func_80131A2C();
        func_800F61E8();
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
