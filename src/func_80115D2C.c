#include "common.h"
void func_80115D2C(void)
{
    func_800FE8B4();
    func_801162F8();
    func_800F71DC();
    func_800F8D6C(0x24);
L15d54:
    for (;;) {
        func_800F7270(0x24);
        func_800F6630(0x7A);
        func_800F4248(7);
        if (func_800F4120(0x202) != 0)
            goto L15D9C;
        func_800F3B04();
        func_800F6048();
    L15D9C:
        func_800F6B68(0xA6D);
        if (func_800F6434() == 0)
            goto L16010;
        if (func_800F53D4() != 0)
            goto L15DDC;
        func_800F5574(4);
        if (func_800F53D4() == 0)
            goto L15FF0;
    L15DDC:
        func_800F6630(0x7A);
        func_800F4248(7);
        if (func_800F4120(0x202) != 0)
            goto L15FF0;
        func_800F6630(0xE5);
        if (func_800F6434(0x202) != 0)
            goto L16000;
        func_800F90EC(0xA6D);
        func_800F6630(0xC7);
        if (func_800F6434(0x202) != 0)
            goto L15F2C;
        func_800F6564(0xAD0);
        func_8010D9D4();
        func_800F5410();
        func_800F3F38(func_800F3B04(0xAD4));
        func_800F7270(0x24);
        func_800F8768(0xA6E);
        func_800F6564(0xAD1);
        func_8010D9D4();
        func_800F5410();
        func_800F3F38(func_800F3B04(0xAD5));
        func_800F7270(0x24);
        func_800F8768(0xA6F);
        goto L15FF0;
    L15F2C:
        func_800F6630(0xC7);
        func_800F5CCC();
        func_800F4248(0xF);
        func_800F5140();
        func_800F5410();
        func_800F3F38(func_800F3B04(0xAD4));
        func_800F8768(0xA6E);
        func_800F5410();
        func_800F3F38(func_800F3B04(0xAD5));
        func_800F8768(0xA6F);
        func_800F62BC(0xC7);
    L15FF0:
        func_80116098();
        goto L16010;
    L16000:
        func_800F654C(0xFF);
        func_800F8768(0xA6D);
    L16010:
        func_800F6630(0x24);
        func_800F5410();
        func_800F4008(4);
        func_800F824C(0x24);
        if (func_800F54D4(func_800F3B04(0xACF)) == 0)
            continue;
        break;
    }
    func_800F6630(0x7A);
    func_800F4248(7);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F7210(0xAD2);
    func_800F5E48();
    func_800F8D00(0xAD2);
    return;
}
