#include "common.h"
void func_8015CF18(void)
{
    /* options screen: 0x321B/0x321C texts, 80150C38 row; loop L15CF60
       (5958(0xC0)) with the 5574(0xCE)/53D4 and 53C0 ladders. */
    func_800F971C();
L15cf60:
    for (;;) {
        func_800F6B68(0x321B);
        func_800F5574(0xCE);
        if (func_800F53D4() != 0)
            goto L15CFC8;
        func_800F63BC();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F5958(0xC0);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    goto L15D0A8;
L15CFC8:
    func_800F6B68(0x321C);
    func_800F5574(1);
    if (func_800F53C0() == 0)
        goto L15D0A8;
    func_800F5480();
    func_800F6B68(0x321C);
    func_800F9200();
    func_800F9330();
    func_800F8058(1);
    func_800F8768(0x321C);
    if (func_800F53D4() == 0)
        goto L15D060;
    func_800F90EC(0x321C);
    func_800F90EC(0x321B);
    func_800F6B68(0x321A);
    func_800F8768();
L15D060:
    func_800F824C(1);
    func_800F654C(6);
    func_80150C38();
    func_800F95A0();
    func_800F93DC();
    func_800F8768(0x321C);
    return;
L15D0A8:
    return;
}
