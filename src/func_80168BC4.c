#include "common.h"
void func_80168BC4(void)
{
    /* config help/credits: 0x180F/0x1813/0x1900 texts; key confirms
       (5574 0xD/0x10, 13/10 ladders), two scroll loops (L168D60/
       L168DD8 on 5A90(4/0x20)), 0x8000 gate at the end. */
    func_800F8F74();
    func_800F8F74();
    func_800F8F74();
    func_800F8F74();
    func_800F8F74();
    func_800F8F74();
    func_800F9200();
    func_800F5480();
    func_800F8058(0x4D);
    func_800F8188();
    func_800F5574(0xD);
    if (func_800F53C0() == 0)
        goto L168C9C;
    func_800F5574(0x10);
    if (func_800F53D4() != 0)
        goto L168C9C;
    func_800F9200();
    func_800F6240();
    func_800F6564(0x1813);
    func_800F6D70(0x1900);
    func_800F4248(3);
    func_800F8188();
    func_800F93DC();
L168C9C:
    func_800F5574(0xA);
    if (func_800F53D4() == 0)
        goto L168D0C;
    func_800F9200();
    func_800F8F74();
    func_800F654C(0x40);
    func_800F8188();
    func_800F654C(8);
    func_800F8188();
    func_800F8188();
    func_800F654C(2);
    func_800F8188();
    func_800F6240();
    func_800F93DC();
L168D0C:
    func_800F971C();
L168d60:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        func_800F6364();
        func_800F63BC();
        func_800F5A90(4);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F93DC();
    func_800F654C(0x38);
    func_800F8188();
    func_800F971C();
L168dd8:
    for (;;) {
        func_800F971C();
        func_800F8960();
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x20);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F71DC(0x7FFF);
    func_800F8D00();
    return;
}
