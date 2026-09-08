#include "common.h"
void func_80167BA0(void)
{
    /* battle cast driver: 80167DD4 anim rows, 8014096C cast, 80167E44
       status block; loops L167BDC/L167C20/L167C70/L167CB0/L167D24. */
    func_800F654C(0x20);
    func_800F8188();
    func_800F971C();
L167bdc:
    for (;;) {
        func_80167DD4();
        func_800F5958(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F971C();
    func_800F5CCC();
L167c20:
    for (;;) {
        func_800F8768();
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F8F74();
    func_8014096C();
    func_800F654C(2);
    func_800F8188();
L167c68:
    func_800F71DC(4);
L167c70:
    for (;;) {
        func_80070174();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F6240();
    func_80167E44();
    func_800F8F74();
    func_800F71DC(0x16);
L167cb0:
    for (;;) {
        func_800F6B68();
        func_800F8768();
        func_800F5E48();
        func_800F5958(0xF);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6564();
    func_800F61E8();
    func_800F4248(7);
    func_800F8188();
    func_800F971C();
L167d24:
    for (;;) {
        func_800F6B68();
        if (func_800F6434(0x202) != 0)
            goto L167D84;
        func_800F9330();
        func_800F5140();
        func_80167DD4();
        func_800F95A0();
    L167D84:
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F5D24();
    if (func_800F5B8C(0x202) != 0)
        goto L167C68;
    func_800F8F74();
    return;
}
