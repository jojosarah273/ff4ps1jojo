#include "common.h"
void func_8015C220(void)
{
Lc228:
    for (;;) {
        func_800F6564(0x38E8);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    func_800F8FB8(0xDB);
    func_800F8FB8(0xD9);
    func_800F6630(0xD0);
    func_800F8188(0x38E9);
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F6B68(0x2000);
    func_800F4248(0x1F);
    func_800F5574(0x15);
    if (func_800F53D4() == 0)
        goto Lc318;
Lc298:
    for (;;) {
        func_800F6564(0x38A9);
        func_800F5140();
        func_800F6B68(0x389A);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto Lc308;
        func_800F824C(0xA9);
        func_800F6B68(0x389B);
        func_800F824C(0xAA);
        func_800F6240(0x38A9);
        goto Lc390;
    Lc308:
        func_800F8F74(0x38A9);
    }
Lc318:
    for (;;) {
        func_800F6564(0x38A8);
        func_800F5140();
        func_800F6B68(0x388C);
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            break;
        func_800F8F74(0x38A8);
    }
    func_800F824C(0xA9);
    func_800F6B68(0x388D);
    func_800F824C(0xAA);
    func_800F6240(0x38A8);
Lc390:
    func_800F6630(0xA9);
    func_800F5574(0xC0);
    if (func_800F53C0() == 0)
        goto Lc4a4;
    func_800F5480();
    func_800F8058(0xC0);
    func_800F824C(0xDC);
    func_800F8188(0x38EA);
    func_800F6630(0xA9);
    func_800F5574(0xCE);
    if (func_800F53D4() == 0)
        goto Lc408;
    func_800F654C(0xFF);
    func_800F824C(0xDA);
    goto Lc48c;
Lc408:
    for (;;) {
        func_8015316C();
        func_800F824C(0xA9);
        func_800F5410();
        func_800F4008(5);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    func_800F6630(0xA9);
    func_800F971C();
    func_80153098();
    func_800F824C(0xDA);
Lc48c:
    func_800F654C(0x80);
    func_800F824C(0xD8);
    goto Lc534;
Lc4a4:
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto Lc504;
    func_800F654C(2);
    func_800F8188(0x38EA);
    func_800F6630(0xAA);
    func_800F824C(0xDC);
    func_800F654C(0x20);
    func_800F824C(0xD8);
    func_800F654C(0xFF);
    func_800F824C(0xDA);
    goto Lc534;
Lc504:
    func_800F6630(0xAA);
    func_800F824C(0xDC);
    func_800F654C(0x40);
    func_800F824C(0xD8);
    func_800F654C(0xFF);
    func_800F824C(0xDA);
Lc534:
    func_800F6240(0x38E8);
    return;
}
