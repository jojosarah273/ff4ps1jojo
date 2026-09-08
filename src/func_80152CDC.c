#include "common.h"
void func_80152CDC(void)
{
    /* options: 3C3C/3B04(0x2000) gates; 4x 8015240C + 8015236C
       rows. */
    func_800F3C3C();
    func_800F3B04(0x2000);
    func_8015240C();
    func_8015240C();
    func_8015240C();
    func_8015240C();
    func_8015236C();
    return;
}
