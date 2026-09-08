#include "common.h"
void func_80125ACC(void)
{
    /* config/equip-form confirm: 0x45/0x46/0x43/0x15 windows, 0x1BC0/
       0x1BBF texts; 8012D204 gate; L125B14 renders the 1/3 option rows
       (801224D0 + 6CF4/8210 cells); L125C78 alt row; tail L125DA0. */
    func_800F9200();
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    if (func_8012D204() != 0)
        goto L125B14;
    func_800F93DC();
    return;
L125B14:
    func_800F9200();
    func_800F6B68(1);
    func_800F4248(0xF);
    func_800F8188(0x1BC0);
    func_800F8F74(0x1BBF);
    func_800F6B68(3);
    func_800F4248(0x38);
    if (func_800F4120(2) != 0)
        goto L125C78;
    func_801224D0();
    func_800F9644(0x20);
    func_800F6CF4(0x20);
    func_800F9660(0x20);
    func_800F6630(0x45);
    func_800F5140();
    func_800F824C(0x43);
    func_800F7270(0x43);
    func_800F654C(0x80);
    func_800F81E8(0x2115);
    func_800F9644(0x20);
    func_800F8210(0x2116);
    func_800F9660(0x20);
    func_800F93DC();
    func_800F9298();
    func_800F71DC(0x2100);
    func_800F9330();
    func_800F94B8();
    goto L125DA0;
L125C78:
    func_800F93DC();
    func_800F9298();
    func_800F71DC(0x2100);
    func_800F9330();
    func_800F94B8();
    func_800F5CCC();
    func_800F5140();
    func_800F8188(0x143);
    func_800F654C(0x80);
    func_800F824C(0x15);
    func_800F9644(0x20);
    func_800F658C(0x1BBF);
    func_800F7894();
    func_800F5410();
    func_800F3F94(func_800F3B04(0x1BBF));
    func_800F4064(0x145);
    func_800F658C();
    func_800F516C(0x16);
    func_800F8274();
    func_800F9660(0x20);
L125DA0:
    func_800F926C();
    func_800F654C(0x1D);
    func_800F9200();
    func_800F9448();
    func_800F654C(0x10);
    func_80125DF8();
    func_800F9448();
    func_800F94B8();
    func_800F93DC();
    return;
}
