#include "common.h"
void func_8013E73C(void)
{
    /* battle magic rows: 0x4/0x2 windows, 8013E5D0 row, 0x6CD8 gate
       loop L13E7D8, then the L13E864 pair loop on 3F38(3B04) cells. */
    func_800F6564();
    func_800F9330();
    func_800F6C68();
    func_800F824C(4);
    func_8013E5D0();
    func_800F95A0();
    func_800F9330();
    func_800F6C68();
    func_800F971C();
L13e7d8:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x12);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F95A0();
    func_800F6C68();
    func_800F971C();
L13e864:
    for (;;) {
        func_800F6C68();
        func_800F5140();
        func_800F9330();
        func_800F6D70();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F8960();
        func_800F6D70();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F8960();
        func_800F95A0();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0x12);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6240();
    func_800F6564();
    func_800F5574(9);
    if (func_800F53D4() == 0)
        goto L13E974;
    func_800F8F74();
    return;
L13E974:
    return;
}
