#include "common.h"
void func_800FBE44(void)
{
    /* shop rows: 0x47/0x45/0x60/0x61 windows, 0x2800 texts, 801766B0
       rows + 8017F8F8 preps; ends 80194700/80194394. */
    func_800F71DC();
    func_800F8D6C(0x47);
    func_800F71DC(0x2800);
    func_800F8D6C(0x45);
    func_800F654C(8);
    func_800F824C(0x60);
    func_800F71DC();
    func_800F8D6C(0x61);
    func_801766B0();
    func_800F71DC(0x4000);
    func_800F8D6C(0x47);
    func_801766B0();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
    func_80194700();
    func_80194394();
    return;
}
