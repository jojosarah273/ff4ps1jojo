#include "common.h"
void func_80148FC0(void)
{
    /* battle rows: 0x26/0x2B windows, 80072720 row; gates 6434/
       60A8/6434(0x80) route the 5480/5410 tails. */
    func_800F6C68();
    if (func_800F6434() != 0)
        goto L14906C;
    func_800F824C(0x26);
    func_80072720();
    func_800F6630(0x2B);
    func_800F61E8();
    if (func_800F60A8() != 0)
        goto L149094;
L14905C:
    func_800F5480();
    return;
L14906C:
    func_800F824C(0x26);
    func_80072720();
    func_800F6630(0x2B);
    if (func_800F6434(0x80) != 0)
        goto L14905C;
L149094:
    func_800F5410();
    return;
}
