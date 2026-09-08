#include "common.h"
void func_8010D894(void)
{
    /* battle row: 0x7/0x3D/0x3E windows, 0xFE5/0x1701 texts, 0x12E0
       gate; loop L10D96C (5A90/53D4). */
    func_800F939C();
    func_800F9200();
    func_800F4248(7);
    func_800F824C(7);
    func_800F93DC();
    func_800F824C(0x3D);
    func_800F6564(0xFE5);
    if (func_800F6434(0x80) != 0)
        goto L10D914;
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto L10D934;
L10D914:
    func_800F6630(0x3D);
    func_800F5410();
    func_800F4008(0x20);
    func_800F824C(0x3D);
L10D934:
    func_800F8FB8(0x3E);
    func_800F6630(7);
    func_800F7270(0x3D);
    func_800F6C68(0x12E0);
L10d96c:
    for (;;) {
        func_800F5A90();
        if (func_800F53D4() != 0)
            goto L10D99C;
        func_800F7864();
        func_800F5EA0();
    }
L10D99C:
    func_800F7864();
    func_800F76E8();
    func_800F654C();
    func_800F4008();
    func_800F960C();
    return;
}
