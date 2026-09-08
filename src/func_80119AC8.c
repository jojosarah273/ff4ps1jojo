#include "common.h"
void func_80119AC8(void)
{
    /* battle rows: 8010D9D4 prep; gates 5574(0x80); 0x5C/0x5D/0x60/
       0x61 window rows. */
    func_8010D9D4();
    func_800F5574(0x80);
    if (func_800F53C0() != 0)
        return;
    func_800F6630(0x5C);
    func_800F5410();
    func_800F4008(8);
    func_800F6630(0x5D);
    func_800F4008();
    func_800F6630(0x60);
    func_800F5410();
    func_800F4008(8);
    func_800F6630(0x61);
    func_800F4008();
    return;
}
