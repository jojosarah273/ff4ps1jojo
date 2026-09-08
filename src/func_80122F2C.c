#include "common.h"
void func_80122F2C(void)
{
    /* rows with 6764/8768 writes on 0x5A-0x5E windows, 8011F3F8
       row; 0x45/0x48 cells. */
    func_800F9644(0x20);
    func_800F9330();
    func_800F8D6C(0x45);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x45));
    func_800F6764(0x48);
    func_8011F3F8();
    func_800F9660(0x20);
    func_800F6630(0x5A);
    func_800F8768();
    func_800F6630(0x5B);
    func_800F8768(2);
    func_800F6630(0x5D);
    func_800F8768(4);
    func_800F6630(0x5E);
    func_800F8768(6);
    func_800F9644(0x20);
    func_800F95A0();
    return;
}
