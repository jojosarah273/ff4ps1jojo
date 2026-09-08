#include "common.h"
extern u8 *D_8019ED40;
void func_80109378(void)
{
    /* battle: key 0x42; on 53C0()==0 latch 0x42 into D40. */
    func_800F5574(0x42);
    if (func_800F53C0() == 0)
        D_8019ED40[0] = 0x42;
}
