#include "common.h"
void func_801005DC(void)
{
    /* battle help-dialog: 0x8FB header, 0x1804-0x180B ruler rows,
       0x1440/0x1441 progress counters, sub-screen calls 800FAD48 /
       8010CA74 / 80170C14 / 8010B010. */
    func_800F654C(1);
    func_800F824C(6);
    func_800F6564(0x8FB);
    func_800F5574(0x60);
    if (func_800F53C0() != 0)
        goto L10063C;
    func_800F5574(0x54);
    if (func_800F53C0() == 0)
        goto L10063C;
    func_800F654C(0xA);
    func_800F824C(6);
L10063C:
    func_800F7500();
L100644:
    for (;;) {
        func_800F6D70(0x1440);
        if (func_800F54D4(func_800F3B04(0x8FB)) == 0)
            goto L10068C;
        func_800F6D70(0x1441);
        func_800F5574(0x63);
        if (func_800F53D4() == 0)
            goto L100814;
    L10068C:
        func_800F5A90(0x60);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F7500();
L1006C0:
    for (;;) {
        func_800F6D70(0x1440);
        if (func_800F6434(2) != 0)
            goto L100804;
        func_800F5A90(0x60);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6564(0x8FB);
    func_800F8188(0x1804);
    func_800F8F74(0x1805);
    func_800F8F74(0x1806);
    func_800F8F74(0x1807);
    func_800F8F74(0x1808);
    func_800F8F74(0x1809);
    func_800F8F74(0x180A);
    func_800F8F74(0x180B);
    func_800F654C();
    func_800FD914();
    func_8011EB5C();
    func_800FC548();
    func_800F71DC();
L100774:
    for (;;) {
        func_800F90EC(0x1804);
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() != 0)
            break;
    }
    func_80176060();
    func_800F654C(1);
    func_800F824C(0xC5);
    func_800FAD48();
    func_8010CA74();
    func_800F5448();
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_80170C14();
    func_8010B010();
    func_800F654C();
    func_800FD85C();
    return;
L100804:
    func_800F6564(0x8FB);
    func_800F8960(0x1440);
L100814:
    func_800F6D70(0x1441);
    func_800F5410();
    func_800F3F38(func_800F3C3C(6));
    func_800F5574(0x64);
    if (func_800F53C0() == 0)
        goto L10087C;
    func_800F5480();
    func_800F8058(0x63);
    func_800F824C(6);
    func_800F654C(0x63);
    func_800F8960(0x1441);
    goto L10063C;
L10087C:
    func_800F8960(0x1441);
    return;
}
