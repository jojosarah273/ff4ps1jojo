#include "common.h"
void func_8011F210(void)
{
    /* column cells: 0x30/0x2F/0x2D/0x31 windows, 0xFA/0xFB codes;
       loop L11F270 on 5DA0(0x31)/5B8C(0x202). */
    func_800F939C();
    func_800F824C(0x30);
    func_800F654C(0xFA);
    func_800F8960();
    func_800F63BC();
    func_800F6630(0x2F);
    func_800F8960();
    func_800F63BC();
    func_800F6630(0x2D);
    func_800F824C(0x31);
    func_800F62BC(0x30);
L11f270:
    for (;;) {
        func_800F654C(0xFF);
        func_800F8960();
        func_800F63BC();
        func_800F6630(0x2F);
        func_800F8960();
        func_800F63BC();
        func_800F5DA0(0x31);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(0xFB);
    func_800F8960();
    func_800F63BC();
    func_800F6630(0x2F);
    func_800F8960();
    func_800F960C();
    func_80122334();
    return;
}
