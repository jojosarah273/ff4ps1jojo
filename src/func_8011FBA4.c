#include "common.h"
void func_8011FBA4(void)
{
    /* rows: 0x29/0x100 windows, 8011FD34 close; 3F94(3C3C(0x29))
       + 926C/9298/9330 preps. */
    func_800F926C();
    func_800F9298();
    func_800F9330();
    func_800F71DC(0x100);
    func_800F9330();
    func_800F94B8();
    func_800F9448();
    func_800F9644(0x20);
    /* v0/v1 latch -> L11FC7C / L11FCB4 */
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    func_8011FD34();
    return;
}
