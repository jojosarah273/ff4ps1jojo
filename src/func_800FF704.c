#include "common.h"
void func_800FF704(void)
{
    /* shop buy-flow: 0x1706/0x1707 headers, 0x1700-0x1704 name rows,
       64/6D/6E/79/B7/B8 windows; 800FB09C + 80172BA8/80173008 render the
       buy list; loops at LFF804/LFF8C8. */
    func_800F654C(0x6A);
    func_800F8188(0x1706);
    func_800F654C(0xD4);
    func_800F8188(0x1707);
    func_800F654C();
    func_800F8188(0x1700);
    func_800F8188(0x1701);
    func_800F6564(0x1704);
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto LFF794;
    func_800F8F74(0x171F);
    func_800F6564(0x6D0);
    if (func_800F6434(2) != 0)
        goto LFF79C;
    func_800F8F74(0x171B);
    goto LFF79C;
LFF794:
    func_800F8F74(0x1723);
LFF79C:
    func_800FB09C();
    func_800F654C(3);
    func_800F8188(0x1705);
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_800F8FB8(0x79);
    func_800F6564(0x1704);
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto LFF7FC;
    func_800F8FB8(0xB7);
    goto LFF804;
LFF7FC:
    func_800F8FB8(0xB8);
LFF804:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800F654C(0x20);
        func_800F5480();
        func_800F7F48(func_800F3C3C(0x79));
        func_800F9690();
        func_800F6C68();
        func_800F8188(0x6FB);
        func_800F6630(0x79);
        func_800F824C(0xAD);
        func_800FE5D4();
        func_800FE6E4();
        func_80103F00();
        func_80172BA8();
        func_80173008();
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(0x20);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F654C(0x11);
    func_800F824C(0x79);
    func_800F824C(0xAD);
LFF8C8:
    for (;;) {
        func_800FE7D8();
        func_800F6630(0x79);
        func_800F824C(0xAD);
        func_800F6564(0x1704);
        func_800F5574(4);
        if (func_800F53D4() == 0)
            goto LFF918;
        func_800F62BC(0xB7);
        func_800F6630(0xB7);
        goto LFF928;
    LFF918:
        func_800F62BC(0xB8);
        func_800F6630(0xB8);
    LFF928:
        func_8017559C();
        func_80172BA8();
        func_80173008();
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(0x21);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
