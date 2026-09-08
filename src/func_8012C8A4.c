#include "common.h"
void func_8012C8A4(void)
{
    /* config rows: 0x1B3B/0xD5/0x60 texts/windows, 801221EC/8012C2F8/
       8012C980 rows; gate 53D4. */
    func_800F6564(0x1B3B);
    func_800F5480();
    func_800F8058(0xD5);
    func_800F5140();
    func_800F824C(0x43);
    func_800F7270(0x43);
    func_800F7500(3);
    func_800F9644(0x20);
    func_800F6764(0x60);
    func_800F8274(0x45);
    func_800F4B1C();
    func_800F8378(0x60);
    func_800F5520(func_800F3C3C(0x45));
    if (func_800F53D4() != 0)
        goto L12C948;
    func_800F9660(0x20);
    func_801221EC();
    return;
L12C948:
    func_800F9660(0x20);
    func_800F7500();
    func_8012C2F8();
    func_8012C980();
    return;
}
