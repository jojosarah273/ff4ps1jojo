#include "common.h"
void func_80142CB4(void)
{
    /* battle rows: 80142E34 prep; loops L142CE8 (43E44 + 7F48
       cells) and L142CBC (54D4 gate). */
L142cbc:
    for (;;) {
        func_80142E34();
        func_800F971C();
    L142ce8:
        for (;;) {
            func_800F654C(8);
            func_80143E44();
            func_800F6B68();
            if (func_800F6434(2) != 0)
                goto L142D30;
            func_800F5480();
            func_800F7F48(func_800F3B04());
            func_800F8768();
        L142D30:
            func_800F6B68();
            if (func_800F6434(2) != 0)
                goto L142D68;
            func_800F5480();
            func_800F7F48(func_800F3B04());
            func_800F8768();
        L142D68:
            func_800F6364();
            func_800F5958(8);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F6564();
        if (func_800F54D4(func_800F3B04()) == 0)
            continue;
        break;
    }
    return;
}
