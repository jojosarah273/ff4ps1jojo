#include "common.h"
void func_8011F9C4(void)
{
    /* config confirm: 0x29 window, 801245B4 + 885C cell rows; loops
       L11FA70 (6434(2) gate) and L11FAFC (3F94(3C3C(0x29)) refresh). */
    func_800F926C();
    func_800F9298();
    func_800F9330();
    func_800F9330();
    func_800F71DC(0x100);
    func_800F9330();
    func_800F94B8();
    func_800F95A0();
    func_800F9200();
    func_800F9448();
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
L11FA70:
    for (;;) {
        func_800F6D70();
        if (func_800F6434(2) != 0)
            goto L11FADC;
        func_800F63BC();
        func_800F5574(1);
        if (func_800F53D4() != 0)
            goto L11FAFC;
        func_801245B4();
        func_800F885C();
        func_800F3D48();
        func_800F885C();
        goto L11FB4C;
    L11FADC:
        func_800F95A0();
        func_800F94B8();
        func_800F9448();
        return;
    L11FAFC:
        func_800F9644(0x20);
        func_800F6DE8();
        func_800F5410();
        func_800F3F94(func_800F3C3C(0x29));
        func_800F9660(0x20);
    L11FB4C:
        goto L11FA70;
    }
    return;
}
