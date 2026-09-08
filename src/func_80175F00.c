#include "common.h"
void func_80175F00(void)
{
    /* row picker: 0xCC window + 0x1003 gate; 80175E88 header; then the
       4248(0x20)/0x10/0x8 row-gate ladder and 80170458 row render. */
    func_800F6630(0xCC);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8FB8(0xCC);
    func_80175E88();
    func_800F6B68(0x1003);
    func_800F4248(0x20);
    if (func_800F4120(2) != 0)
        goto L175F60;
    func_800F654C(0xF);
    goto L175FD0;
L175F60:
    func_800F6B68(0x1003);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto L175F90;
    func_800F654C(0xE);
    goto L175FD0;
L175F90:
    func_800F6B68(0x1003);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto L175FC0;
    func_800F654C(0x10);
    goto L175FD0;
L175FC0:
    func_800F6B68(0x1001);
    func_800F4248(0x1F);
L175FD0:
    func_800F824C(6);
    func_800F5140();
    func_800F5410();
    func_800F3F38(func_800F3C3C(6));
    func_800F5410();
    func_800F4008(0x80);
    func_800F824C(0x4B);
    func_800F8FB8(0x4A);
    func_800F71DC(0x4000);
    func_800F8D6C(0x4C);
    func_800F71DC(0x200);
    func_800F8D6C(0x4E);
    func_800F654C(0x1B);
    func_800F824C(0x49);
    func_80170458();
    return;
}
