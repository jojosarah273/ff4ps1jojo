#include "common.h"
void func_8016A0C8(void)
{
    /* shop cells: 0x2 window, 0x8 gate; loops L16A124 (6764 cells)
       and L16A18C (66D8 cells) on 5C64/5B8C(0x202). */
    func_800F926C();
    func_800F9200();
    func_800F9448();
    func_800F8D6C(2);
    func_800F7500();
L16a10c:
    for (;;) {
        func_800F9644(0x20);
        func_800F922C();
        func_800F71DC(8);
    L16a124:
        for (;;) {
            func_800F6764(2);
            func_800F63BC();
            func_800F63BC();
            func_800F5E48();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F71DC(8);
        func_800F9410();
        func_800F9660(0x20);
    L16a18c:
        for (;;) {
            func_800F66D8(2);
            func_800F63BC();
            func_800F5E48();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F5DA0();
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F9448();
    return;
}
