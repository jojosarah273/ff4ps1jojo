#include "common.h"
void func_80123BD8(void)
{
    /* shop rows: 0x37/0x29/0x45 windows, 801222C4 row; loop L123C54
       on 5DA0(0x37)/5B8C(0x202). */
    func_800F9200();
    func_800F824C(0x37);
    func_800F9330();
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    func_800F6630(0x45);
L123c54:
    for (;;) {
        func_800F8768(1);
        func_800F5DA0(0x37);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F95A0();
    func_801222C4();
    func_800F93DC();
    return;
}
