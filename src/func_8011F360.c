#include "common.h"
void func_8011F360(void)
{
    /* rows: 0x45 window; loop L11F370 on 5480/53C0; closes via
       6434(0x202)/4008(0x80) gates. */
    func_800F8FB8(0x45);
L11f370:
    for (;;) {
        func_800F5480();
        func_800F8058(0xA);
        if (func_800F53C0() != 0)
            goto L11F3A0;
        func_800F62BC(0x45);
    }
L11F3A0:
    func_800F4008(0x8A);
    func_800F3D48();
    func_800F6630(0x45);
    if (func_800F6434(0x202) != 0)
        goto L11F3D8;
    func_800F654C(0xFF);
    return;
L11F3D8:
    func_800F5410();
    func_800F4008(0x80);
    return;
}
