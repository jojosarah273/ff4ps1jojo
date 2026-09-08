#include "common.h"
void func_80173008(void)
{
    func_800F926C();
    func_800F654C(0x15);
    func_800F9200();
    func_800F9448();
    func_800F6564(0x1704);
    func_800F5574(5);
    if (func_800F53D4() != 0)
        goto L150;
    func_800F6564(0x1720);
    if (func_800F6434(2) != 0)
        goto L63c;
    func_800F6564(0x1701);
    if (func_800F54D4(func_800F3B04(0x1723)) == 0)
        goto L63c;
    func_800F6630(0xAD);
    func_800F5574(0x20);
    if (func_800F53C0() != 0)
        goto L0c8;
    func_800F4248(0xF);
    if (func_800F4120(0x202) != 0)
        goto L63c;
L0c8:
    func_800F6564(0x1721);
    func_800F824C(0xC);
    func_800F6564(0x1722);
    func_800F824C(0xE);
    func_80173ED8();
    func_800F6630(0xD7);
    if (func_800F6434(0x202) == 0)
        goto L63c;
    func_800F6630(0xAD);
    func_800F5574(0x10);
    if (func_800F53D4() != 0)
        goto L140;
    func_800F654C(5);
    func_80171E18();
    return;
L140:
    func_800F654C(3);
    goto L1b0;
L150:
    func_800F6630(0xB8);
    func_801729E0();
    func_800F654C(0x70);
    func_800F824C(0xC);
    func_800F654C(0x70);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0xB8));
    func_800F824C(0xE);
    func_800F8FB8(0xD);
    func_800F8FB8(0xF);
    func_800F6564(0x1705);
L1b0:
    func_800F824C(7);
    func_800F6564(0x1704);
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto L240;
    func_800F6564(0x6FD);
    func_800F6630(0x7A);
    func_800F4960(0xBE37);
    if (func_800F4120(0x202) != 0)
        goto L240;
    func_800F654C(0x10);
    goto L248;
L240:
    func_800F654C();
L248:
    func_800F5410();
    func_800F3F38(func_800F3C3C(7));
    func_800F7500();
L280:
    for (;;) {
        func_800F6B68(0xBFB4);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xC));
        func_800F8960(0x458);
        func_800F6630(0xD);
        func_800F4008();
        func_800F4248(1);
        if (func_800F4120(2) == 0) {
            func_800F654C(0x56);
            func_801714C4();
        }
        func_800F6B68(0xBFB5);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xE));
        func_800F8960(0x459);
        func_800F6B68(0xBFB6);
        func_800F5410();
        func_800F4008(0xD8);
        func_800F8960(0x45A);
        func_800F6B68(0xBFB7);
        func_800F5410();
        func_800F4008(0x1C);
        func_800F8960(0x45B);
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
    func_800F6564(0x1287);
    func_800F4248(0x20);
    if (func_800F4120(2) != 0)
        goto L63c;
    func_800F6564(0x1704);
    func_800F5574(5);
    if (func_800F53D4() != 0)
        goto L408;
    func_800F6630(0xAD);
    func_800F5574(0x10);
    if (func_800F53D4() != 0)
        goto L418;
    goto L63c;
L408:
    func_800F6564(0x1705);
    goto L420;
L418:
    func_800F654C(3);
L420:
    func_800F824C(7);
    func_800F6C68(7);
    func_800F6630(7);
    func_800F824C();
    func_800F6564(0x1704);
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto L4fc;
    func_800F6564(0x6FD);
    func_800F6630(0x7A);
    func_800F4960(0xBE37);
    if (func_800F4120(2) != 0)
        goto L4fc;
    func_800F654C(4);
    goto L504;
L4fc:
    func_800F654C();
L504:
    func_800F5410();
    func_800F3F38(func_800F3C3C(7));
    func_800F6630(0xC);
    func_800F5480();
    func_800F8058(8);
    func_800F824C(0xC);
    func_800F6630(0xD);
    func_800F8058();
    func_800F824C(0xD);
    func_800F6630(0xC);
    func_800F5410();
    func_800F3F38(func_800F3B04(0xBB18));
    func_800F8960(0x454);
    func_800F6630(0xD);
    func_800F4008();
    func_800F4248(1);
    if (func_800F4120(2) == 0) {
        func_800F654C(0x55);
        func_801714C4();
    }
    func_800F6630(0xE);
    func_800F5410();
    func_800F3F38(func_800F3B04(0xBB19));
    func_800F8960(0x455);
    func_800F6B68(0xBB1A);
    func_800F8960(0x456);
    func_800F6B68(0xBB1B);
    func_800F8960(0x457);
L63c:
    func_800F9448();
    return;
}
