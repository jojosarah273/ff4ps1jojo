#include "common.h"
void func_801442BC(void)
{
    /* battle rows: 8013EF78 prep; loop L1442E4 on 5C64(0x202) with
       80140558 + cell writes; closes via 0x10 window. */
    func_800F8F74();
    func_800F8F74();
    func_8013EF78();
    func_800F71DC(0x78);
L1442e4:
    for (;;) {
        func_80140558();
        func_800F6564();
        func_800F61E8();
        func_800F4248(0xF);
        func_800F8188();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(0x10);
    func_800F8188();
    return;
}
