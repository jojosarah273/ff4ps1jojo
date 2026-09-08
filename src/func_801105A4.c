#include "common.h"
void func_801105A4(void)
{
    /* battle rows: 0xC/0xE windows, 0x340-0x343 cells, 800FC0DC row;
       loop L1105B8 on 5A90(0x18). */
    func_800F7500();
L1105b8:
    for (;;) {
        func_800F6C68();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xC));
        func_800F8960(0x340);
        func_800F6C68();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xE));
        func_800F8960(0x341);
        func_800F6C68();
        func_800F8960(0x342);
        func_800F6C68();
        func_800F8960(0x343);
        func_800FC0DC();
        func_800F5A90(0x18);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
