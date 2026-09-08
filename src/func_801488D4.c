#include "common.h"
void func_801488D4(void)
{
    /* battle item-sublist: 0x14/0x15/0x16/0xE/0x10/0x12 windows,
       0x6CC0/0x300 gates; 80148D04/80148CAC/80148BE0 row handlers and
       the L148A74 refresh loop (67FC + 3F38(3C3C(id)) row pair). */
    func_800F6564();
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8F74();
    func_800F6564();
    if (func_800F6434(0x202) != 0)
        goto L148924;
    func_80148D04();
    goto L14896C;
L148924:
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto L14896C;
    func_800F5574(0xFE);
    if (func_800F53D4() != 0)
        goto L148964;
    func_80148CAC();
    goto L14896C;
L148964:
    func_80148BE0();
L14896C:
    func_800F6564();
    func_800F5140();
    func_800F6C68();
    func_800F824C(0x14);
    func_800F6C68();
    func_800F824C(0x15);
    func_800F654C(0xD);
    func_800F824C(0x16);
    func_800F6564();
    func_800F5480();
    func_800F8058(0x18);
    func_800F824C(0xE);
    func_800F6564();
    func_800F5480();
    func_800F8058(0x18);
    func_800F824C(0x10);
    func_800F6564();
    func_800F824C(0x12);
    func_800F6564();
    func_800F9644(0x20);
    func_800F971C();
    func_800F9660(0x20);
    func_800F7500();
L148a74:
    for (;;) {
        func_800F67FC(0x14);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            return;
        func_800F9200();
        func_800F4248(0xF0);
        func_800F7864();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xE));
        func_80094588();
        func_800F8768(0x300);
        func_800F6364();
        func_800F93DC();
        func_800F4248(0xF);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x10));
        func_800F8768(0x300);
        func_800F6364();
        func_800F63BC();
        func_800F67FC(0x14);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x12));
        func_800F8768(0x300);
        func_800F6364();
        func_800F63BC();
        func_800F6564(0x6CC0);
        if (func_800F6434(2) != 0)
            goto L148BAC;
        func_800F6564(0x300);
        goto L148BB8;
    L148BAC:
        func_800F6564(0x300);
    L148BB8:
        func_800F8768();
        func_800F6364();
    }
}
