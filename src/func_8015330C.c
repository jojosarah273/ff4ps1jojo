#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_8015330C(void)
{
    /* rows: u16 D44<->D54 swap chain with 5410/971C. */
    func_800F9644(0x20);
    D_8019ED44[0] = D_8019ED54[0];
    func_800F5410();
    func_800F4064(0x80);
    D_8019ED54[0] = D_8019ED44[0];
    func_800F971C();
    func_800F9660(0x20);
}
