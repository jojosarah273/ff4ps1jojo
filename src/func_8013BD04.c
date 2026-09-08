#include "common.h"
void func_8013BD04(void)
{
    /* battle summon/party-cast screen: 0x41 window + 0x48/0x45 rows;
       outer/ inner loops (L3BD24/L3BD54) with 6D70/54D4 confirm gates;
       L3BE64 advance loop (80134948), L3BF38 wait loop, and the
       8013C4B4/8013C44C/801210AC/801263F0/8011FF40 commit chain. */
    func_800F7594(0x41);
    func_800F654C(8);
    func_800F824C(0x48);
L3bd24:
    for (;;) {
        func_800F6D70();
        if (func_800F6434(2) != 0)
            goto L3BE24;
        func_800F654C(0x30);
        func_800F824C(0x45);
        func_800F7270(0x41);
    L3bd54:
        for (;;) {
            func_800F6D70();
            if (func_800F54D4(func_800F3B04()) == 0)
                goto L3BDFC;
            func_800F6D70();
            func_800F5410();
            func_800F3F38(func_800F3B04());
            func_800F5574(0x64);
            if (func_800F53C0() != 0)
                goto L3BDFC;
            func_800F8768(0x1441);
            func_800F654C();
            func_800F8960();
            func_800F8960();
            goto L3BE24;
        L3BDFC:
            func_800F6364();
            func_800F6364();
            func_800F5DA0(0x45);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
    L3BE24:
        func_800F63BC();
        func_800F63BC();
        func_800F5DA0(0x48);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(8);
    func_800F824C(0x45);
    func_800F7594(0x41);
L3be64:
    for (;;) {
        func_800F6D70();
        if (func_800F6434(2) != 0)
            goto L3BEE4;
        func_800F654C();
        func_800F939C();
        func_80134948();
        func_800F960C();
        func_800F5574();
        if (func_800F53D4() == 0)
            goto L3BEE4;
        func_800F9644(0x20);
        func_800F6DE8();
        func_800F87DC(0x1440);
        func_800F6658(0x41);
        func_800F89D4();
        func_800F9660(0x20);
    L3BEE4:
        func_800F63BC();
        func_800F63BC();
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F7500(8);
    func_800F7270(0x41);
L3bf38:
    for (;;) {
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F6364();
        func_800F6364();
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_8013C4B4();
    func_800F5574();
    if (func_800F53D4() == 0)
        goto L3BFE4;
    func_800F62BC(0x60);
    func_8013C44C();
    func_8011F684();
    func_801210AC();
    func_801263F0();
    func_8011FF40();
    return;
L3BFE4:
    func_8013BFFC();
    return;
}
