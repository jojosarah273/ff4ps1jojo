#include "common.h"
void func_8015B284(void)
{
    /* config row: 0x353D text, 0xE5/0x82/0xAB/0xAC windows,
       801526F8 header; 5574 ladders (0x6D/0xDE/0xB0) route the
       43A0(0xA9)/41E8(0x202) gates. */
    func_800F8F74(0x353D);
    func_800F5574(0x6D);
    if (func_800F53C0() == 0)
        goto L15B2EC;
    func_800F5574(0xDE);
    if (func_800F53C0() != 0)
        goto L15B3C4;
    func_800F5574(0xB0);
    if (func_800F53C0() == 0)
        goto L15B3C4;
    if (func_800F53C0() != 0)
        goto L15B3CC;
L15B2EC:
    func_800F8D6C(0xE5);
    func_800F71DC();
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(8);
    func_801526F8();
    func_800F6564(0x28A2);
    func_800F4248(0x1F);
    func_800F5140();
    func_800F6C68();
    func_800F824C(0xAB);
    func_800F6C68();
    func_800F824C(0xAC);
    func_800F9644(0x20);
    func_800F6658(0xAB);
    func_800F43A0(0xA9);
    func_800F9660(0x20);
    if (func_800F41E8(0x202) != 0)
        goto L15B3CC;
L15B3C4:
    func_800F6240(0x353D);
    goto L15B3CC;
L15B3CC:
    func_800F9644(0x20);
    func_800F971C();
    func_800F9660(0x20);
    return;
}
