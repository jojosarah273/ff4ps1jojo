#include "common.h"
void func_80150A30(void)
{
    /* battle splash: 0x30 window, 0x7E window, 801582D8 row; linear
       render + 0x30 icon set. */
    func_800F8210(0x30);
    func_800F9644();
    func_800F926C();
    func_800F9298();
    func_800F922C();
    func_800F9330();
    func_800F939C();
    func_800F54B8();
    func_800F6558();
    func_800F9660(0x20);
    func_800F9644(0x10);
    func_800F71DC();
    func_800F9330();
    func_800F94B8();
    func_800F654C(0x7E);
    func_800F9200();
    func_800F9448();
    func_801582D8();
    func_800F9644(0x30);
    func_800F960C();
    func_800F95A0();
    func_800F9410();
    func_800F94B8();
    func_800F9448();
    return;
}
