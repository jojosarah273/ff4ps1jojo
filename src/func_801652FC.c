#include "common.h"
void func_801652FC(void)
{
    /* options status: 0xB5/0xB6 windows, 0xA6 row, 0xB1/0xAF/0xB0/0xB3
       cells, 80152BC4/80152224 rows; 53C0 gate (0x1000 text). */
    func_800F824C(0xB5);
    func_800F8FB8(0xB6);
    func_800F9644(0x20);
    func_800F5410();
    func_800F6658(0xA6);
    func_800F3F94(func_800F3C3C(0xB5));
    func_800F8274(0xB5);
    func_800F971C();
    func_800F9660(0x20);
    func_800F971C();
    func_800F6630(0xB1);
    func_80152BC4();
    func_80152224();
    func_800F5410();
    func_800F3F38(func_800F3C3C(0xB1));
    func_800F824C(0xAF);
    func_800F654C();
    func_800F4008();
    func_800F824C(0xB0);
    func_800F9644(0x20);
    func_800F7270(0xB5);
    func_800F6BE0(0x1000);
    func_800F3F94(func_800F3C3C(0xAF));
    func_800F5520(func_800F3C3C(0xB3));
    if (func_800F53C0() == 0)
        goto L165414;
    func_800F6658(0xB3);
L165414:
    func_800F87DC(0x1000);
    func_800F971C();
    func_800F9660(0x20);
    return;
}
