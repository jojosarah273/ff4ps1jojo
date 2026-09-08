#include "common.h"
void func_80124DC8(void)
{
    /* rows: 0x29/0x45/0x46 windows, 8012371C row; 3F94(3C3C(0x29))
       + 3F38(3C3C(0x45)) reads. */
    func_800F4248(0xF);
    func_800F9200();
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    func_800F93DC();
    func_800F5140();
    func_800F824C(0x45);
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3C3C(0x45));
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_800F7270(0x45);
    func_800F654C(6);
    func_800F824C(0x45);
    func_8012371C();
    return;
}
