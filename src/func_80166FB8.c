#include "common.h"
void func_80166FB8(void)
{
    /* options rows: 0x2001/0x41 cell; 5574(0xF) gate picks the
       5CCC vs 8768 paths. */
    func_800F9330();
    func_800F9644(0x20);
    func_800F971C();
    func_800F9660(0x20);
    func_800F6B68(0x2001);
    func_800F4248(0x1F);
    func_800F5574(0xF);
    if (func_800F53D4() == 0)
        goto L167054;
    func_800F5CCC();
L167054:
    func_800F95A0();
    func_800F8768();
    return;
}
