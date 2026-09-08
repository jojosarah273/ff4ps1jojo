#include "common.h"
void func_8016C78C(void)
{
    /* shop rows: 0x2000/0x2A/0x28 cells, 0x4F window; 4264(0x1FF)
       + 3F38(3C3C(0x28)) reads. */
    func_800F6BE0(0x2000);
    func_800F4264(0x1FF);
    func_800F8274(0x2A);
    func_800F971C();
    func_800F9660(0x20);
    func_800F6630(0x2A);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x28));
    func_800F6C68();
    func_800F5410();
    func_800F4008(0x10);
    func_800F824C(0x4F);
    return;
}
