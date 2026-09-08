#include "common.h"
void func_8015A374(void)
{
    /* options value table: 0x3558/0x2060/0x2061/0x203B texts, 0xA9/
       0xAA windows, 80152CDC header; the 10-entry jr-a0 dispatch picks
       8015A524 / 8015A5B8 / 8015A670 / 8015A784 / 8015A89C /
       8015A91C / 8015A9BC / 8015AA6C / 8015A614; the table tail runs
       on the selected value-row and returns at L15A514. */
    func_800F8F74(0x3558);
    func_800F5574(5);
    if (func_800F53C0() == 0)
        goto L15A3A8;
    func_800F6240(0x3558);
L15A3A8:
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F6B68(0x2060);
    func_800F824C(0xA9);
    func_800F6B68(0x2061);
    func_800F824C(0xAA);
    func_800F6B68(0x203B);
    func_800F8E50();
    func_800F9330();
    func_800F6630(0xD6);
    func_800F5140();
    func_800F4F4C();
    func_800F95A0();
    return;
}
