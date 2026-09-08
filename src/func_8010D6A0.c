#include "common.h"
void func_8010D6A0(void)
{
    /* battle item confirm: 5574 key ladders (0x11/0x30/0x46 codes) pick
       the 0x4A window header color rows, 80170458 shop row render. */
    func_800F5574(0x11);
    if (func_800F53C0() != 0)
        goto L10D6D8;
    goto L10D718;
L10D6D8:
    func_800F5574(0x30);
    if (func_800F53C0() != 0)
        goto L10D728;
    func_800F5480();
    func_800F8058(0x11);
    goto L10D718;
L10D718:
    func_800F71DC(0x3300);
    goto L10D780;
L10D728:
    func_800F5574(0x46);
    if (func_800F53C0() != 0)
        goto L10D768;
    func_800F5480();
    func_800F8058(0x30);
    func_800F5140();
    func_800F71DC(0x6180);
    goto L10D780;
L10D768:
    func_800F5480();
    func_800F8058(0x46);
    func_800F71DC(0x7200);
L10D780:
    func_800F9644(0x20);
    func_800F3D48();
    func_800F8274(0x4A);
    func_800F7894();
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x4A));
    func_800F8274(0x4A);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x4A));
    func_800F5410();
    func_800F4064();
    func_800F8274(0x4A);
    func_800F6558();
    func_800F9660(0x20);
    func_800F6630(0xAE);
    func_800F5140();
    func_800F5410();
    func_800F4008(0x42);
    func_800F824C(0x4D);
    func_800F8FB8(0x4C);
    func_800F71DC(0x200);
    func_800F8D6C(0x4E);
    func_800F654C(0x1B);
    func_800F824C(0x49);
    func_80170458();
    return;
}
