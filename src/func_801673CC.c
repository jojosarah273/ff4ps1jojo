#include "common.h"
void func_801673CC(void)
{
    /* battle row: 0xE/0x1C/0x10 windows, 6434(2) gate routes the
       0x1C cursor read; 63F8/6130 cells, 5574/53D4 ladders. */
    func_800F6630(0xE);
    if (func_800F6434(2) != 0)
        goto L167424;
    func_800F5DA0(0xE);
    func_800F654C(0x31);
    func_800F824C(0x10);
    func_800F654C(0xFF);
    func_800F63F8();
    func_800F5410();
    goto L16751C;
L167424:
    func_800F6EA8(0x1C);
    func_800F5574(0xFE);
    if (func_800F53D4() != 0)
        goto L1674AC;
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto L1674DC;
    func_800F7270(0x1C);
    func_800F6364();
    func_800F8D6C(0x1C);
    func_800F9200();
    func_800F6564();
    func_800F63F8();
    func_800F824C(0x10);
    func_800F93DC();
    func_800F5480();
    goto L16751C;
L1674AC:
    func_800F7270(0x1C);
    func_800F6364();
    func_800F8D6C(0x1C);
    func_800F6EA8(0x1C);
    func_800F5CCC();
    func_800F824C(0xE);
L1674DC:
    func_800F654C(0x31);
    func_800F824C(0x10);
    func_800F654C(0xFF);
    func_800F7270(0x1C);
    func_800F6364();
    func_800F6130();
    func_800F8D6C(0x1C);
    func_800F5410();
    return;
L16751C:
    return;
}
