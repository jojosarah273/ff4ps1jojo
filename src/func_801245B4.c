#include "common.h"
void func_801245B4(void)
{
    /* rows: 5574(0x42) gate fills via 3D48/95A0; else 0xFF/95A0. */
    func_800F9330();
    func_800F5574(0x42);
    if (func_800F53C0() != 0)
        goto L124664;
    func_800F5480();
    func_800F8058(0xF);
    func_800F5140();
    func_800F4F4C();
    func_800F3D48();
    func_800F654C();
    func_800F3D48();
    func_800F6C68();
    func_800F3D48();
    func_800F6C68();
    func_800F3D48();
    func_800F95A0();
    return;
L124664:
    func_800F3D48();
    func_800F654C(0xFF);
    func_800F95A0();
    return;
}
