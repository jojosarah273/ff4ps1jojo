#include "common.h"
void func_8015EA00(void)
{
    /* options: 80061860 prep, 0xA4 window, 0x270B/0x270D cells;
       gate 53C0 picks 658C(0x270D). */
    func_80061860();
    func_800F9644(0x20);
    func_800F5410();
    func_800F6658(0xA4);
    func_800F3F94(func_800F3B04(0x270B));
    func_800F5520(func_800F3B04(0x270D));
    if (func_800F53C0() == 0)
        goto L15EA60;
    func_800F658C(0x270D);
L15EA60:
    func_800F81B0(0x270B);
    func_800F971C();
    func_800F9660(0x20);
    func_800F6630(0xA5);
    func_800F824C();
    return;
}
