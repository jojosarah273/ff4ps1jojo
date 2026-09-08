#include "common.h"
void func_80110B08(void)
{
    /* battle rows: 0x68/0x78 windows, 0x300-0x307 text cells with
       0x7A window reads. */
    func_800F654C(0x68);
    func_800F8188(0x300);
    func_800F654C(0x78);
    func_800F8188(0x304);
    func_800F8188(0x301);
    func_800F8188(0x305);
    func_800F6630(0x7A);
    func_800F4248(2);
    func_800F5410();
    func_800F4008(0xE4);
    func_800F8188(0x302);
    func_800F8188(0x306);
    func_800F654C(0x37);
    func_800F8188(0x303);
    func_800F8188(0x307);
    return;
}
