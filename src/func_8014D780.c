#include "common.h"
void func_8014D780(void)
{
    /* battle item flow: 4248(8)/4120(2) gate routes to 8014D748 rows
       vs the 0x20/0x4200 alt rows; L14D7F8 renders 6CF4/81B0 cells and
       closes with the 0x7/0x1D9 stat writes. */
    func_800F9330();
    func_800F9200();
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto L14D8DC;
    func_800F93DC();
    func_800F9200();
    func_800F4248(0xF0);
    if (func_800F4120(0x202) != 0)
        goto L14D7F8;
    func_8014D748();
    func_800F93DC();
    func_800F95A0();
    return;
L14D7F8:
    func_800F9644(0x20);
    func_800F6CF4();
    func_800F81B0();
    func_800F971C();
    func_800F9660(0x20);
    func_800F93DC();
    func_800F4248(7);
    func_800F8188();
    func_800F6240();
    func_800F8F74();
    func_800F8F74();
    func_800F95A0();
    return;
L14D8DC:
    func_800F93DC();
    func_800F9200();
    func_800F4248(0xE0);
    func_800F8188();
    func_800F93DC();
    func_800F9200();
    func_800F654C(0x1F);
    func_800F8188();
    func_800F8188();
    func_800F8188();
    func_800F8F74();
    func_800F8F74();
    func_800F93DC();
    func_800F4248(7);
    func_800F8188();
    func_800F95A0();
    return;
}
