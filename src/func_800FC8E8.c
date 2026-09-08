#include "common.h"
void func_800FC8E8(void)
{
    /* shop banner: 0x7F window, 0x5800 cells; loops LFC918/LFC968
       (5A90(0x100) gate). */
    func_800F654C(0x7F);
    func_800F9200();
    func_800F9448();
    func_800F71DC();
    func_800F7500();
LFC918:
    for (;;) {
    LFC91C:
        for (;;) {
            func_800F6C68();
            func_800F8960(0x5800);
            func_800F6364();
            func_800F63BC();
            func_800F4248(0xF);
            if (func_800F4120(0x202) != 0)
                goto LFC918;
            break;
        }
    LFC968:
        for (;;) {
            func_800F6C68();
            func_800F8960(0x5800);
            func_800F6364();
            func_800F63BC();
            func_800F654C();
            func_800F8960(0x5800);
            func_800F63BC();
            func_800F4248(0xF);
            if (func_800F4120(0x202) != 0)
                continue;
            break;
        }
        func_800F5A90(0x100);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F654C();
    func_800F9200();
    func_800F9448();
    return;
}
