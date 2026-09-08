#include "common.h"
void func_801700BC(void)
{
    /* rows: 4x 6658/87DC cell pairs (0x3319/0x371B/0x331B/0x3719);
       loop L1700F8 on 5958(0x400). */
    func_800F9330();
    func_800F9644(0x20);
    func_800F971C();
L1700f8:
    for (;;) {
        func_800F6658();
        func_800F87DC(0x3319);
        func_800F6658(6);
        func_800F87DC(0x371B);
        func_800F6658(2);
        func_800F87DC(0x331B);
        func_800F6658(4);
        func_800F87DC(0x3719);
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F5958(0x400);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F9660(0x20);
    func_800F95A0();
    return;
}
