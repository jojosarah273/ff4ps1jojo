#include "common.h"
void func_80144050(void)
{
    /* battle magic-cast: 0x1900 text + spell rows (8768 draws), loops
       L144084 (row refresh), L14411C, L144180 (43E44 wait), L1441D8
       (4x 6B68/8768 spell-cell reads), L14425C; 80145278 intro,
       8013D12C/80140894/8013EF78 and 80140558/80143ED4 prep, 801452C8
       commit. */
    func_80145278();
    func_800F971C();
L144084:
    for (;;) {
        func_800F6B68(0x1900);
        func_800F8768();
        func_800F5410();
        func_800F4008(0x40);
        func_800F8768();
        func_800F90EC();
        func_800F654C(8);
        func_800F8768();
        func_800F654C(0x98);
        func_800F8768();
        func_800F90EC();
        func_800F90EC();
        func_800F6364();
        func_800F5958(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8013D12C();
    func_80140894();
    func_8013EF78();
L14411C:
    for (;;) {
        func_80140558();
        func_80143ED4();
        func_800F6564();
        func_800F5480();
        func_800F8058(6);
        func_800F8188();
        func_800F654C(1);
        func_800F8188();
        func_800F971C();
    L144180:
        for (;;) {
            func_800F654C(0x10);
            func_80143E44();
            func_800F6364();
            func_800F5958(0x40);
            if (func_800F53D4() != 0)
                break;
        }
        func_800F6564();
        func_800F5410();
        func_800F4008(2);
        func_800F8188();
        func_800F71DC(0x3E);
    L1441D8:
        for (;;) {
            func_800F6B68();
            func_800F8768();
            func_800F6B68();
            func_800F8768();
            func_800F6B68();
            func_800F8768();
            func_800F6B68();
            func_800F8768();
            func_800F5E48();
            func_800F5958();
            if (func_800F53D4() != 0)
                break;
        }
        func_800F971C();
    L14425C:
        for (;;) {
            func_800F6B68();
            if (func_800F6434(2) != 0)
                continue;
            func_800F6364();
            func_800F5958(0x40);
            if (func_800F53D4() != 0)
                break;
        }
        break;
    }
    func_800F8F74();
    func_801452C8();
    return;
}
