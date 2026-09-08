#include "common.h"
void func_801671E4(void)
{
    /* battle stat row: 0x1802 text, 0x2A window with 5024 cells
       (5 copies), 6434(0x202)/4120(2) gates; loop L167364 (5DA0/
       5B8C(0x202)). */
    func_800F6564(0x1802);
    func_800F4248(0x1F);
    func_800F824C(0x1802);
    func_800F6564();
    func_800F4248(0x20);
    if (func_800F4120(2) != 0)
        goto L167270;
    if (func_800F6434(0x202) != 0)
        goto L167288;
L167270:
    func_800F5410();
    func_800F3F38(func_800F3C3C());
L167288:
    func_800F71DC(1);
    func_800F824C(0x2A);
    func_800F9644(0x20);
    func_800F5024(func_800F3C3C(0x2A));
    func_800F5024(func_800F3C3C(0x2A));
    func_800F5024(func_800F3C3C(0x2A));
    func_800F5024(func_800F3C3C(0x2A));
    func_800F5024(func_800F3C3C(0x2A));
    func_800F971C();
    func_800F9660(0x20);
    func_800F7270(0x2A);
    func_800F654C(0x10);
    func_800F824C();
L167364:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        func_800F6C68();
        func_800F8960();
        func_800F6364();
        func_800F63BC();
        func_800F5DA0();
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    return;
}
