#include "common.h"
void func_80113CCC(void)
{
    /* battle rows: 0xAD/0x6FB texts, 0x24/0x8F/0x90/0x91 windows,
       80113F3C/8011EA5C rows; loop L113D24 on 5574(0x5F). */
    func_800F8FB8(0xAD);
    func_800F71DC();
    func_800F8D00(0x6FB);
    func_800F8D6C(0x24);
    func_800F654C(0xC4);
    func_800F824C(0x8F);
    func_800F654C(8);
    func_800F824C(0x90);
    func_800F654C(0x39);
    func_800F824C(0x91);
L113d24:
    for (;;) {
        func_800FE7B0();
        func_80113F3C();
        func_800F9644(0x20);
        func_800F658C(0x6FB);
        func_800F6214();
        func_800F81B0(0x6FB);
        func_800F6658(0x24);
        func_800F6214();
        func_800F8274(0x24);
        func_800F4264(0xFF);
        func_800F9660(0x20);
        func_800F824C(0xAD);
        func_800F5574(0x5F);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
