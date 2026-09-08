#include "common.h"
void func_80169A18(void)
{
    /* config map-name screen: 0x64/0x2/0x4/0x6 windows, 0x3D1E/0x7D1B/
       0x7D19/0x7D1E/0x7D1D texts, 80169958/8016D4D8 rows; loops
       L169B10/L169B34/L169C04. */
    func_800F6630(0x64);
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto L169AC0;
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto L169A70;
    func_80169958();
    return;
L169A70:
    func_800F71DC(0x3D1E);
    func_800F8D00(0x7D1B);
    func_800F71DC();
    func_800F8D00(0x7D19);
    func_800F654C(0x13);
    func_800F8188(0x7D1E);
    func_800F654C(0x80);
    func_800F8188(0x7D1D);
    func_8016D4D8();
    return;
L169AC0:
    func_800F971C();
    func_800F7500(0x3D19);
    func_800F8EBC(6);
    func_800F654C(6);
    func_800F824C(2);
    func_800F654C(1);
    func_800F824C(4);
L169b10:
    for (;;) {
        func_800F971C();
    L169b34:
        for (;;) {
            func_800F6630(4);
            func_800F82EC(6);
            func_800F62BC(4);
            func_800F63BC();
            func_800F6364();
            func_800F5A90(5);
            if (func_800F53D4() != 0)
                break;
        }
        func_800F9644(0x20);
        func_800F6658(6);
        func_800F5410();
        func_800F4064(0x80);
        func_800F8274(6);
        func_800F971C();
        func_800F9660(0x20);
        func_800F5DA0(2);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F81E8(0x2115);
L169c04:
    for (;;) {
        func_800F6B68(0x3D19);
        func_800F6364();
        func_800F5958(0x4000);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F654C(0x80);
    func_800F81E8(0x2115);
    return;
}
