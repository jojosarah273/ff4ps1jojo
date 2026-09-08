#include "common.h"
void func_80171608(void)
{
    func_800F926C();
    func_800F654C(0x15);
    func_800F9200();
    func_800F9448();
    func_800F6564(0x170F);
    if (func_800F6434(2) != 0)
        goto L9b0;
    func_800F5574(2);
    if (func_800F53D4() != 0)
        goto L708;
    func_800F6564(0x1701);
    if (func_800F6434(0x202) != 0)
        goto L9b0;
    func_800F6630(0xAD);
    func_800F5574(0x10);
    if (func_800F53D4() == 0)
        goto L9b0;
    func_800F6564(0x1704);
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto L730;
    func_800F6564(0x1710);
    func_800F824C(0xC);
    func_800F6564(0x1711);
    func_800F824C(0xE);
    func_80173ED8();
    func_800F6630(0xD7);
    if (func_800F6434(0x202) == 0)
        goto L9b0;
    func_800F654C(3);
    goto L768;
L708:
    func_800F6564(0x1710);
    func_800F824C(0xC);
    func_800F6564(0x1711);
    func_800F824C(0xE);
    goto L750;
L730:
    func_800F654C(0x70);
    func_800F824C(0xC);
    func_800F654C(0x70);
    func_800F824C(0xE);
L750:
    func_800F8FB8(0xD);
    func_800F8FB8(0xF);
    func_800F6564(0x1705);
L768:
    func_800F824C(7);
    func_800F6564(0x1704);
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L7f0;
    func_800F6630(0xAB);
    if (func_800F6434(2) != 0)
        goto L7f8;
    func_800F6630(0x7A);
    func_800F4248(4);
    goto L7f8;
L7f0:
    func_800F654C();
L7f8:
    func_800F5410();
    func_800F3F38(func_800F3C3C(7));
    func_800F7500();
L830:
    for (;;) {
        func_800F6B68(0xC034);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xC));
        func_800F8960(0x490);
        func_800F6630(0xD);
        func_800F4008();
        func_800F4248(1);
        if (func_800F4120(2) == 0) {
            func_800F654C(0x64);
            func_801714C4();
        }
        func_800F6B68(0xC035);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xE));
        func_800F8960(0x491);
        func_800F6B68(0xC036);
        func_800F8960(0x492);
        func_800F6B68(0xC037);
        func_800F8960(0x493);
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6564(0x1704);
    func_800F5574(1);
    if (func_800F53D4() != 0) {
        func_800F6630(0xA2);
        func_800F4248(8);
        func_800F8188(0x170E);
    }
    func_800F6564(0x170E);
    if (func_800F6434(2) != 0)
        goto L9b0;
    func_800F6564(0x49B);
    func_800F4248(0xCF);
    func_800F8188(0x49B);
    func_800F6564(0x49F);
    func_800F4248(0xCF);
    func_800F8188(0x49F);
L9b0:
    func_800F9448();
    return;
}
