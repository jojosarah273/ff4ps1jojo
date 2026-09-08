#include "common.h"
void func_80125F38(void)
{
    /* shop rows: 0x45/0x46 windows, 0x1/0x43 texts, 8012D204 gate;
       renders the 0x45 rows with 4064/3454 values. */
    func_800F9200();
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_8012D204();
    if (func_800F53D4() == 0)
        goto L125F80;
    func_800F93DC();
    return;
L125F80:
    func_800F6B68(1);
    func_800F4248(0xF);
    func_800F824C(0x43);
    func_800F9644(0x20);
    func_800F6658(0x43);
    func_800F516C();
    func_800F5050();
    func_800F4064(0x45);
    func_800F6658();
    func_800F516C();
    func_800F5050();
    func_800F4064(0xF);
    func_800F6558();
    func_800F3D64(0xD7E);
    func_800F9660(0x20);
    func_800F93DC();
    return;
}
