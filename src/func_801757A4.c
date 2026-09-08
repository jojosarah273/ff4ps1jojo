#include "common.h"
void func_801757A4(void)
{
    /* shop rows: 0xCDB/0xBD5 cells, 4264/7894 values; loop L1757BC
       on 5958(0x100). */
    func_800F9644(0x20);
    func_800F71DC();
L1757bc:
    for (;;) {
        func_800F6BE0(0xCDB);
        func_800F4264();
        func_800F7894();
        func_800F87DC(0xBD5);
        func_800F6364();
        func_800F6364();
        func_800F5958(0x100);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6558();
    func_800F9660(0x20);
    return;
}
