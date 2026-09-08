#include "common.h"
void func_800FD494(void)
{
    /* battle vertical-menu: 3D/3E label windows, 0xC0 window row gate,
       0x17EE text with the 60A8(0x202) check; key ladder 0x2B-0xFC
       advances the cursor; closes on 8D6C(0x3D). */
    func_800F824C(0x3D);
    func_800F8FB8(0x3E);
    func_800F4F28(func_800F3C3C(0x3D));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F4F28(func_800F3C3C(0x3D));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F4F28(func_800F3C3C(0x3D));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F6630(0xC0);
    if (func_800F6434(0x202) != 0)
        goto LFD5B0;
    func_800F6630(0x87);
    func_800F9690();
    func_800F6C68();
    func_800F5410();
    func_800F3F38(func_800F3B04(0x17EE));
    func_800F62BC(0x87);
    if (func_800F60A8(0x202) != 0)
        goto LFD5B8;
    func_800F6564(0x17EE);
    func_800F5410();
    func_800F4008(0x11);
    func_800F8188(0x17EE);
    goto LFD5B8;
LFD5B0:
    func_800F654C(0xFF);
LFD5B8:
    func_800F7270(0x3D);
    func_800F5574(0x2B);
    if (func_800F53C0() == 0)
        goto LFD6A0;
    func_800F6364();
    func_800F5574(0x56);
    if (func_800F53C0() == 0)
        goto LFD6A0;
    func_800F6364();
    func_800F5574(0x81);
    if (func_800F53C0() == 0)
        goto LFD6A0;
    func_800F6364();
    func_800F5574(0xAC);
    if (func_800F53C0() == 0)
        goto LFD6A0;
    func_800F6364();
    func_800F5574(0xCC);
    if (func_800F53C0() == 0)
        goto LFD6A0;
    func_800F6364();
    func_800F5574(0xEC);
    if (func_800F53C0() == 0)
        goto LFD6A0;
    func_800F6364();
    func_800F5574(0xFC);
    if (func_800F53C0() == 0)
        goto LFD6A0;
    func_800F6364();
LFD6A0:
    func_800F8D6C(0x3D);
    return;
}
