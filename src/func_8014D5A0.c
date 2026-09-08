#include "common.h"
void func_8014D5A0(void)
{
    /* battle confirm: 5574(0x31/0x33)/6434(0x80) gates pick the
       0x80/0xC0/0x40 colors, 80177DAC commit. */
    func_800F9200();
    func_800F5574(0x31);
    if (func_800F53D4() != 0)
        goto L14D5E0;
    func_800F5574(0x33);
    if (func_800F53D4() == 0)
        goto L14D5F0;
L14D5E0:
    func_800F654C(0x80);
    goto L14D620;
L14D5F0:
    func_800F6564();
    if (func_800F6434(0x80) != 0)
        goto L14D618;
    func_800F654C(0xC0);
    goto L14D620;
L14D618:
    func_800F654C(0x40);
L14D620:
    func_800F8188();
    func_800F93DC();
    func_800F8188();
    func_800F654C(0xFF);
    func_800F8188();
    func_800F654C(2);
    func_800F8188();
    func_80177DAC();
    func_800F960C();
    func_800F95A0();
    return;
}
