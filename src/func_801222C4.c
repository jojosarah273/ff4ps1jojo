#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_801222C4(void)
{
    /* rows: u16 D44<->D54 swap with 922C prep + 9410 close. */
    func_800F9644(0x20);
    func_800F922C();
    D_8019ED44[0] = D_8019ED54[0];
    func_800F5410();
    func_800F4064(0x40);
    D_8019ED54[0] = D_8019ED44[0];
    func_800F9410();
    func_800F9660(0x20);
}
