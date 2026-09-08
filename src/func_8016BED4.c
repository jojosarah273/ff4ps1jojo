#include "common.h"
void func_8016BED4(void)
{
    /* shop rows: 0x2000/0x2040 cells via 9140/87DC; loop L16BF0C
       on 5958(0x40). */
    func_800F971C();
    func_800F654C(0x80);
    func_800F9644(0x20);
L16bf0c:
    for (;;) {
        func_800F9140(0x2000);
        func_800F87DC(0x2040);
        func_800F6364();
        func_800F6364();
        func_800F5958(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F9660(0x20);
    return;
}
