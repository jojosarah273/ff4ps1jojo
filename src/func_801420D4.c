#include "common.h"
void func_801420D4(void)
{
    /* chara/status sub-screen: 8013D12C/8013EF78 prep, poll loop L142128
       (4008 0x10/0x70 reads + 8768 row draws), then detail rows and the
       L1422D8/L14230C loops with 8014202C / 80143D64 / 80143D14 /
       80142450 / 80142394. */
    func_8013D12C();
    func_8013EF78();
    func_800F8FB8();
    func_800F654C(0x40);
    func_800F824C(2);
    func_800F971C();
L142128:
    for (;;) {
        func_800F6630();
        func_800F8768();
        func_800F5410();
        func_800F4008(0x10);
        func_800F824C();
        func_800F9200();
        func_800F6630(2);
        func_800F8768();
        func_800F5410();
        func_800F4008(0x10);
        func_800F824C(2);
        func_800F5410();
        func_800F4008(0x70);
        func_800F8768();
        func_800F93DC();
        func_800F5410();
        func_800F4008(0x70);
        func_800F8768();
        func_800F654C(0x18);
        func_800F8768();
        func_800F8768();
        func_800F8768();
        func_800F8768();
        func_800F6364();
        func_800F5958(4);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6564(0x49);
    func_800F5140();
    func_800F6564(0x34C4);
    if (func_800F6434(0x80) != 0)
        goto L142278;
    func_800F6B68();
    func_800F5410();
    func_800F4008(0x18);
    func_800F8188();
    func_800F6B68();
    func_800F8188();
    goto L142298;
L142278:
    func_800F6B68();
    func_800F8188();
    func_800F6B68();
    func_800F8188();
L142298:
    func_800F6564();
    func_800F5480();
    func_800F8058(8);
    func_800F8188();
    func_800F6564();
    func_800F5480();
    func_800F8058(8);
    func_800F8188();
L1422D8:
    for (;;) {
        func_800F71DC(4);
        func_8014202C();
        func_800F971C();
    L14230C:
        for (;;) {
            func_80143D64();
            func_800F8768();
            func_80143D14();
            func_800F8768();
            func_800F654C(0xF0);
            func_80143E44();
            func_800F6364();
            func_800F5958(8);
            if (func_800F53D4() != 0)
                break;
        }
        func_80142450();
        func_80142394();
        func_800F6564();
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    return;
}
