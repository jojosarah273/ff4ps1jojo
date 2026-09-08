#include "common.h"
void func_8013E984(void)
{
    /* battle rows: 0x1802 text, 0x6 window, 8013EB2C/8013EAFC/
       8013ED14 rows; loop L13EA9C on 5958(0x440). */
    func_800F6564(0x1802);
    func_800F4248(0x1F);
    func_800F9200();
    func_800F6C68();
    func_800F824C(6);
    func_800F6C68();
    func_8013EB2C();
    func_800F971C();
    func_800F6C68();
    func_800F9330();
    func_8013EAFC();
    func_8013ED14();
    func_800F95A0();
    func_800F6C68();
    if (func_800F6434(2) != 0)
        goto L13EA74;
    func_8013EAFC();
    func_8013ED14();
L13EA74:
    func_800F93DC();
    func_800F5574(0x10);
    if (func_800F53D4() == 0)
        goto L13EAEC;
    func_800F71DC();
L13ea9c:
    for (;;) {
        func_800F6B68(0x707E);
        func_800F8768();
        func_800F6364();
        func_800F6364();
        func_800F5958(0x440);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
L13EAEC:
    return;
}
