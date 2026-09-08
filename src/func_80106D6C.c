#include "common.h"
extern u32 D_8019ED40[8];
extern u32 D_8019EE60[8];
void func_80106D6C(void)
{
    func_800F92D8();
    func_800F9644(0x20);
    func_800F922C();
    func_800F9330();
    func_800F939C();
    func_800F926C();
    func_800F9298();
    func_800F6558();
    func_800F9660(0x20);
    func_800F71DC(0x600);
    func_800F9330();
    func_800F94B8();
    func_800F654C();
    func_800F9200();
    func_800F9448();
    func_800F8FB8(0x7F);
    func_800F6630(0xC4);
    if (func_800F6434(2) != 0)
        goto Le24;
    func_80119C7C();
    func_800F8FB8(0xC4);
    goto Le2c;
Le24:
    func_8017668C();
Le2c:
    func_801743E0();
    func_800F6630(0x7E);
    if (func_800F6434(2) != 0)
        goto Le5c;
    func_800F8FB8(0x7E);
    goto L03c;
Le5c:
    func_800F6630(0xD9);
    if (func_800F6434(2) != 0)
        goto Le84;
    func_800FEB10();
    goto L03c;
Le84:
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto Lf4c;
    func_800FDB5C();
    func_800F6630(0x7A);
    func_800F7864();
    if (func_800F7728(0x101) == 0)
        goto Lf14;
    func_800F6630(0x94);
    if (func_800F6434(2) != 0)
        goto Lef4;
    func_800F8FB8(0x94);
    func_8011DBF0();
Lef4:
    func_80174F64();
    func_80175004();
    func_80175494();
    goto L03c;
Lf14:
    func_800F6630(0x94);
    if (func_800F6434(2) != 0)
        goto Lf3c;
    func_800F8FB8(0x94);
    func_8011DBF0();
Lf3c:
    func_80175F00();
    goto L03c;
Lf4c:
    func_800F6630(0x94);
    if (func_800F6434(2) != 0)
        goto Lf74;
    func_800F8FB8(0x94);
    func_8011DA88();
Lf74:
    func_80175B60();
    func_8011A334();
    func_8010A5A0();
    func_8010A204();
    func_80109A28();
    func_801098C8();
    func_800F6630(0xDF);
    if (func_800F6434(2) != 0)
        goto Lfc4;
    func_801096F0();
Lfc4:
    func_800F6630(0xDA);
    if (func_800F6434(2) != 0)
        goto Lfe4;
    func_80106960();
Lfe4:
    func_800F6630(0x7A);
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto L024;
    func_80109B08();
    func_80107530();
    func_801750DC();
    goto L03c;
L024:
    func_80175F00();
    func_800FCA08();
    func_801769B4();
L03c:
    func_800F6630(0xCA);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto L094;
    func_800F62BC(0x80);
    func_800F6630(0x80);
    func_800F8188(0x2100);
    func_800F5574(0xF);
    if (func_800F53D4() == 0)
        goto L094;
    func_800F8FB8(0xCA);
L094:
    func_8011BD88();
    func_800F6630(0xC2);
    if (func_800F6434(2) != 0)
        goto L140;
    func_800F6630(0xD9);
    if (func_800F6434(0x202) != 0)
        goto L140;
    func_800F6630(0xB1);
    if (func_800F6434(0x202) != 0)
        goto L140;
    func_800F6564(0x1704);
    if (func_800F6434(0x202) != 0)
        goto L140;
    func_800F6630(0x7B);
    func_800F4248(0xC);
    func_800F824C(0x77);
L140:
    func_800F6630(0x77);
    func_800F8188(0x2106);
    func_800F8FB8(0x10);
    func_800F6630(0xE3);
    if (func_800F6434(2) != 0)
        goto L1a0;
    func_800F654C(1);
    func_800F824C(0x10);
    func_8010D9D4();
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        goto L254;
L1a0:
    func_800F6630(0x5A);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x10));
    *(u16 *)D_8019EE60[0] = (u8)*(u16 *)D_8019ED40[0];
    func_800F6630(0x5B);
    func_800F4008(0);
    *(u16 *)D_8019EE60[0] = (u16)(*(u16 *)D_8019EE60[0] | ((u8)*(u16 *)D_8019ED40[0] << 8));
    func_800F6630(0x5E);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x10));
    *(u16 *)D_8019EE60[0] = (u8)*(u16 *)D_8019ED40[0];
    func_800F6630(0x5F);
    func_800F4008(0);
    func_800F6630(0x60);
    func_800F6630(0x61);
    goto L300;
L254:
    func_800F6630(0x5A);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0x10));
    func_800F6630(0x5B);
    func_800F8058();
    *(u16 *)D_8019EE60[0] = (u8)*(u16 *)D_8019ED40[0];
    func_800F6630(0x5E);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0x10));
    func_800F6630(0x5F);
    func_800F8058();
    func_800F6630(0x5C);
    func_800F6630(0x5D);
L300:
    func_800F6630(0x5A);
    func_800F5410();
    func_800F4008(0x78);
    func_800F824C(0x6A);
    func_800F6630(0x5B);
    func_800F4008();
    func_800F824C(0x6B);
    func_800F6630(0x5C);
    func_800F5410();
    func_800F4008(0x78);
    func_800F824C(0x6C);
    func_800F6630(0x5D);
    func_800F4008();
    func_800F824C(0x6D);
    func_800F6630(0x6A);
    func_800F8188(0x211F);
    func_800F6630(0x6B);
    func_800F8188(0x211F);
    func_800F6630(0x6C);
    func_800F8188(0x2120);
    func_800F6630(0x6D);
    func_800F8188(0x2120);
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto L4c8;
    func_800F654C(0x30);
    func_800F8188(0x420C);
L4c8:
    func_8011EADC();
    func_800F62BC(0x7A);
    func_800F6240(0xFFF);
    func_800F8FB8(0x7D);
    func_800F9644(0x20);
    func_800F94B8();
    func_800F9448();
    func_800F960C();
    func_800F95A0();
    func_800F9410();
    func_800F9538();
    return;
}
