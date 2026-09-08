#include "common.h"
void func_80143668(void)
{
    /* battle rows: 0x1F/0x34C3/0x48 windows, 8014A488 row; loop
       L1436A4 on 5574(0xFF)/5958(8). */
    func_800F654C(0x1F);
    func_8014A488();
    func_800F971C();
L1436a4:
    for (;;) {
        func_800F6B68();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L143708;
        func_800F8188(0x34C3);
        func_800F8188(0x48);
        func_800F9330();
        func_800F654C(0x1F);
        func_8014A488();
        func_800F95A0();
    L143708:
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
