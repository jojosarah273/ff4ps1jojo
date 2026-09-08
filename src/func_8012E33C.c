#include "common.h"
void func_8012E33C(void)
{
    /* formation summary: 0xD9/0xDA windows, 0x43 window cells, 0x1B9C/
       0x1B9F/0x1B9D row texts, 80D0/53C0 gate; 81B0 cell pairs. */
    func_800F6630(0xD9);
    func_800F5140();
    func_800F824C(0x43);
    func_800F7270(0x43);
    func_800F6630(0xDA);
    func_800F5140();
    func_800F824C(0x43);
    func_800F7594(0x43);
    func_800F926C();
    func_800F9448();
    func_800F9644(0x20);
    func_800F5480();
    func_800F80D0();
    if (func_800F53C0() != 0)
        goto L12E540;
    func_800F5480();
    func_800F80D0();
    func_800F9448();
    func_800F3D48();
    func_800F81B0(0x1B9C);
    func_800F6558();
    func_800F81B0(0x1B9F);
    func_800F6558(0x400);
    func_800F81B0(0x1B9D);
    goto L12E590;
L12E540:
    func_800F9448();
    func_800F3D48();
    func_800F81B0(0x1B9C);
    func_800F6558();
    func_800F81B0(0x1B9D);
    func_800F6558(0x400);
    func_800F81B0(0x1B9F);
    goto L12E590;
L12E590:
    func_800F9660(0x20);
    return;
}
