#include "common.h"
void func_8014588C(void)
{
    /* battle name rows: 80143D64/80143D14/80143E44/80143DB4 rows;
       loop L1458D4 on 5958(0x10) with 6434(2) gate. */
    func_800F971C();
L1458d4:
    for (;;) {
        func_800F9330();
        func_80143D64();
        func_800F95A0();
        func_800F5410();
        func_800F3F38(func_800F3B9C());
        func_800F8768();
        func_800F9330();
        func_80143D14();
        func_800F95A0();
        func_800F5410();
        func_800F3F38(func_800F3B9C());
        func_800F8768();
        func_800F9330();
        func_800F654C(0xC);
        func_80143E44();
        func_800F6564();
        if (func_800F6434(2) != 0)
            goto L145A58;
        func_800F654C(0xFF);
        func_80143DB4();
    L145A58:
        func_800F95A0();
        func_800F63BC();
        func_800F6364();
        func_800F6364();
        func_800F5958(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
