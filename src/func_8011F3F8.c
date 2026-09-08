#include "common.h"
void func_8011F3F8(void)
{
    /* shared scroll-column: 0x5A window, 0x3E8/0x4200 gates, 0x15B/0x15D
       texts, 0x5E window cells; L11F430 wait loop, then the 8011F67C
       icon rows, 0x5A/0x5B/0x5D confirm cells, 960C/95A0 close. */
    func_800F9330();
    func_800F939C();
    func_800F9644(0x20);
    func_800F71DC(0x7F);
    func_800F8D6C(0x5A);
L11f430:
    for (;;) {
        func_800F62F0(0x5A);
        func_800F5480();
        func_800F80D0(0x3E8);
        if (func_800F53FC() != 0)
            break;
    }
    func_800F5410();
    func_800F4064(0x3E8);
    func_800F9298();
    func_800F71DC(0x4200);
    func_800F9330();
    func_800F94B8();
    func_800F9660(0x20);
    func_8011F67C();
    func_800F6630(0x14);
    func_800F5410();
    func_800F4008(0x80);
    func_800F81E8(0x15B);
    func_800F6630(0x16);
    func_800F971C();
    func_8011F67C();
    func_800F6630(0x14);
    func_800F5410();
    func_800F4008(0x80);
    func_800F81E8(0x15D);
    func_800F6630(0x16);
    func_800F94B8();
    func_800F5410();
    func_800F4008(0x80);
    func_800F824C(0x5E);
    func_800F6630(0x5A);
    func_800F5574(0x80);
    if (func_800F53D4() == 0)
        goto L11F654;
    func_800F654C(0xFF);
    func_800F824C(0x5A);
    func_800F6630(0x5B);
    func_800F5574(0x80);
    if (func_800F53D4() == 0)
        goto L11F654;
    func_800F654C(0xFF);
    func_800F824C(0x5B);
    func_800F6630(0x5D);
    func_800F5574(0x80);
    if (func_800F53D4() == 0)
        goto L11F654;
    func_800F654C(0xFF);
    func_800F824C(0x5D);
L11F654:
    func_800F960C();
    func_800F95A0();
    return;
}
