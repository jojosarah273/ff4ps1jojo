#include "common.h"
void func_80131C50(void)
{
    /* ability rows: 0x1BC9/0x1B93 texts, 0xE8/0x43 windows,
       80124EAC row; 6BE0(0xB)/87DC(0xB) cells; gate 6434(0x202). */
    func_800F6564(0x1BC9);
    if (func_800F6434(0x202) != 0)
        return;
    func_800F6630(0xE8);
    func_80124EAC();
    func_800F6564(0x1B93);
    func_800F824C(0x43);
    func_800F9644(0x20);
    func_800F6BE0(0xB);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x43));
    func_800F87DC(0xB);
    func_800F9660(0x20);
    return;
}
