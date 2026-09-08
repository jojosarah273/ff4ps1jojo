#include "common.h"
void func_8015B6FC(void)
{
    /* config status row: 0xB5 window + 0x3303 text; 5574 key ladder
       (5/8/C/10 codes) routes to 8015B8E4 (detail row), then the
       0xB3/0xB4 cursor cells with 0xA6 header and the 0x3302 tail. */
    func_800F8FB8(0xB5);
    func_800F9330();
    func_800F6B68(0x3303);
    func_800F5574(5);
    if (func_800F53D4() != 0)
        goto L15B77C;
    func_800F5574(8);
    if (func_800F53D4() != 0)
        goto L15B77C;
    func_800F5574(0xC);
    if (func_800F53D4() != 0)
        goto L15B77C;
    func_800F5574(0x10);
    if (func_800F53D4() == 0)
        goto L15B79C;
L15B77C:
    func_8015B8E4();
    func_800F6630(0xB3);
    if (func_800F6434(0x202) != 0)
        goto L15B844;
L15B79C:
    func_800F95A0();
    func_800F9330();
    func_800F6B68(0x3303);
    func_800F5140();
    func_800F6C68();
    func_800F824C(0xB3);
    func_800F6C68();
    func_800F824C(0xB4);
    func_800F7270(0xA6);
    func_800F6B68(0x2003);
    func_800F4370(0xB3);
    if (func_800F4120(0x202) != 0)
        goto L15B844;
    func_800F6B68(0x2004);
    func_800F4370(0xB4);
    if (func_800F4120(2) != 0)
        goto L15B854;
L15B844:
    func_800F654C(0x80);
    func_800F824C(0xB5);
L15B854:
    func_800F95A0();
    func_800F6B68(0x3302);
    func_800F9200();
    func_800F4248(0x7F);
    func_800F78C4(func_800F3C3C(0xB5));
    func_800F8768(0x3302);
    func_800F93DC();
    if (func_800F54D4(func_800F3B04()) != 0)
        return;
    func_800F654C(1);
    func_800F824C(0xAA);
    return;
}
