#include "common.h"
void func_8013D5C8(void)
{
    /* battle rows: 8013D690 prep, 0x340/0x342/0x380/0x382 cells;
       loop L13D600 on 5A90(0x40). */
    func_8013D690();
    func_800F971C();
    func_800F9644(0x20);
L13d600:
    for (;;) {
        func_800F6DE8(0x340);
        func_800F89D4(0x380);
        func_800F6DE8(0x342);
        func_800F89D4(0x382);
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F9660(0x20);
    return;
}
