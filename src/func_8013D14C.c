#include "common.h"
void func_8013D14C(void)
{
    /* battle magic list: 0x34C4 intro, 0x65/0x2 windows, 8014D528 +
       801409BC sub-renders, then the L13D2CC loop pulling 80140558/
       8013D428/80149374 and the 8013D4C8/8013D3B0 draw pair; exits via
       8014D728 on 53C0 hold. */
    func_800F6564(0x34C4);
    func_800F8188();
    func_800F654C(0x65);
    func_8014D528();
    func_801409BC();
    func_800F654C(2);
    func_800F8188();
    func_8013D12C();
    func_800F971C();
    func_800F8188();
    func_800F654C(0x80);
    func_800F8188();
    func_800F654C(0x28);
    func_800F8188();
    func_800F8188();
    func_800F6564(0x48);
    func_800F5140();
    func_800F654C(0x48);
    func_800F8188();
    func_800F6564(0x34C2);
    if (func_800F6434(0x80) != 0)
        goto L13D264;
    func_800F8F74();
    func_800F6B68();
    func_800F8188();
    func_800F6B68();
    func_800F5480();
    func_800F8058(8);
    func_800F8188();
    func_800F8F74();
    goto L13D2B4;
L13D264:
    func_800F654C(0x40);
    func_800F8188();
    func_800F6B68();
    func_800F8188();
    func_800F6B68();
    func_800F5480();
    func_800F8058(0xC);
    func_800F8188();
    func_800F654C(0xF8);
    func_800F8188();
L13D2B4:
    func_800F654C(8);
    func_800F8188();
    func_801490AC();
L13d2cc:
    for (;;) {
        func_80140558();
        func_8013D428();
        func_80149374();
        if (func_800F53C0() != 0)
            goto L13D390;
        func_800F6564();
        func_800F824C();
        func_800F6564();
        func_800F824C(2);
        func_800F971C();
        func_800F939C();
        func_800F654C(0x84);
        func_8013D4C8();
        func_800F7500(0xC);
        func_800F95A0();
        func_800F654C(0x84);
        func_8013D3B0();
        func_800F7500(0x18);
        func_800F71DC(1);
        func_800F654C(0x84);
        func_8013D3B0();
    }
L13D390:
    func_8014D728();
    func_800F8F74();
    return;
}
