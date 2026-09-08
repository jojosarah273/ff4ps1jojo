#include "common.h"
void func_8011F8D4(void)
{
    /* rows: 0x100/0x29 windows, 8011FD34 close; 3F94(3C3C(0x29))
       + 926C/9298/9330 preps. */
    func_800F926C();
    func_800F9298();
    func_800F9330();
    func_800F9330();
    func_800F71DC(0x100);
    func_800F9330();
    func_800F94B8();
    func_800F95A0();
    func_800F9448();
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    func_8011FD34();
    return;
}
