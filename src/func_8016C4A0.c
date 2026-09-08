#include "common.h"
void func_8016C4A0(void)
{
    /* shop memory: 0x48/0x50 windows, 0x7D27 text, 0x4B/0x4D cells,
       80176F60 row; loop L16C4DC on 5574(0x38). */
    func_800F654C(0x48);
    func_800F824C(0x50);
    func_800F971C();
L16c4dc:
    for (;;) {
        func_800F6240(0x7D27);
        func_800F9200();
        func_800F9330();
        func_800F6C68();
        func_800F8EBC(0x4B);
        func_800F6C68();
        func_800F8EBC(0x4D);
        func_800F6564(0x7D27);
        func_800F4248(7);
        if (func_800F4120(2) != 0)
            goto L16C5A4;
        func_800F654C(1);
    L16C5A4:
        func_800F5410();
        func_800F4008(0x50);
        func_800F824C(0x4F);
        func_800F654C(1);
        func_800F824C(0x51);
        func_80176F60();
        func_800F95A0();
        func_800F6364();
        func_800F6364();
        func_800F93DC();
        func_800F61E8();
        func_800F5574(0x38);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
