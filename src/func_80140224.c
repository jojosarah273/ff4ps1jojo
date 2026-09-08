#include "common.h"
void func_80140224(void)
{
    /* battle rows: 2x4 87DC cell sets (0x7612-0x77B6 and +2); loop
       L140260 on 5958(0x8C). */
    func_800F658C();
    func_800F8274();
    func_800F971C();
L140260:
    for (;;) {
        func_800F6658();
        func_800F87DC(0x7612);
        func_800F87DC(0x769E);
        func_800F87DC(0x772A);
        func_800F87DC(0x77B6);
        func_800F6658(2);
        func_800F87DC(0x7614);
        func_800F87DC(0x76A0);
        func_800F87DC(0x772C);
        func_800F87DC(0x77B8);
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F5958(0x8C);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F9660(0x20);
    func_800F95A0();
    return;
}
