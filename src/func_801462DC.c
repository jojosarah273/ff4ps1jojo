#include "common.h"
void func_801462DC(void)
{
    /* battle item cast: 0x47 window; 6434 gates (0x202/2) route the
       5574(0xB0/0xC0) key ladder and 4248(0x30/0x20) row gates, with
       90EC/8768 cell draws; exits at L14653C. */
    func_800F9330();
    func_800F6630(0x47);
    func_800F6B68();
    if (func_800F6434(0x202) != 0)
        goto L14633C;
    func_800F6B68();
    if (func_800F6434(2) != 0)
        goto L14634C;
L14633C:
    func_800F95A0();
    return;
L14634C:
    func_800F95A0();
    func_800F6B68();
    func_800F4248(0xF);
    func_800F8768();
    func_800F6B68();
    func_800F5574(0xB0);
    if (func_800F53D4() != 0)
        goto L146514;
    func_800F90EC();
    func_800F90EC();
    func_800F5574(0xC0);
    if (func_800F53D4() == 0)
        goto L1463C4;
    func_800F654C(8);
    goto L14645C;
L1463C4:
    func_800F6564();
    if (func_800F6434(0x202) != 0)
        goto L146420;
    func_800F9330();
    func_800F6630(0x47);
    func_800F6C68();
    func_800F95A0();
    goto L14645C;
L146420:
    func_800F9330();
    func_800F6630(0x47);
    func_800F6C68();
    func_800F95A0();
L14645C:
    func_800F8768();
    func_800F6D70();
    func_800F4248(0x30);
    if (func_800F4120(2) != 0)
        goto L1464E4;
    func_800F4248(0x20);
    if (func_800F4120(2) != 0)
        goto L1464C4;
    func_800F6B68();
    func_800F8768();
L1464C4:
    func_800F6B68();
    func_800F5140();
    func_800F8768();
    return;
L1464E4:
    func_800F6B68();
    func_800F8768();
    return;
L146514:
    func_800F6B68();
    func_800F8768();
    return;
}
