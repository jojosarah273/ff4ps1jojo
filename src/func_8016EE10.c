#include "common.h"
void func_8016EE10(void)
{
    /* shop rows: 0xA1/0xA3 windows, 0x64/0x6A/0x6B texts, 8016EF88
       row; linear. */
    func_800F9644(0x10);
    func_800F9660(0x20);
    func_800F926C();
    func_800F9298();
    func_800F71DC(8);
    func_800F8D00(0xA1);
    func_800F71DC();
    func_800F8D00(0xA3);
    func_800F654C(1);
    func_800F81E8(0x64);
    func_800F654C(0x80);
    func_800F81E8(0x6A);
    func_800F654C(0xA);
    func_800F81E8(0x6B);
    func_8016EF88();
    return;
}
