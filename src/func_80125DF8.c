#include "common.h"
void func_80125DF8(void)
{
    /* rows: 0x145 text; loops L125E28 (6D70/5C64) and L125EAC
       (63BC/5C64) with the 5D24(0x145)/5B8C latch. */
    func_800F8188(0x145);
L125e20:
    for (;;) {
        func_800F71DC(8);
    L125e28:
        for (;;) {
            func_800F6D70();
            func_800F6D70();
            func_800F5E48();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F71DC(8);
    L125eac:
        for (;;) {
            func_800F6D70();
            func_800F63BC();
            func_800F5E48();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F5D24(0x145);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    return;
}
