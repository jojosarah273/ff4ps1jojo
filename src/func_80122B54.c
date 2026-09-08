#include "common.h"
void func_80122B54(void)
{
    /* row picker: 0x60/0x61 windows, 0x45/0x43 windows, 0x16A8 text,
       6434(2)/4120 gates; 6D70/4248(0x3F) detail. */
    func_800F824C(0x60);
    func_800F8FB8(0x61);
    func_800F9644(0x20);
    func_800F6658(0x60);
    func_800F516C();
    func_800F5050();
    func_800F4064(0x1000);
    func_800F9660(0x20);
    func_800F6630(0x60);
    func_800F824C(0x48);
    func_800F6D70();
    func_800F4248(0x3F);
    if (func_800F4120(0x202) == 0)
        return;
    func_800F78C4(func_800F3C3C(0x48));
    func_800F824C(0x48);
    func_800F6564(0x16A8);
    if (func_800F6434(2) != 0)
        goto L122C54;
    func_800F71DC(0xA);
    goto L122C5C;
L122C54:
    func_800F7270(0x41);
L122C5C:
    func_800F8D6C(0x45);
    func_800F6630(0x60);
    func_800F5140();
    func_800F824C(0x43);
    func_800F9644(0x20);
    func_800F6658(0x43);
    func_800F3F94(func_800F3C3C(0x45));
    func_800F6CF4(0x20);
    func_800F9660(0x20);
    return;
}
