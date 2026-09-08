#include "common.h"
void func_801287B8(void)
{
    /* config/save screen: 0x4B/0x48/0x49 windows, 80120070 config
       dispatcher, 8012833C save-check; L128954 gate loop (6BE0/4264/
       55C0), then the 80128AD4 stat blocks, 80127538 cursor row. */
    func_800F9200();
    func_800F824C(0x4B);
    func_800F5140();
    func_800F824C(0x48);
    func_800F8FB8(0x49);
    func_800F71DC();
    func_800F6630(0x4B);
    func_80120070();
    func_800F6630(0x4B);
    if (func_800F6434(0x202) != 0)
        goto L12882C;
    func_800F7500();
    func_800F8EBC(0x29);
L12882C:
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_800F71DC(0x82);
    func_8011F8D4();
    func_800F6630(0x4B);
    func_800F5410();
    func_800F4008(0x81);
    func_800F7594(0x29);
    func_800F8960(0xC2);
    func_800F9200();
    func_800F654C(0x7F);
    func_800F8960(0xC4);
    func_800F654C(0xFF);
    func_800F8960(0xC6);
    func_800F8960(0xC8);
    func_800F93DC();
    func_800F926C();
    func_800F654C(0x70);
    func_800F9200();
    func_800F9448();
    func_800F6630(0x4B);
    func_8012833C();
    if (func_800F53C0() == 0)
        goto L128A98;
    func_800F9644(0x20);
    func_800F6658(0x48);
    func_800F3D48();
    func_800F9330();
    func_800F9330();
L128954:
    for (;;) {
        func_800F6BE0();
        func_800F4264(0x3F);
        func_800F55C0(1);
        if (func_800F53D4() != 0)
            goto L1289D4;
        func_800F55C0(0xB);
        if (func_800F53D4() != 0)
            goto L1289D4;
        func_800F5410();
        func_800F4064(0x40);
    }
L1289D4:
    func_800F6BE0(7);
    func_800F7500(0x14A);
    func_80128AD4();
    func_800F6BE0(9);
    func_800F7500(0x154);
    func_80128AD4();
    func_800F95A0();
    func_800F6658(0x29);
    func_800F5410();
    func_800F4064(0xCC);
    func_800F95A0();
    func_800F6BE0(0x6A5);
    func_800F922C();
    func_800F9660(0x20);
    func_800F6B68(0x6A4);
    func_800F95A0();
    func_80127538();
    func_800F9448();
    func_800F7594(0x29);
    func_800F654C(0xC7);
    func_800F8960(0x152);
    goto L128AB4;
L128A98:
    func_800F7500();
    func_8011FBA4();
    func_800F9448();
L128AB4:
    func_800F93DC();
    func_800F61E8();
    return;
}
