#include "common.h"
void func_8012A8A8(void)
{
    /* config sub-options: 0x5D/0x5E windows, 0x34 window; 8012CB34 page,
       8012AE00 save-load, 8012AB18 detail row; loop L12A8C0. */
    func_800F8FB8(0x5D);
    func_800F8FB8(0x5E);
L12a8c0:
    for (;;) {
        func_800F6E30(0x5A);
        if (func_800F6434(2) != 0)
            goto L12AA20;
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            goto L12A900;
        func_8012CB34();
        goto L12AA20;
    L12A900:
        func_800F7500(1);
        func_800F66D8(0x5A);
        if (func_800F6434(2) != 0)
            goto L12AA20;
        func_800F824C(0x5C);
        func_800F654C();
        func_800F3D48();
        func_800F6E30(0x5A);
        func_800F5574(0xED);
        if (func_800F53D4() != 0)
            goto L12A970;
        func_800F5574(0xFE);
        if (func_800F53D4() == 0)
            goto L12A9A0;
    L12A970:
        func_800F6564(0x1BC9);
        if (func_800F6434(2) != 0)
            goto L12A9A0;
        func_800F6630(0x34);
        func_800F824C(0xDB);
        goto L12A9B0;
    L12A9A0:
        func_800F6E30(0x5A);
        func_8012AE00();
    L12A9B0:
        func_800F9644(0x20);
        func_800F6658(0x5D);
        func_800F7894();
        func_800F516C();
        func_800F5050();
        func_800F4064(4);
        func_800F9660(0x20);
        func_8012AB18();
    L12AA20:
        func_800F9644(0x20);
        func_800F62F0(0x5A);
        func_800F62F0(0x5A);
        func_800F9660(0x20);
        func_800F62BC(0x5D);
        func_800F6630(0x5D);
        if (func_800F54D4(func_800F3C3C(0xE1)) == 0)
            continue;
        break;
    }
    return;
}
