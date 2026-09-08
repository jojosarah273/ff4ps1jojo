#include "common.h"
void func_8013E200(void)
{
    /* battle item rows: 0x1/0x2/0x3/0x4/0x5 windows, 80143D64 +
       80143D14 + 8013DE38 rows. */
    func_800F6630();
    func_800F9200();
    func_800F6630();
    func_800F5480();
    func_800F8058(0x10);
    func_800F824C();
    func_80143D64();
    func_800F824C(1);
    func_80143D14();
    func_800F824C(3);
    func_800F6B68();
    func_800F824C(4);
    func_800F8FB8(5);
    func_8013DE38();
    func_800F6630();
    func_800F5410();
    func_800F4008(0x20);
    func_800F824C();
    func_800F6630(1);
    func_800F824C();
    func_800F654C(0x40);
    func_800F824C(5);
    func_8013DE38();
    func_800F93DC();
    func_800F824C();
    return;
}
