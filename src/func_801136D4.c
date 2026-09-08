#include "common.h"
void func_801136D4(void)
{
    /* battle status row: 0x79/0x23/0x20 windows, 0xACF-0xAD8 texts,
       80119AC8/80115D2C/80115BCC/8011EA5C rows; loops L1136E4 and
       L11379C. */
    func_800F8FB8(0x79);
L1136e4:
    for (;;) {
        func_800F654C(0x23);
        func_800FD804();
        func_800F654C(0x20);
        func_800F8188(0xACF);
        func_800F654C(2);
        func_800F8188(0xAD0);
        func_800F8188(0xAD1);
        func_800F71DC(8);
        func_800F8D00(0xAD2);
        func_800F654C(6);
        func_800F8188(0xACD);
        func_800F8F74(0xACE);
        func_800F6630(0x79);
        func_800F5140();
        func_800F6C68();
        func_800F8188(0xAD4);
        func_800F6C68();
        func_800F8188(0xAD5);
        func_80115BCC();
    L11379c:
        for (;;) {
            func_800FE7D8();
            func_80119AC8();
            func_80115D2C();
            func_800F7210(0xAD2);
            func_800F5958(4);
            if (func_800F53D4() == 0)
                goto L1137E4;
            func_800F654C(1);
            func_800F824C(0xE5);
        L1137E4:
            func_800F5958();
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
