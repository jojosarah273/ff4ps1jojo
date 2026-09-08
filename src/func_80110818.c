#include "common.h"
extern u8 *D_8019ED40;
void func_80110818(void)
{
    func_80110F2C();
    func_800F654C(1);
    func_800F8188(0x6C8);
    do {
        func_80110FA4();
        func_800F654C(0x24);
        func_800F5480();
        func_800F7F48(func_800F3C3C(0x24));
        func_800F824C(0xB9);
        func_80173780();
        func_80110BC8();
        func_800F6630(0x24);
        func_800F5574(0x24);
        if (func_800F53C0() != 0) {
            u8 *p;
            func_800F654C(0x68);
            func_800F8188(0x300);
            func_800F654C(0x78);
            func_800F8188(0x304);
            func_800F8188(0x301);
            func_800F8188(0x305);
            func_800F6630(0x7A);
            p = D_8019ED40;
            *p = (u8)(*p >> 2);
            func_800F4248(2);
            func_800F5410();
            func_800F4008(0xE4);
            func_800F8188(0x302);
            p = D_8019ED40;
            *p = (u8)(*p ^ 2);
            func_800F8188(0x306);
            func_800F654C(0x37);
            func_800F8188(0x303);
            func_800F8188(0x307);
        }
        func_800F6630(0x7A);
        func_800F4248(7);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F62BC(0x24);
        func_800F6630(0x24);
        func_800F5574(0x48);
        if (func_800F53D4() == 0)
            continue;
        break;
    } while (1);
    func_800F8FB8(0xC8);
    func_8011EA5C();
}
