#include "common.h"
void func_8015D1C8(void)
{
    /* options dispatch: 8005A234 prep, 0xD2/0xD3 windows, 0xAB/0x3598/
       0x3535 texts; the 6-entry jr-a0 table selects the value-row:
       8015D310 / 8015D3E8 / 8015D450 / 8015D4C8 / 8015D6C0 /
       8015D878 (returns at L15D300). */
    func_8005A234();
    func_800F6630(0xD2);
    func_80152CDC();
    func_800F6630(0xD3);
    func_800F824C(0xAB);
    func_800F5140();
    func_800F5410();
    func_800F3F38(func_800F3C3C(0xAB));
    func_8015310C();
    func_800F7210(0x3598);
    func_800F8D00(0x3535);
    func_800F6630(0xD3);
    func_800F5140();
    return;
}
