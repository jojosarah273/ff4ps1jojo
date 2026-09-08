#include "common.h"
void func_8014D080(void)
{
    /* battle cast rows: 801495D4/80074B98 preps, 4FAC(0x101) gate
       loop L14D0A0, 80073EB0/800744A0/800999A0/801495F4 close. */
    func_801495D4();
    func_80074B98();
    func_800F71DC();
L14d0a0:
    for (;;) {
        func_800F3B04();
        func_800F4F28();
        if (func_800F4FAC(0x101) != 0)
            goto L14D104;
        func_800F8188();
        func_800F654C(7);
        func_800F8188();
        func_800F9330();
        func_80073EB0();
        func_800F95A0();
    L14D104:
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800744A0();
    func_800999A0();
    func_801495F4();
    return;
}
