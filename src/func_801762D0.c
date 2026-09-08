#include "common.h"
void func_801762D0(void)
{
    /* battle timer screen: staged poll loops reading 0x1900/0x1A00 (and
       0x2000/0x1FFF/0x1A05/0x1E00/0x2000 gate texts) with 90EC/6364/
       5958 pacing, then a 885C frame fill driven by 6180(0x202), and the
       L17649C countdown loop on 8768(0x1900). */
    func_800F71DC();
L1762e0:
    for (;;) {
        func_800F6B68(0x1900);
        if (func_800F54D4(func_800F3B9C()) == 0)
            goto L176350;
        func_800F6364();
        func_800F5958(0x100);
        if (func_800F53D4() != 0)
            goto L176380;
    }
L176350:
    func_800F71DC(0x1A00);
L176358:
    for (;;) {
        func_800F90EC();
        func_800F6364();
        func_800F5958(0x1A65);
        if (func_800F53D4() != 0)
            break;
    }
L176380:
    func_800F71DC();
L176388:
    for (;;) {
        func_800F90EC();
        func_800F6364();
        func_800F5958(0x200);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F71DC(0x300);
L1763b8:
    for (;;) {
        func_800F90EC();
        func_800F6364();
        func_800F5958(0xFFF);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6364();
L1763e8:
    for (;;) {
        func_800F90EC();
        func_800F6364();
        func_800F5958(0x1A00);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F71DC(0x1A65);
L176418:
    for (;;) {
        func_800F90EC();
        func_800F6364();
        func_800F5958(0x1E00);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F71DC(0x2000);
    func_800F654C();
L176450:
    for (;;) {
        func_800F885C();
        func_800F6364();
        if (func_800F6180(0x202) != 0)
            continue;
        break;
    }
L176470:
    for (;;) {
        func_800F885C();
        func_800F6364();
        if (func_800F6180(0x202) != 0)
            continue;
        break;
    }
    func_800F71DC();
L17649c:
    for (;;) {
        func_800F6C68();
        func_800F8768(0x1900);
        func_800F6364();
        func_800F5958(0x100);
        if (func_800F53D4() != 0)
            break;
    }
    return;
}
