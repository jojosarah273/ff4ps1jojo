#include "common.h"
void func_80149614(void)
{
    /* battle item/statcast: 29B5/38E6/29A4 texts, 0x1800/0x1B7 gates,
       800976A4/801495D4/80166218/80074B98/80099938/801669BC sub-casts
       and the 801495F4/8014D568 commit; loops L149688 and L149810. */
    func_800F6564();
    func_800F5574(0x8C);
    if (func_800F53D4() == 0)
        goto L14964C;
    func_800F8188();
    func_800F8F74();
L14964C:
    func_800F6564();
    if (func_800F6434(0x202) != 0)
        goto L1496EC;
    func_800F971C();
L149688:
    for (;;) {
        func_800F6B68(0x29B5);
        if (func_800F54D4(func_800F3B04()) == 0)
            goto L1496EC;
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() != 0)
            goto L14990C;
    }
L1496EC:
    func_800F6564(0x38E6);
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto L14990C;
    func_800F6564(0x29A4);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto L149764;
    func_800F6564(0x38E6);
    if (func_800F6434(0x202) != 0)
        goto L149764;
    func_800976A4();
    func_801495D4();
    func_80166218();
    goto L1497CC;
L149764:
    func_801495D4();
    func_80074B98();
    func_800F7534(0x1800);
    func_800F5A90(0x1B7);
    if (func_800F53D4() == 0)
        goto L1497EC;
    func_800F6564(0x38E6);
    if (func_800F6434(0x202) != 0)
        goto L1497EC;
    func_800F6240();
    func_80074B70();
    func_80099938();
    func_801669BC();
L1497CC:
    func_801495F4();
    func_800F971C();
    func_8014D568();
    goto L14990C;
L1497EC:
    func_800F971C();
L149810:
    for (;;) {
        func_800F6B68(0x29B5);
        if (func_800F54D4(func_800F3B04()) != 0)
            goto L149894;
        func_800F9330();
        func_800F8188();
        func_800F654C(7);
        func_800F8188();
        func_80073EB0();
        func_800F95A0();
    L149894:
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800744A0();
    func_801495F4();
    func_800999A0();
    func_801495B4();
    func_800F654C(1);
    func_800999C8();
    func_80074B70();
    func_80099938();
    func_80149924();
    func_800F971C();
    func_800999C8();
L14990C:
    func_800F8F74();
    return;
}
