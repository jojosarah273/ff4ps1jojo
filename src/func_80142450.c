#include "common.h"
void func_80142450(void)
{
    /* battle magic-status: 0x340-0x343 cells, 0x6CC0 gate with
       8058(0x10) alt row; loop L142498 on 5958(8). */
    func_800F971C();
L142498:
    for (;;) {
        func_800F6B68();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F8960(0x340);
        func_800F6B68();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F8960(0x341);
        func_800F6C68();
        func_800F8960(0x342);
        func_800F6564(0x6CC0);
        if (func_800F6434(2) != 0)
            goto L142574;
        func_800F6B68();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F5480();
        func_800F8058(0x10);
        func_800F8960(0x340);
        func_800F654C(0x7F);
        goto L1425A4;
    L142574:
        func_800F6B68();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F8960(0x340);
        func_800F654C(0x3F);
    L1425A4:
        func_800F8960(0x343);
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
