#include "common.h"
void func_80174348(void)
{
    /* shop rows: 0x128A text + 0x4C/0x4E/0x4A/0x49/0x73 windows,
       80170458 + 8017F8F8 rows; gate 4120(0x202). */
    func_800F6564(0x128A);
    func_800F4248(0x40);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F71DC(0x5A00);
    func_800F8D6C(0x4C);
    func_800F71DC(0x600);
    func_800F8D6C(0x4E);
    func_800F71DC();
    func_800F8D6C(0x4A);
    func_800F654C(0x1C);
    func_800F824C(0x49);
    func_80170458();
    func_8017F8F8();
    return;
}
