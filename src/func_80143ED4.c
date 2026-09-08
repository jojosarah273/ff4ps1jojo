#include "common.h"
void func_80143ED4(void)
{
    /* battle rows: 80143D64/80143D14/8013D4C8 rows; loop L143F1C on
       6434(2/0x202) gates and 5958(0x40). */
    func_800F971C();
L143f1c:
    for (;;) {
        func_800F6B68();
        if (func_800F6434(2) != 0)
            goto L143FD8;
        func_800F6B68();
        if (func_800F6434(0x202) != 0)
            goto L143FD8;
        func_80143D64();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F824C();
        func_80143D14();
        func_800F5410();
        func_800F4008(0x48);
        func_800F824C(2);
        func_800F6630();
        func_800F5574(0xE0);
        if (func_800F53C0() == 0)
            goto L143FF0;
        func_800F654C(1);
        func_800F8768();
    L143FD8:
        func_800F654C(0xF0);
        func_800F824C();
        func_800F824C(2);
    L143FF0:
        func_800F6564(0x1813);
        func_800F4248(2);
        func_800F5410();
        func_800F4008(0x8C);
        func_800F8F74();
        func_8013D4C8();
        func_800F6364();
        func_800F5958(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
