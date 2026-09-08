#include "common.h"
void func_801266F0(void)
{
    /* rows: 0x100/0x1C/0x41 windows, 86F0(0x89) cell; loop L126740
       on 5C64(0x202). */
    func_800F9330();
    func_800F9298();
    func_800F71DC(0x100);
    func_800F9330();
    func_800F94B8();
    func_800F9644(0x20);
    func_800F6558();
    func_800F7500(0x1C);
    func_800F7270(0x41);
L126740:
    for (;;) {
        func_800F86F0(0x89);
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F9660(0x20);
    func_800F94B8();
    func_800F95A0();
    return;
}
