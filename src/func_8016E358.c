#include "common.h"
void func_8016E358(void)
{
    /* shop memory: 0x7D21 gate, 0x2121/0x2123/0x2127/0x7D24/0x7D1A
       texts, 0x1C window; loop L16E398 (5958(4)) with the 5D24/5B8C
       ladders. */
    func_800F6564(0x7D21);
    if (func_800F6434(0x202) != 0)
        goto L16E410;
    func_800F9644(0x20);
    func_800F71DC(0x1C);
    func_800F658C(0x2121);
    func_800F922C();
L16e398:
    for (;;) {
        func_800F6BE0(0x2103);
        func_800F87DC(0x2105);
        func_800F5E48();
        func_800F5E48();
        func_800F5958(4);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F9410();
    func_800F81B0(0x2109);
    func_800F971C();
    func_800F9660(0x20);
    if (func_800F5D24(0x7D24) != 0)
        goto L16E480;
    func_800F6240(0x7D21);
    goto L16E480;
L16E410:
    if (func_800F5D24(0x7D22) != 0)
        goto L16E480;
    func_800F8F74(0x7D21);
    func_800F8F74(0x7D23);
    func_800F654C(0x1A);
    func_800F8188(0x7D24);
    func_800F6564(0x7D26);
    func_800F6240(0x7D26);
    func_800F6B68();
    func_800F8188(0x7D22);
    return;
L16E480:
    return;
}
