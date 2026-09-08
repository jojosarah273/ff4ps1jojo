#include "common.h"
void func_801330F8(void)
{
    /* ability banner: 0x1B window, 0x2100/0x15/0x145 texts, 80139AFC
       tail; loops L133170 (6D70/5C64 pairs) and L1331EC. */
    func_800F926C();
    func_800F9298();
    func_800F654C(0x1B);
    func_800F9200();
    func_800F9448();
    func_800F71DC(0x2100);
    func_800F9330();
    func_800F94B8();
    func_800F654C(0x80);
    func_800F824C(0x15);
    func_800F654C(0x10);
    func_800F8188(0x145);
L133168:
    for (;;) {
        func_800F71DC(8);
    L133170:
        for (;;) {
            func_800F6D70();
            func_800F6D70(1);
            func_800F5E48();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F71DC(8);
    L1331EC:
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
    func_80139AFC();
    func_800F94B8();
    func_800F9448();
    return;
}
