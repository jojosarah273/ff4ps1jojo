#include "common.h"
void func_80149F20(void)
{
    /* battle item/help mix: 5574 gates (0x4D/0x5E), 80149D68 +
       80168BC4 detail, 0x34C5 gate; then the 8014FEC8 stats rows with
       the L149FF0 poll chain and 8014A154/80148CAC commits. */
    func_800F8188();
    func_800F8188();
    func_800F5D24();
    func_800F8F74();
    func_800F8F74();
    func_800F5574(0x4D);
    if (func_800F53C0() == 0)
        goto L149FF0;
    func_800F5574(0x5E);
    if (func_800F53C0() != 0)
        goto L149FF0;
    func_800F9200();
    func_80149D68();
    func_80168BC4();
    func_800F654C(1);
    func_800F8188();
    func_8016752C();
    func_8014C57C();
    func_800F6564(0x34C5);
    if (func_800F6434(0x202) != 0)
        goto L149FE8;
    func_800F93DC();
    func_800953F4();
    return;
L149FE8:
    func_800F93DC();
L149FF0:
    func_800F5CCC();
    func_800F9644(0x20);
    func_800F971C();
    func_800F9660(0x20);
    func_800F6C68();
    func_800F9330();
    func_800F71DC(0xF);
    func_800F8188();
    func_800760D0();
    func_800F95A0();
    func_800F6C68();
    func_800F9330();
    func_8014FEC8();
    func_800F6564(0x34C4);
    func_800F8188();
    func_800F95A0();
    func_800F6C68();
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto L14A134;
    func_800F8188();
    func_800F654C(1);
    func_800F8188();
    func_800F8188();
    func_800F6C68();
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto L14A134;
    func_800F5140();
    func_8014A154();
L14A134:
    func_800F8F74();
    func_80148CAC();
    return;
}
