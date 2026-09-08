#include "common.h"
void func_80170C14(void)
{
    func_800F6630(0xD3);
    if (func_800F6434(2) == 0)
        return;
    func_800F926C();
    func_800F654C(0x15);
    func_800F9200();
    func_800F9448();
    func_800F6564(0x1703);
    func_800F8FB8(0x4A);
    func_800F7864();
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x4A));
    func_800F7864();
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x4A));
    func_800F824C(0x4B);
    func_800F7270(0x4A);
    func_800F6B68(0x1001);
    func_800F4248(0x1F);
    func_800F6B68(0xB2FA);
    func_800F5140();
    func_800F8188(0x710);
    func_800F6630(0xD8);
    if (func_800F6434(2) == 0) {
        func_800F654C(8);
        func_800F8188(0x1705);
    }
    func_800F6564(0x1705);
    func_800F5574(8);
    if (func_800F53D4() != 0) {
        func_800F6630(0x7B);
        func_800F5410();
        func_800F4008(0x10);
        func_800F4248(3);
    }
    func_800F824C(7);
    func_800F8FB8(6);
    func_800F6564(0x1705);
    func_800F5574(8);
    if (func_800F53D4() != 0)
        goto Le9c;
    func_800F5574(4);
    if (func_800F53C0() != 0)
        goto Ldec;
    func_800F6630(0xAB);
    if (func_800F6434(2) != 0)
        goto Le9c;
Ldec:
    func_800F6630(0x7B);
    func_800F4248(8);
    func_800F5410();
    func_800F3F38(func_800F3C3C(7));
    func_800F824C(7);
    func_800F6630(0xAB);
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        goto Le9c;
    func_800F6630(0x7B);
    func_800F4248(8);
    func_800F824C(6);
Le9c:
    func_800F6630(7);
    func_800F7500();
Lec4:
    for (;;) {
        func_800F6D70(0xC0B4);
        func_800F8960(0x470);
        func_800F63BC();
        func_800F6D70(0xC0B4);
        func_800F5480();
        func_800F7F48(func_800F3C3C(6));
        func_800F8960(0x470);
        func_800F63BC();
        func_800F6B68(0xC0C4);
        func_800F8960(0x470);
        func_800F6364();
        func_800F63BC();
        func_800F6B68(0xC0C4);
        func_800F4248(0xF1);
        func_800F5410();
        func_800F3F38(func_800F3B04(0x710));
        func_800F8960(0x470);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(8);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F7500();
    for (;;) {
        func_800F6D70(0xC0BC);
        func_800F8960(0x4F0);
        func_800F63BC();
        func_800F6D70(0xC0BC);
        func_800F5480();
        func_800F7F48(func_800F3C3C(6));
        func_800F8960(0x4F0);
        func_800F63BC();
        func_800F6B68(0xC0C4);
        func_800F8960(0x4F0);
        func_800F6364();
        func_800F63BC();
        func_800F6B68(0xC0C4);
        func_800F4248(0xF1);
        func_800F5410();
        func_800F3F38(func_800F3B04(0x710));
        func_800F8960(0x4F0);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(8);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6630(0xA2);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto L0ec;
    func_800F6564(0x473);
    func_800F8188(0x473);
    func_800F6564(0x477);
    func_800F8188(0x477);
    func_800F6564(0x4F3);
    func_800F4248(0xCF);
    func_800F8188(0x4F3);
    func_800F6564(0x4F7);
    func_800F4248(0xCF);
    func_800F8188(0x4F7);
L0ec:
    func_800F6630(0xA2);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L17c;
    func_800F6630(0xA1);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L154;
    func_800F6630(0xA1);
    func_800F4248(3);
    func_800F4370(0xD2);
    if (func_800F4120(0x202) != 0)
        goto L17c;
L154:
    func_800F654C(0xF8);
    func_800F8188(0x471);
    func_800F8188(0x475);
    func_800F8188(0x4F1);
    func_800F8188(0x4F5);
L17c:
    func_800F9448();
    return;
}
