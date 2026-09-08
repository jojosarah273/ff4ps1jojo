#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_80140D94(void)
{
    /* battle rows: D54 <- D44; loop on 6B68(0xF476)/8768(0x34C2)/
       6364/5958(8). */
    func_800F971C();
    D_8019ED54[0] = D_8019ED44[0];
    do {
        func_800F6B68(0xF476);
        func_800F8768(0x34C2);
        func_800F6364();
        func_800F5958(8);
    } while (func_800F53D4() == 0);
}
