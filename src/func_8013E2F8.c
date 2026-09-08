#include "common.h"
void func_8013E2F8(void)
{
    /* battle magic-cast flow: 8013D12C/80148DE8 prep, wait loop L13E340
       (43E44/5958), row read L13E3EC (4FAC(0x101)/6434(0x80) gates),
       8013E200 cast helper loop L13E494, exit loop L13E510. */
    func_800F8188();
    func_8013D12C();
    func_80148DE8();
    func_800F971C();
L13e340:
    for (;;) {
        func_800F6C68();
        func_800F8768();
        func_800F6C68();
        func_800F8768();
        func_800F654C(0xFC);
        func_80143E44();
        func_800F6364();
        func_800F5958(4);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L13e398:
    for (;;) {
        func_80140558();
        func_800F971C();
        func_800F6564();
        func_800F824C(0xA);
    L13e3ec:
        for (;;) {
            func_800F3C3C(0xA);
            func_800F4F28();
            if (func_800F4FAC(0x101) != 0)
                goto L13E4C4;
            func_800F6564();
            if (func_800F6434(0x80) != 0)
                goto L13E454;
            func_800F6B68();
            func_800F5410();
            func_800F4008(0x10);
            func_800F824C();
            func_800F6B68();
            goto L13E47C;
        L13E454:
            func_800F6B68();
            func_800F5480();
            func_800F8058(0xC);
            func_800F824C();
            func_800F6B68();
        L13E47C:
            func_800F824C(2);
            func_800F9330();
            func_800F71DC();
        L13e494:
            for (;;) {
                func_8013E200();
                func_800F6364();
                func_800F5958(4);
                if (func_800F53D4() == 0)
                    continue;
                break;
            }
            func_800F95A0();
        L13E4C4:
            func_800F6364();
            func_800F6364();
            func_800F5958(0x10);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F971C();
    L13e510:
        for (;;) {
            func_80143E44();
            func_800F6364();
            func_800F5958(4);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F6564();
        func_800F5574(0x80);
        if (func_800F53C0() != 0)
            continue;
        break;
    }
    return;
}
