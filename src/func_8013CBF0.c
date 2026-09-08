#include "common.h"
void func_8013CBF0(void)
{
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto LCC30;
    func_800F5574(2);
    if (func_800F53D4() != 0)
        goto LCC78;
    return;
LCC30:
    func_800F654C(7);
    func_800F8188(0xF11B);
    func_800F654C(5);
    func_800F8188(0xF11C);
    func_800F654C(0x14);
    func_800F8188(0xF118);
    func_800F8F74(0xF116);
    func_800F654C(0xAE);
    goto LCCC0;
LCC78:
    func_800F654C(3);
    func_800F8188(0xF11B);
    func_800F654C(8);
    func_800F8188(0xF11C);
    func_800F654C(8);
    func_800F8188(0xF116);
    func_800F654C(0xFF);
    func_800F8188(0xF118);
    func_800F654C(0x9E);
LCCC0:
    func_8014D708();
    func_8013D12C();
    func_80148DE8();
    func_800F971C();
LCCFC:
    for (;;) {
        func_800F9200();
        func_80143E44();
        func_800F93DC();
        func_800F5410();
        func_800F4008(0x20);
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F971C();
    func_80148E60();
    func_800F6564(0x48);
    func_800F5140();
    func_800F6B68(0xF053);
    func_800F5410();
    func_800F4008(0x10);
    func_800F8188(0xF111);
    func_800F6B68(0xF054);
    func_800F5480();
    func_800F8058(8);
    func_800F8188(0xF112);
    func_800F8F74(0xF115);
    func_800F8F74(0xF114);
    func_800F8F74(0xF117);
LCDD4:
    for (;;) {
        func_80140558();
        func_8013CF08();
        func_8014D96C();
        func_800F6564(0xF117);
        if (func_800F54D4(func_800F3B04(0xF118)) != 0)
            goto LCE2C;
        func_800F6564(0xF117);
        func_80148E60();
        func_800F6240(0xF117);
    LCE2C:
        func_800F6564(0xF116);
        if (func_800F6434(0x202) != 0)
            goto LCE98;
        func_800F971C();
        for (;;) {
            func_800F654C(4);
            func_80143E44();
            func_800F6364();
            func_800F5958(8);
            if (func_800F53D4() != 0)
                break;
        }
    LCE98:
        func_800F6240(0xF114);
        func_800F6564(0xF114);
        func_800F4280(0xF11B);
        if (func_800F4120(0x202) != 0)
            goto LCEC8;
        func_800F6240(0xF115);
    LCEC8:
        func_800F6564(0xF115);
        if (func_800F54D4(func_800F3B04(0xF11C)) == 0)
            continue;
        break;
    }
    func_8013D12C();
    return;
}
