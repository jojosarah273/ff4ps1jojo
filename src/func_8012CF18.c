#include "common.h"
void func_8012CF18(void)
{
    /* config sub-menu (file save): 0x45 window, 0x1B3B text, 0x15C0
       wait gate; 8012D204 cursor, 8012C250/80120A0C/801210AC/8011FB74/
       8012FBB0/80120B6C/80169170/801240A8/801263F0 renders; loops at
       L12CF28/L12CFE0/L12D030. */
    func_800F8FB8(0x45);
L12cf28:
    for (;;) {
        func_800F6630(0x45);
        func_8012D204();
        func_800F5574(3);
        if (func_800F53D4() != 0)
            goto L12CFA8;
        func_800F5574(0x11);
        if (func_800F53D4() != 0)
            goto L12CFA8;
        func_800F62BC(0x45);
        func_800F6630(0x45);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        goto L12CF90;
    L12CFA8:
        func_800F824C(0xED);
        func_800F6564(0x1B3B);
        func_800F5480();
        func_800F8058(0xB6);
        func_800F824C(0x45);
        func_800F9660(0x10);
        func_800F756C(0x41);
    L12cfe0:
        for (;;) {
            func_800F6D40(0x15C0);
            if (func_800F54D4(func_800F3C3C(0x45)) != 0)
                goto L12CF90;
            func_800F6390();
            func_800F59F4(0x18);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F756C(0x41);
    L12d030:
        for (;;) {
            func_800F6D40(0x15C0);
            if (func_800F6434(2) != 0)
                goto L12D068;
            func_800F6390();
            func_800F59F4(0x18);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
    L12D068:
        func_800F6630(0x45);
        func_800F8930(0x15C0);
        func_800F9200();
        func_800F9644(0x10);
        func_801210AC();
        func_800F7500();
        func_8011FB74();
        func_800F7500(0x29A);
        func_800F6630(0xED);
        func_80120A0C();
        func_800F6240(0x1BC8);
        func_800F93DC();
        func_800F71DC(0x39A);
        func_8012FBB0();
        func_800F8F74(0x1BC8);
        func_80120B6C();
        func_80169170();
        func_801240A8();
        func_801263F0();
        func_800F9644(0x10);
        return;
    L12CF90:
        func_800F9644(0x10);
        func_8012C250();
        return;
    }
}
