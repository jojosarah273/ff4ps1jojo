#include "common.h"
void func_8014FEC8(void)
{
    func_800F7500(0x80);
    func_800F8E50(0xF469);
    func_800F7500(0x1000);
    func_800F8E50(0xF46B);
    func_800F9200();
    func_800F5574(0x15);
    if (func_800F53C0() == 0)
        goto Lffc0;
    func_800F5480();
    func_800F8058(0x15);
    func_800F9330();
    func_800F9644(0x20);
    func_800F516C();
    func_800F81B0(0xF469);
    func_800F971C();
    func_800F9660(0x20);
    func_800F95A0();
Lffc0:
    func_800F654C(0x7F);
    func_800F824C(6);
    func_800F654C(0xC);
    func_800F824C(2);
    func_800F93DC();
    func_800F9644(0x20);
    func_800F6558(0xDBE6);
    func_800F8274(8);
    func_800F6558(0xF000);
    func_800F8274(4);
    func_800F7534(0xF469);
L004c:
    for (;;) {
        func_800F939C();
        func_800F6CF4();
        func_800F922C();
        func_800F922C();
        func_800F4264(0x3FFF);
        func_800F516C();
        func_800F68A0(4);
        func_800F8274();
        func_800F9410();
        func_800F4264(0x4000);
        func_800F8274(0xA);
        func_800F9410();
        func_800F4264(0x8000);
        if (func_800F41E8(0x202) != 0)
            goto L01a0;
        func_800F7500();
        for (;;) {
            func_800F6EDC();
            func_80150364();
            func_800F8378(8);
            func_800F62F0();
            func_800F62F0(0x10);
            func_800F5A90();
            if (func_800F53D4() != 0)
                break;
        }
        for (;;) {
            func_800F6EDC();
            func_80150364();
            func_800F4264(0xFF);
            func_800F8378(8);
            func_800F62F0(0x20);
            func_800F5A90();
            if (func_800F53D4() != 0)
                break;
        }
        goto L0260;
    L01a0:
        func_800F7500(0xE);
        for (;;) {
            func_800F6EDC();
            func_80150364();
            func_800F8378(8);
            func_800F62F0();
            func_800F62F0(0xFFFE);
            func_800F5A90();
            if (func_800F53D4() != 0)
                break;
        }
        func_800F7500(0x1E);
        for (;;) {
            func_800F6EDC();
            func_80150364();
            func_800F4264(0xFF);
            func_800F8378(8);
            func_800F62F0(0xE);
            func_800F5A90();
            if (func_800F53D4() != 0)
                break;
        }
    L0260:
        func_800F6658(8);
        func_800F5410();
        func_800F4064(0x20);
        func_800F8274(8);
        func_800F960C();
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F9660(0x20);
    func_800F971C();
    for (;;) {
        func_800F8768(0xE9A6);
        func_800F8768(0xEBA6);
        func_800F6364();
        func_800F5958(0x40);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F7500(0x1800);
    func_800F7210(0xF46B);
    func_800F8D6C();
    func_800F654C(0x7E);
    func_800F71DC(0xDBE6);
    func_800723F0();
    func_80150400();
    return;
}
