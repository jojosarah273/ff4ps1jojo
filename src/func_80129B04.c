#include "common.h"
void func_80129B04(void)
{
    /* rows: 0x41/0x60/0x45/0x5D windows, 3F38(3C3C(0x45)) +
       3F38(3A70(0x5D)) reads; v1/v0 gates route the L129BF8 etc
       tails; 5574 close. */
    func_800F939C();
    func_800F7594(0x41);
    func_800F6E30(0x60);
    func_800F5140();
    func_800F824C(0x45);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x45));
    func_800F3F38(func_800F3A70(0x5D));
    func_800F3B04();
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_800F7594(0x45);
    /* v1/v0 gates -> L129BD8 / L129BE8 / L129BF8 / L129C0C /
       L129C18 / L129C34 */
    func_800F960C();
    func_800F5574();
    return;
}
