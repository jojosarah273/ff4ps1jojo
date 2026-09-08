#include "common.h"
void func_801046F4(void)
{
    /* shop buy rows: 0x1705/0x7A/0x79 windows, 0x6F8/0x1701/0x171B/
       0x1706/0x1719 texts, 800FF024 row; loop L104724 on 5574
       keys. */
    func_800F654C(3);
    func_800F8188(0x1705);
    func_800F8FB8(0x7A);
    func_800F8FB8(0x79);
L104724:
    for (;;) {
        func_800FE870();
        func_800FF024();
        func_800F6630(0x79);
        func_800F9690();
        func_800F8188(0x6F8);
        func_800FE7D8();
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(0x20);
        if (func_800F53D4() == 0)
            goto L1047D4;
        func_800F8F74(0x6D0);
        func_800F6564(0x1701);
        func_800F8188(0x171B);
        func_800F7210(0x1706);
        func_800F8D00(0x1719);
    L1047D4:
        func_800F6630(0x79);
        func_800F5574(0x40);
        if (func_800F53D4() != 0)
            break;
    }
    return;
}
