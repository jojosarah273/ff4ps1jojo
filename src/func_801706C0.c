#include "common.h"
void func_801706C0(void)
{
    /* shop buy-flow: 0xFD8 gate, 80170884 detail; alt renders the 0x47/
       0x45/0x1800 rows (3C/3D/3E/0x20/0x21 windows) and commits through
       800F9868; exit at L170874. */
    func_800F6564(0xFD8);
    if (func_800F6434(2) != 0)
        goto L17079C;
    func_800F5574(0xF);
    if (func_800F53D4() != 0)
        goto L17079C;
    func_80170884();
    func_800F8F74(0x420B);
    func_800F6564(0xFD8);
    func_800F5140();
    func_800F6C68();
    func_800F8188(0x4302);
    func_800F6C68();
    func_800F8188(0x4303);
    func_800F6564(0xFD8);
    func_800F6C68();
    func_800F8188(0x4304);
    func_8017091C();
    return;
L17079C:
    func_800F71DC();
    func_800F8D6C(0x47);
    func_800F71DC(0x2400);
    func_800F8D6C(0x45);
    func_800F654C(0x15);
    func_800F824C(0x3C);
    func_800F65C8();
    func_800F824C(0x3D);
    func_800F65C8();
    func_800F824C(0x3E);
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F8F74(0x420B);
    func_800F654C(1);
    func_800F8188(0x4300);
    func_800F654C(0x18);
    func_800F8188(0x4301);
    func_800F6630(0x3C);
    func_800F8188(0x4304);
    func_800F7270(0x47);
    func_800F8D00(0x2116);
    func_800F7270(0x3D);
    func_800F8D00(0x4302);
    func_800F7270(0x45);
    func_800F8D00(0x4305);
    func_800F9868();
    return;
}
