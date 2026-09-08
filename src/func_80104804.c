#include "common.h"
void func_80104804(void)
{
    /* shop rows: 0x1705/0x7A/0x79 windows, 0x6F8 texts, 800FF024
       row; loop L104834 on 5574(0x40). */
    func_800F654C(3);
    func_800F8188(0x1705);
    func_800F8FB8(0x7A);
    func_800F8FB8(0x79);
L104834:
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
            goto L1048C4;
        func_800F6240(0x6D0);
    L1048C4:
        func_800F5574(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
