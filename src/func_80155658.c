#include "common.h"
void func_80155658(void)
{
    /* options row: 0x8A window, 0x29B5/0x29CD/0xDF/0xE1/0xE3/0x2003/
       0x29EB texts, 8015240C row; 5B2C(3B04(0xA9))+5D24(0x29CD)
       gates. */
    func_800F5410();
    func_800F4008(5);
    func_800F824C(0x8A);
    func_800F6B68(0x29B5);
    func_800F824C(0xA9);
    func_800F654C(0xFF);
    func_800F8768(0x29B5);
    func_800F6630(0xA9);
    func_800F5B2C(func_800F3B04());
    func_800F5D24(0x29CD);
    func_800F6630(0x8A);
    func_800F824C(0xDF);
    func_800F654C(0x80);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F7270(0xE3);
    func_800F654C(0x80);
    func_800F8768(0x2003);
    func_800F6630(0x8A);
    func_800F5140();
    func_800F90EC(0x29EB);
    return;
}
