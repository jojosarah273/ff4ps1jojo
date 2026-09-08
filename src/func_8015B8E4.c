#include "common.h"
void func_8015B8E4(void)
{
    /* config status-row screen. 5574 key-codes 8/C/10 pick the row variant;
       tails L5BB84 (close B3) and L5BB8C (return) are shared. */
    func_800F7270(0xA6);
    func_800F8FB8(0xB3);
    func_800F5574(8);
    if (func_800F53D4() != 0)
        goto L5B994;
    func_800F5574(0xC);
    if (func_800F53D4() != 0)
        goto L5B9FC;
    func_800F5574(0x10);
    if (func_800F53D4() != 0)
        goto L5BA6C;
    func_800F6B68(0x2033);
    if (func_800F6434(2) != 0)
        goto L5B974;
    func_800F5574(0x61);
    if (func_800F53C0() == 0)
        return;
L5B974:
    func_800F6B68(0x2035);
    if (func_800F6434(2) != 0)
        goto L5BB84;
    func_800F5574(0x61);
    goto L5B9DC;
L5B994:
    func_800F6B68(0x2033);
    if (func_800F6434(2) == 0)
        goto L5B9C4;
    func_800F6B68(0x2035);
    if (func_800F6434(2) != 0)
        goto L5BB84;
L5B9C4:
    func_800F5574(0x44);
    if (func_800F53C0() == 0)
        goto L5BB84;
    func_800F5574(0x4D);
L5B9DC:
    func_800F5574();
    if (func_800F53C0() != 0)
        goto L5BB84;
    return;
L5B9FC:
    func_800F6B68(0x2033);
    if (func_800F6434(2) != 0)
        goto L5BB84;
    func_800F5574(0x4D);
    if (func_800F53C0() == 0)
        goto L5BB84;
    func_800F5574(0x61);
    if (func_800F53C0() != 0)
        goto L5BB84;
    func_800F6B68(0x2035);
    if (func_800F6434(2) != 0)
        goto L5BB84;
    if (func_800F53D4() == 0)
        return;
L5BA6C:
    func_800F9330();
    func_800F7210(0x3536);
    func_800F9330();
    func_800F7270(0xA6);
    func_800F6B68(0x2003);
    func_800F4248(0x3C);
    if (func_800F4120(0x202) != 0)
        goto L5BB64;
    func_800F71DC(1);
    func_800F6630(0xD0);
    if (func_800F54D4(func_800F3B04(0x3539)) != 0)
        goto L5BAE4;
    func_800F5E48();
L5BAE4:
    func_800F6B68(0x3539);
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F6B68(0x2003);
    func_800F4248(0xFC);
    if (func_800F4120(0x202) != 0)
        goto L5BB64;
    func_800F6B68(0x2004);
    func_800F4248(0x3C);
    if (func_800F4120(0x202) != 0)
        goto L5BB64;
    func_800F6B68(0x2005);
    func_800F4248(0x40);
    if (func_800F4120(0x202) != 0)
        goto L5BB64;
    func_800F5DA0(0xB3);
L5BB64:
    func_800F95A0();
    func_800F8D00(0x3536);
    func_800F95A0();
    func_800F8D6C(0xA6);
L5BB84:
    func_800F62BC(0xB3);
    return;
}
