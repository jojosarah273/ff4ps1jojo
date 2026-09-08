#include "common.h"
void func_80141B30(void)
{
    /* battle rows: 80140558/80140310 loop L141B5C on 5958(0x15). */
    func_800F971C();
L141b5c:
    for (;;) {
        func_80140558();
        func_80140310();
        func_800F9644(0x20);
        func_800F658C();
        func_800F5410();
        func_800F4064(8);
        func_800F81B0();
        func_800F971C();
        func_800F9660(0x20);
        func_800F6364();
        func_800F5958(0x15);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
