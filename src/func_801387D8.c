#include "common.h"
void func_801387D8(void)
{
    /* rows: 0x4E/0x41 windows, 0x7FA text, 801224D0 row; loop
       L1388B4 on 3F94(3AB4(0x4E))/5C64(0x202) gates. */
    func_800F824C(0x4E);
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3C3C(0x4E));
    func_801224D0();
    func_800F824C(0x4E);
    func_800F9644(0x20);
    func_800F8274(0x4F);
    func_800F6658(0x41);
    func_800F7500(0x7FA);
    func_800F5410();
L1388b4:
    for (;;) {
        func_800F3F94(func_800F3AB4(0x4E));
        func_800F3B9C();
        func_800F62F0(0x4E);
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F9660(0x20);
    return;
}
