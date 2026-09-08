#include "common.h"
void func_80140CFC(void)
{
    /* battle rows: loop L140D28 on 6B68(0x34C2)/8768(0x34C2)x2/
       6364/5958(8). */
    func_800F971C();
    do {
        func_800F6B68(0x34C2);
        func_800F8768(0x34C2);
        func_800F8768();
        func_800F6364();
        func_800F5958(8);
    } while (func_800F53D4() == 0);
    return;
}
