#include "common.h"
void func_801450B8(void)
{
    /* battle loop: 8013EF78/8013D12C/801444D4/80144C78 preps;
       L1450E8 loop runs 80140558 + 80144C78 + 801449D0; closes with
       8013DC04 + 0x38E2 text. */
    func_8013EF78();
    func_8013D12C();
    func_801444D4();
    func_80144C78();
    func_800F71DC(0x40);
L1450e8:
    for (;;) {
        func_800F9330();
        func_80140558();
        func_800F6240();
        func_80144C78();
        func_801449D0();
        func_800F8F74();
        func_800F95A0();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F7210(0x34C4);
    func_800F8D00();
    func_8013DC04();
    func_800F8F74(0x38E2);
    return;
}
