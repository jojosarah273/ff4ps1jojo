#include "common.h"
void func_80153518(void)
{
    /* options: 0x2003-0x2006 cells with 0x38BF-0x38C1 stats,
       8015330C row; loop L153560 on 5A90(0xF). */
    func_800F971C();
L153560:
    for (;;) {
        func_800F6B68(0x2003);
        func_800F8960(0x38BF);
        func_800F4248(0xF8);
        func_800F8768(0x2003);
        func_800F6B68(0x2004);
        func_800F8960(0x38C0);
        func_800F4248(0x40);
        func_800F8768(0x2004);
        func_800F90EC(0x2005);
        func_800F6B68(0x2006);
        func_800F8960(0x38C1);
        func_800F90EC(0x2006);
        func_8015330C();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0xF);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
