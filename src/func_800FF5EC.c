#include "common.h"
void func_800FF5EC(void)
{
    /* shop buy rows: 0x1705/0x1704 texts, 0x79 window,
       80172BA8/80173008 rows; loop LFF614 on 5574(0x30)/53D4. */
    func_800F654C(3);
    func_800F8188(0x1705);
    func_800F654C();
    func_800F824C(0x79);
Lff614:
    for (;;) {
        func_800FE7D8();
        func_800F654C(0x2F);
        func_800F5480();
        func_800F7F48(func_800F3C3C(0x79));
        func_800F5574(0x10);
        if (func_800F53C0() != 0)
            goto LFF65C;
        func_800F8188(0x2100);
    LFF65C:
        func_800F6630(0x79);
        func_800F9690();
        func_800F6564(0x1704);
        func_800F5574(4);
        if (func_800F53D4() == 0)
            goto LFF6A4;
        func_800F6C68();
        func_800F824C(0xB7);
        goto LFF6B4;
    LFF6A4:
        func_800F6C68();
        func_800F824C(0xB8);
    LFF6B4:
        func_800FE870();
        func_80172BA8();
        func_80173008();
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(0x30);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
