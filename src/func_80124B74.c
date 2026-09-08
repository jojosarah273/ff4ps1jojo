#include "common.h"
void func_80124B74(void)
{
    /* shop rows: 0x73/0x75 windows, 0x163 text, 0x1D window, 80124C64
       row; loops L124B9C (5958(7)) and L124BCC (78C4 cells). */
    func_800F8D6C(0x73);
    func_800F824C(0x75);
    func_800F654C(0xFF);
    func_800F7270(0x41);
L124b9c:
    for (;;) {
        func_800F8768(0x163);
        func_800F6364();
        func_800F5958(7);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F7594(0x41);
L124bcc:
    for (;;) {
        func_80124C64();
        func_800F6630(0x1D);
        func_800F8960(0x163);
        func_800F63BC();
        func_800F6630(0x73);
        func_800F78C4(func_800F3C3C(0x74));
        func_800F78C4(func_800F3C3C(0x75));
        if (func_800F7918(2) != 0)
            goto L124C54;
        func_800F5A90(7);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
L124C54:
    return;
}
