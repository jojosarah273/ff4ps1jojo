#include "common.h"
void func_80176C6C(void)
{
    /* shop row: 0x43 window; 4264(0x1FFF)/4064 + 4264(0xFFF)/4064
       (0x7F/0x7E7E) value cells. */
    func_800F824C(0x43);
    func_800F9644(0x20);
    func_800F6658(0x43);
    func_800F3D48();
    func_800F7894();
    func_800F922C();
    func_800F5410();
    func_800F4264(0x1FFF);
    func_800F5410();
    func_800F4064();
    func_800F9410();
    func_800F5410();
    func_800F4264(0xFFF);
    func_800F5410();
    func_800F4064(0x7F);
    func_800F6558();
    func_800F3D64(0x7E7E);
    func_800F9660(0x20);
    return;
}
