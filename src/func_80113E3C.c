#include "common.h"
void func_80113E3C(void)
{
    /* battle rows (twin of 80113CCC): 0x8F/0x5F/0xAD/0x17C/0x6FB/0x24
       windows, 80113F3C/8011EA5C rows; loop L113E84 on 41E8(2). */
    func_800F824C(0x8F);
    func_800F654C(0x5F);
    func_800F824C(0xAD);
    func_800F71DC(0x17C);
    func_800F8D00(0x6FB);
    func_800F8D6C(0x24);
    func_800F654C(0x10);
    func_800F824C(0x90);
L113e84:
    for (;;) {
        func_800FE7D8();
        func_80113F3C();
        func_800F9644(0x20);
        func_800F658C(0x6FB);
        func_800F5CF8();
        func_800F5CF8();
        func_800F81B0(0x6FB);
        func_800F6658(0x24);
        func_800F5CF8();
        func_800F5CF8();
        func_800F8274(0x24);
        func_800F4264(0xFF);
        func_800F9660(0x20);
        func_800F824C(0xAD);
        if (func_800F41E8(2) == 0)
            continue;
        break;
    }
    func_800FE8B4();
    func_8011EA5C();
    return;
}
