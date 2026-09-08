#include "common.h"
void func_8012EAC0(void)
{
    /* formation row: 0x1D/0x23/0x25/0x21 windows; loops L12EAC8
       (6434(0x514)/5A90 gates) and L12EB10 (8A18 cell reads). */
L12eac8:
    for (;;) {
        func_800F7270(0x1D);
        func_800F6364();
        func_800F8D6C(0x23);
        func_800F6E30(0x1D);
        if (func_800F6434(0x202) != 0)
            goto L12EBA8;
        func_800F7594(0x1D);
        func_800F63BC();
        func_800F63BC();
    L12eb10:
        for (;;) {
            func_800F6D70();
            if (func_800F6434(2) != 0)
                goto L12EB78;
            func_800F5574(0xFE);
            if (func_800F53C0() != 0)
                goto L12EB78;
            func_800F8A18(0x1D);
            func_800F6D70(1);
            func_800F8A18(0x23);
            func_800F654C();
            func_800F8960();
            func_800F8960(1);
            goto L12EBA8;
        L12EB78:
            func_800F63BC();
            func_800F63BC();
            if (func_800F5804(func_800F3C3C(0x25)) == 0)
                continue;
            break;
        }
    L12EBA8:
        func_800F7270(0x1D);
        func_800F6364();
        func_800F6364();
        func_800F8D6C(0x1D);
        if (func_800F56AC(func_800F3C3C(0x21)) == 0)
            continue;
        break;
    }
    return;
}
