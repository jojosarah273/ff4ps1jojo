#include "common.h"
void func_80115A34(void)
{
    /* battle items: 0xAD/0x7A/0xC/0xD/0xE windows, 0x350-0x35B cells,
       801714C4 picker; 5574(0x20) gate, 7728(0x101) check; two
       detail blocks (4120(2) gates). */
    func_800F6630(0xAD);
    func_800F5574(0x20);
    if (func_800F53D4() != 0)
        goto L115A7C;
    func_800F6630(0x7A);
    func_800F7864();
    if (func_800F7728(0x101) == 0)
        goto L115BBC;
L115A7C:
    func_800F6630(0xAD);
    func_800F5480();
    func_800F8058(0x10);
    func_800F4248(0xFC);
    func_800F6630(0xC);
    func_800F8960(0x350);
    func_800F6630(0xD);
    func_800F4248(1);
    if (func_800F4120(2) != 0)
        goto L115AF4;
    func_800F654C(0x14);
    func_801714C4();
L115AF4:
    func_800F6630(0xE);
    func_800F8960(0x351);
    func_800F6C68();
    func_800F8960(0x352);
    func_800F6C68();
    func_800F8960(0x353);
    func_800F6630(0xC);
    func_800F5410();
    func_800F4008(8);
    func_800F8960(0x354);
    func_800F6630(0xD);
    func_800F4008();
    func_800F4248(1);
    if (func_800F4120(2) != 0)
        goto L115B84;
    func_800F654C(0x15);
    func_801714C4();
L115B84:
    func_800F6630(0xE);
    func_800F8960(0x355);
    func_800F6C68();
    func_800F8960(0x356);
    func_800F6C68();
    func_800F8960(0x357);
    return;
L115BBC:
    return;
}
