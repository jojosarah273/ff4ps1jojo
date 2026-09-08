#include "common.h"
void func_80115080(void)
{
    /* battle rows: 0x7A window + 0x1F/0x70 reads, 0x2C/0x2D/0x2E/0x2F
       windows. */
    func_800F6630(0x7A);
    func_800F4248(0x1F);
    func_800F6C68();
    func_800F5410();
    func_800F4008(0x70);
    func_800F824C(0x2C);
    func_800F8FB8(0x2D);
    func_800F654C(0x50);
    func_800F824C(0x2E);
    func_800F8FB8(0x2F);
    return;
}
