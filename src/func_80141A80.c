#include "common.h"
void func_80141A80(void)
{
    /* battle rows: 80140558/80140310 loop L141AB8 on 5958(0x14),
       with 80D0(8)/81B0 cells. */
    func_800F971C();
    func_800F8D00();
    func_800F8D00();
L141ab8:
    for (;;) {
        func_80140558();
        func_80140310();
        func_800F9644(0x20);
        func_800F658C();
        func_800F5480();
        func_800F80D0(8);
        func_800F81B0();
        func_800F971C();
        func_800F9660(0x20);
        func_800F6364();
        func_800F5958(0x14);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
