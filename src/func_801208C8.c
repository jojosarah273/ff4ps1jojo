#include "common.h"
void func_801208C8(void)
{
    /* rows: 0x29 window cells, 0x5A-0x5E windows with 8960 writes,
       8011F3F8 row. */
    func_800F9330();
    func_800F9660(0x20);
    func_800F939C();
    func_8011F3F8();
    func_800F9644(0x20);
    func_800F9410();
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    func_800F6630(0x5A);
    func_800F8960();
    func_800F6630(0x5B);
    func_800F8960(2);
    func_800F6630(0x5D);
    func_800F8960(4);
    func_800F6630(0x5E);
    func_800F8960(6);
    func_800F95A0();
    return;
}
