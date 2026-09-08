#include "common.h"
void func_800FC1CC(void)
{
    /* battle rows: 0x3F/0x212C/0x79 windows, 0x2106/0xC6 texts,
       800FD37C/800FC2AC rows; loop L8FC200 on 5574(0x2A). */
    func_800F654C(0x3F);
    func_800FD804();
    func_800F654C(3);
    func_800F8188(0x212C);
    func_800F8FB8(0x79);
L8fc200:
    for (;;) {
        func_800FE7B0();
        func_800F6630(0x79);
        func_800F7864();
        func_800F9690();
        func_800F8188(0x2106);
        func_800F62BC(0x79);
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(0x2A);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6630(0xC6);
    if (func_800F6434(0x202) != 0)
        goto L8FC294;
    func_800FD37C();
L8FC294:
    func_800FC2AC();
    return;
}
