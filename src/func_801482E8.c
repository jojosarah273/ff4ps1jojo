#include "common.h"
void func_801482E8(void)
{
    func_800F6564(0xF107);
    if (func_800F6434(2) != 0)
        goto L86c8;
    func_80148D04();
    func_800F6240(0xF108);
    func_800F6564(0xF108);
    func_800F5574(0x2A);
    if (func_800F53D4() == 0)
        goto L8348;
    func_800F8F74(0xF107);
    return;
L8348:
    func_800F7500();
    func_800F71DC();
    func_800F8D6C(0x10);
L8360:
    for (;;) {
        func_800F8FB8(0x14);
        func_800F6D70(0xF0FA);
        if (func_800F6434(2) != 0)
            goto L83a0;
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            goto L8670;
        func_800F62BC(0x14);
    L83a0:
        func_800F6D70(0xF0D3);
        func_800F5480();
        func_800F8058(0x10);
        func_800F824C(0x12);
        func_800F9330();
        func_800F6D70(0xF0E0);
        func_800F5480();
        func_800F8058(8);
        func_800F824C(0xE);
        func_800F939C();
        func_800F7500();
        func_800F6564(0xF108);
        func_800F6630(0x14);
        if (func_800F6434(0x202) != 0)
            goto L849c;
        for (;;) {
            func_800F6C68();
            func_800F5410();
            func_800F3F38(func_800F3C3C(0xE));
            func_800F8960(0x13);
            func_800F63BC();
            func_800F5A90(5);
            if (func_800F53D4() != 0)
                break;
        }
        goto L8508;
    L849c:
        func_800F6564(0xF108);
        func_800F6C68();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xE));
        func_800F824C(0x13);
        func_800F824C(0x14);
        func_800F824C(0x15);
        func_800F824C(0x16);
        func_800F824C(0x17);
    L8508:
        func_800F654C(5);
        func_800F824C(0xE);
        func_800F960C();
        func_800F95A0();
        func_800F6564(0x6CC0);
        if (func_800F6434(2) == 0) {
            func_800F6630(0x12);
            func_800F5480();
            func_800F8058(0x20);
            func_800F824C(0x12);
        }
        for (;;) {
            func_800F6630(0x12);
            func_800F8768(0x340);
            func_800F5410();
            func_800F4008(8);
            func_800F824C(0x12);
            func_800F6364();
            func_800F9330();
            func_800F6630(0xE);
            func_800F5CCC();
            func_800F6A78(0x13);
            func_800F95A0();
            func_800F8768(0x340);
            func_800F6364();
            func_800F9330();
            func_800F7270(0x10);
            func_800F6364();
            func_800F8D6C(0x10);
            func_800F6B68(0xDBE6);
            func_800F95A0();
            func_800F8768(0x340);
            func_800F6364();
            func_800F6D70(0xF0ED);
            func_800F8768(0x340);
            func_800F6364();
            func_800F5DA0(0xE);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        goto L86a8;
    L8670:
        func_800F9644(0x20);
        func_800F6658(0x10);
        func_800F5410();
        func_800F4064(5);
        func_800F8274(0x10);
        func_800F971C();
        func_800F9660(0x20);
    L86a8:
        func_800F63BC();
        func_800F5A90(0xD);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L86c8:
    return;
}
