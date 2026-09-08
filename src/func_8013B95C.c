#include "common.h"
void func_8013B95C(void)
{
    /* ability/party screen: 0x41/0x45 windows, 0x1804/0x1A83 texts;
       8016EA9C/80123D3C/8013BB0C/80126610/80122114 rows; loop L13B9F8
       (5DA0(0x45)/5B8C(0x202)). */
    func_800F926C();
    func_800F9298();
    func_8016EA9C();
    func_80123D3C();
    func_800F8F74(0x1A83);
    func_800F7270(0x41);
    func_800F8D00(0x1BB3);
    func_800F8D00(0x1BB5);
    func_800F8188(0x1BB5);
    func_800F654C(8);
    func_800F824C(0x45);
    func_800F7270(0x41);
L13b9f8:
    for (;;) {
        func_800F6B68(0x1804);
        if (func_800F6434(2) != 0)
            goto L13BA74;
        func_800F5574(0x54);
        if (func_800F53C0() == 0)
            goto L13BA50;
        func_800F5574(0x60);
        if (func_800F53C0() != 0)
            goto L13BA50;
        func_800F8960();
        goto L13BA5C;
    L13BA50:
        func_800F8960(1);
    L13BA5C:
        func_800F654C();
        func_800F8960();
        goto L13BA8C;
    L13BA74:
        func_800F654C();
        func_800F8960();
        func_800F8960();
    L13BA8C:
        func_800F63BC();
        func_800F63BC();
        func_800F6364();
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_8013BB0C();
    func_80126610();
    func_800F8F74(0x1BC6);
    func_80122114();
    func_800F654C();
    func_800F3D48();
    func_800F94B8();
    func_800F9448();
    return;
}
