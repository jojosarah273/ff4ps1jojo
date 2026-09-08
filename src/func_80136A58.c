#include "common.h"
void func_80136A58(void)
{
    func_801378B0();
    func_800F71DC(0xFFB8);
    func_800F8D6C(0x9F);
    func_80124130();
    func_80134E74();
    func_801241B8();
    func_801264C0();
    func_8011F6A4();
    func_80120FBC();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011FBA4();
    func_800F7500();
    func_8011FBA4();
    func_80120E2C();
    func_8016EA7C();
    func_8012AAC0();
    func_80126528();
    func_80120FBC();
    func_8011F684();
    func_80126480();
    func_80120B6C();
Lb24:
    for (;;) {
        func_800F654C(0x20);
        func_800F824C(0x3F);
        func_800F6564(0x1B7A);
        if (func_800F6434(2) != 0)
            goto Lb5c;
        func_800F71DC(0x3058);
        goto Lb64;
    Lb5c:
        func_800F71DC(0x3040);
    Lb64:
        func_800F7500(0x300);
        func_800F654C();
        func_8011F724();
        func_800F6564(0x1B7C);
        func_800F7500(0x19A);
        func_801206DC();
        func_8011F684();
        func_80126480();
        func_8011F884();
        func_80137938();
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) == 0)
            goto Lbfc;
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) == 0)
            return;
    }
Lbfc:
    func_800F7500(0x310);
    func_801376B0();
Lc0c:
    for (;;) {
        func_800F654C(0x20);
        func_800F824C(0x3F);
        func_800F6564(0x1B94);
        func_800F5140();
        func_800F4F4C();
        func_800F4008(0x58);
        func_800F824C(0x46);
        func_800F6564(0x1B95);
        if (func_800F6434(2) != 0)
            goto Lc84;
        func_800F654C(0x78);
        goto Lc8c;
    Lc84:
        func_800F654C(8);
    Lc8c:
        func_800F824C(0x45);
        func_8011F6D4();
        func_8011F684();
        func_8011F884();
    Lcac:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto Lcdc;
        func_800F5410();
        return;
    Lcdc:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto Ld74;
        func_80136FFC();
        if (func_800F53C0() == 0)
            goto Ld4c;
        func_801241B8();
        func_80120DB4();
        func_8012AAC0();
        func_80126528();
        func_801352F0();
        func_801264C0();
        func_801263C8();
    Ld4c:
        func_800F654C(0x20);
        func_800F824C(0x3F);
        func_80120F1C();
        func_800F7500(0x31C);
        func_8012B100();
    Ld74:
        func_800F6630(1);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto Ldc4;
        func_800F6564(0x1B95);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1B95);
        if (func_800F4120(2) != 0)
            goto Lf14;
    Ldc4:
        func_800F6630(1);
        func_800F4248(2);
        if (func_800F4120(2) != 0)
            goto Le14;
        func_800F6564(0x1B95);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1B95);
        if (func_800F4120(0x202) != 0)
            goto Le34;
    Le14:
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto Lef4;
    Le34:
        func_800F6564(0x1B94);
        func_800F5CCC();
        if (func_800F5B8C(0x80) != 0)
            goto Le64;
        func_800F8188(0x1B94);
        goto Lef4;
    Le64:
        func_800F6564(0x1B96);
        func_800F5CCC();
        if (func_800F5B8C(0x80) != 0)
            goto Lef4;
        func_800F8188(0x1B96);
        func_800F654C(8);
        func_800F824C(0x45);
        for (;;) {
            func_800F9644(0x20);
            func_800F5DD4(0x9F);
            func_800F5DD4(0x9F);
            func_800F9660(0x20);
            func_801266C8();
            func_800F5DA0(0x45);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        func_8011F7D4();
        if (func_800F53C0() == 0)
            goto Lcac;
    Lef4:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto Lc0c;
    Lf14:
        func_800F6564(0x1B94);
        func_800F61E8();
        func_800F5574(8);
        if (func_800F53D4() != 0)
            goto Lf4c;
        func_800F8188(0x1B94);
        goto Lc0c;
    Lf4c:
        func_800F6564(0x1B96);
        func_800F61E8();
        func_800F5574(0x11);
        if (func_800F53D4() != 0)
            goto Lc0c;
        func_800F8188(0x1B96);
        func_800F654C(8);
        func_800F824C(0x45);
        for (;;) {
            func_800F9644(0x20);
            func_800F62F0(0x9F);
            func_800F62F0(0x9F);
            func_800F9660(0x20);
            func_801266C8();
            func_800F5DA0(0x45);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        func_8011F7D4();
        if (func_800F53C0() == 0)
            goto Lcac;
        goto Lc0c;
    }
}
