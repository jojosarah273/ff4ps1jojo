#include "common.h"
void func_80134AF8(void)
{
    /* weapon sub-menu: 0x1B39 text, 0x45/0x48/0x49/0xE5 windows,
       801224D0 row; loop L134BFC (5DD4(0x48)/5C64(2)), gate
       43A0(0x45)/41E8(0x202). */
    func_800F654C();
    func_800F3D48();
    func_800F6564(0x1B39);
    func_800F5574(0xB0);
    if (func_800F53C0() != 0)
        goto L134C44;
    func_800F9644(0x20);
    func_800F9660(0x20);
    func_800F6C68();
    func_800F4248(0x1F);
    func_800F5140();
    func_801224D0();
    func_800F9644(0x20);
    func_800F6CF4();
    func_800F8274(0x45);
    func_800F9660(0x20);
    func_800F7500(1);
    func_800F66D8(0xE5);
    func_800F4248(0xF);
    func_800F61E8();
    func_800F824C(0x48);
    func_800F8FB8(0x49);
    func_800F9644(0x20);
    func_800F6558(1);
L134bfc:
    for (;;) {
        func_800F5DD4(0x48);
        if (func_800F5C64(2) != 0)
            goto L134C24;
        func_800F516C();
    }
L134C24:
    func_800F43A0(0x45);
    if (func_800F41E8(0x202) != 0)
        goto L134C54;
    func_800F9660(0x20);
L134C44:
    func_800F5410();
    return;
L134C54:
    func_800F9660(0x20);
    func_800F5480();
    return;
}
