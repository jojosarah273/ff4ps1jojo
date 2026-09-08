#include "common.h"
void func_80145168(void)
{
    /* battle loop: 8013EF78/8013D12C/801449A0/80144C78/8014086C
       preps; L1451A0 loop runs 80140558 + 80144C78 + 801449D0 +
       8014D43C; exits via 8014D414. */
    func_8013EF78();
    func_8013D12C();
    func_801449A0();
    func_80144C78();
    func_8014086C();
    func_800F71DC(0x80);
L1451a0:
    for (;;) {
        func_800F9330();
        func_80140558();
        func_800F6240();
        func_80144C78();
        func_801449D0();
        func_800F8F74();
        func_8014D43C();
        func_800F95A0();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_8013D12C();
    func_800F8F74();
    func_8014D414();
    return;
}
