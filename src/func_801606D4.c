#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED58;
extern u16 *D_8019ED54;
void func_801606D4(void)
{
    func_800F6630(0xCE);
    *D_8019ED58 = *D_8019ED44;
    func_800F6630(0xCD);
    func_800F4248(0x7F);
    *D_8019ED54 = *D_8019ED44;
    func_800F654C(0);
    func_800F5480();
    do {
        func_800F7EE8();
        func_800F7D0C();
        func_800F5EA0();
    } while (func_800F5C64(0x8080) != 0);
    func_800F8768(0x3883);
}
