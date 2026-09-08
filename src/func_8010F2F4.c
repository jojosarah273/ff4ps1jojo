#include "common.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED50;
void func_8010F2F4(void)
{
    func_800F8F74(0x1704);
    func_800F8FB8(0x20);
    func_800F8FB8(0x24);
    func_8010F484();
    do {
        func_800FE778();
        func_800FE870();
        func_8011416C();
        func_800F62BC(0x20);
        func_800F6630(0x24);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x20));
        func_800F824C(0x24);
        *D_8019ED68 &= 0xFD;
        if (*D_8019ED50 == 0)
            *D_8019ED68 |= 0x2;
        if (func_800F53C0() != 0) {
            func_800F71DC(0);
            func_800F654C(0x60);
            func_800F824C(0xC);
            func_800F654C(0x50);
            func_800F824C(0xE);
            func_801105A4();
        }
        func_800F6630(0x20);
        func_800F5574(0xFF);
    } while (func_800F53D4() == 0);
    func_8011053C();
    func_800F6564(0x1288);
    func_800F4248(0xFB);
    func_800F8188(0x1288);
    func_800F71DC(3);
    do {
        func_800F9330();
        func_8010F68C();
        func_8010F4DC();
        func_80118938();
        func_800F95A0();
        func_800F5E48();
    } while (func_800F5C64(0x202) != 0);
    func_8011EA5C();
}
