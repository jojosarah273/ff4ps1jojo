#include "common.h"
void func_8016D798(void)
{
    /* config rows: 0x3C/0x39/0x60/0x57 windows; gate 5574(0x42)
       routes the 82EC cell fills. */
    func_800F5574(0x42);
    if (func_800F53C0() != 0)
        goto L16D7E0;
    func_800F82EC(0x3C);
    func_800F654C(0xFF);
    func_800F82EC(0x39);
    func_800F63BC();
    return;
L16D7E0:
    func_800F5480();
    func_800F8058(0xF);
    func_800F5140();
    func_800F6C68();
    func_800F82EC(0x39);
    func_800F6C68();
    func_800F82EC(0x3C);
    func_800F63BC();
    return;
}
