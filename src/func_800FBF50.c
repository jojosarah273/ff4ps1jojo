#include "common.h"
void func_800FBF50(void)
{
    /* shop rows: 0x47/0x61 windows, loop L8FBF94 on 4120(0x202);
       4064(8)/8274(0x61) cells. */
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F7270(0x47);
    func_800F7270(0x61);
L8fbf94:
    for (;;) {
        func_800F6C68();
        func_800F6C68();
        func_800F4248(7);
        if (func_800F4120(0x202) != 0)
            continue;
        break;
    }
    func_800F9644(0x20);
    func_800F6658(0x61);
    func_800F5410();
    func_800F4064(8);
    func_800F8274(0x61);
    func_800F971C();
    func_800F3D48();
    func_800F9660(0x20);
    return;
}
