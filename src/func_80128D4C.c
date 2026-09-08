#include "common.h"
void func_80128D4C(void)
{
    func_800F65C8(0x1B49);
    if (func_800F6434(0x202) != 0)
        goto dE8;
    func_80123D3C();
    func_80125A64();
    func_80120F1C();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011EF30();
    func_800F7500(0x1040);
    func_800F654C(0x30);
    func_800F8188(0x1C1);
    func_800F6564(0x1B18);
    func_80124704();
    goto E00;
dE8:
    func_800F7500();
    func_8011EF30();
E00:
    func_800F7500();
    func_8011EF30();
    func_80120E2C();
    func_800F7500();
    func_8011EF30();
    func_80129AD4();
    func_800F9644(0x20);
    func_800F6558(0x800);
    func_800F71DC(0xD600);
    func_800F7500(0xB600);
    func_800F3D64(0x7E7E);
    func_800F9660(0x20);
    func_80120F1C();
    func_800F6564(0x1B49);
    if (func_800F6434(2) == 0) {
        func_800F7500();
        func_8011EF30();
    }
    func_800F654C(0x7E);
    func_800F9200();
    func_800F9448();
    func_800F71DC(0x1B00);
    func_800F654C(0xA);
    for (;;) {
        func_800F90EC();
        func_800F5CCC();
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F8F74(0x1B08);
    func_800F71DC(0x1B0A);
    func_800F7500(6);
    for (;;) {
        func_800F6B68();
        func_800F8768(7);
        func_800F6364();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            break;
        func_800F6240(0x1B08);
    }
    func_800F5EA0();
    if (func_800F5C64(0x202) != 0)
        goto fEC;
    func_800F5D24(0x1B08);
    func_800F6564(0x1B08);
    func_800F8188(0x1B09);
    func_80129AAC();
    func_80129C54();
    func_800F654C(2);
    func_800F8188(0x1B06);
    func_801264C0();
    func_80126458();
    func_80126528();
    func_800F654C(0x19);
    func_800F81E8(0x212C);
    func_800F71DC(0xFFFC);
    func_800F8D6C(0x90);
    func_800F8D6C(0x9C);
    func_8016EA7C();
    func_8011F6A4();
    func_80126590();
    func_800F8F74(0x1BBA);
    goto L5C0;
fEC:
    func_80129DFC();
ff4:
    func_80129808();
    func_800F6564(0x1B06);
    func_800F5140();
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_800F7270(0x45);
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064(0xDBBA);
    func_800F8274(0x5A);
    func_800F6558(1);
    func_800F8274(0x5C);
    func_800F9660(0x20);
    func_800F6564(0x1B06);
    func_800F824C(0x45);
    func_800F5140();
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_800F9644(0x20);
    func_800F6658(0x45);
    func_800F5410();
    func_800F4064(0x1B00);
    func_800F8274(0x5D);
    func_800F6214();
    func_800F8274(0x60);
    func_800F9660(0x20);
L10C:
    func_80129C54();
    func_800F6E30(0x5D);
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_800F7270(0x45);
    func_800F6C68();
    func_800F824C(0x48);
    func_800F6E30(0x60);
    func_800F5410();
    func_800F4008(0x50);
    func_800F824C(0x49);
    func_800F7270(0x48);
    func_800F7500(0x300);
    func_8011F724();
    func_80129D2C();
    func_8011F684();
    func_801264E8();
    func_8011F884();
    func_800F6630();
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        goto L218;
    func_800F6564(0x1B06);
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L208;
    func_800F654C(0xFF);
    func_800F8188(0x1B06);
L208:
    func_80129E94();
    goto ff4;
L218:
    func_800F6630(1);
    func_800F52BC(8);
    if (func_800F53D4() != 0)
        goto L298;
    for (;;) {
        func_800F6E30(0x60);
        func_800F5CCC();
        if (func_800F5B8C(0x8080) != 0)
            goto L260;
        func_800F654C(7);
   L260:
        func_800F8A18(0x60);
        func_80129B04();
        if (func_800F53D4() != 0)
            continue;
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L298:
    func_800F6630(1);
    func_800F52BC(4);
    if (func_800F53D4() != 0)
        goto L320;
    for (;;) {
        func_800F6E30(0x60);
        func_800F61E8();
        func_800F5574(8);
        if (func_800F53C0() == 0)
            goto L2E8;
        func_800F971C();
   L2E8:
        func_800F8A18(0x60);
        func_80129B04();
        if (func_800F53D4() != 0)
            continue;
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L320:
    func_800F6630(1);
    func_800F52BC(2);
    if (func_800F53D4() != 0)
        goto L3C0;
    func_800F6E30(0x5D);
    func_800F5CCC();
    if (func_800F5B8C(0x8080) == 0)
        goto L408;
    func_800F8A18(0x5D);
    func_80129B04();
    for (;;) {
        if (func_800F53D4() != 0)
            goto L408;
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            goto L3C0;
        func_800F6E30(0x5D);
        func_800F5CCC();
        func_800F8A18(0x5D);
        func_80129B04();
    }
L3C0:
    func_800F6630(1);
    func_800F52BC(1);
    if (func_800F53D4() != 0)
        goto L498;
    func_800F6E30(0x5D);
    func_800F61E8();
    func_800F5574(0xA);
    if (func_800F53C0() == 0)
        goto L418;
L408:
    func_800F8F74(0x1B07);
    goto L5B8;
L418:
    func_800F8A18(0x5D);
    func_80129B04();
    for (;;) {
        if (func_800F53D4() != 0)
            goto L478;
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            goto L498;
        func_800F6E30(0x5D);
        func_800F61E8();
        func_800F8A18(0x5D);
        func_80129B04();
    }
L478:
    func_800F6E30(0x5D);
    func_800F5CCC();
    func_800F8A18(0x5D);
    goto L408;
L498:
    func_800F6630();
    func_800F52BC(0x80);
    if (func_800F53D4() != 0)
        goto L528;
    func_800F6564(0x1B08);
    func_800F61E8();
    func_800F5574(6);
    if (func_800F53C0() != 0)
        goto L528;
    func_800F8188(0x1B08);
    func_80129B04();
    func_800F9200();
    func_800F6564(0x1B08);
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_800F7594(0x45);
    func_800F93DC();
    func_800F8960(0x1B0A);
L528:
    func_800F6630(1);
    func_800F52BC(0x80);
    if (func_800F53D4() != 0)
        goto L10C;
    func_800F6564(0x1B08);
    if (func_800F6434(0x80) != 0)
        goto L5A8;
    func_800F5CCC();
    func_800F8188(0x1B08);
    func_800F61E8();
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_800F7594(0x45);
    func_800F654C(0xFF);
    func_800F8960(0x1B0A);
    goto L10C;
L5A8:
    func_80129838();
    goto L10C;
L5B8:
    func_80129D64();
L5C0:
    func_80129808();
L5C8:
    func_800F6564(0x1B06);
    func_801224D0();
    func_800F824C(0x46);
    func_800F654C(0xC);
    func_800F824C(0x45);
    func_8011F6D4();
    func_80129D2C();
    func_8011F684();
    func_8011F884();
    func_800F6630();
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto L6F4;
    func_800F6564(0x1B06);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto L6CC;
    func_800F6564(0x1B08);
    if (func_800F6434(0x80) != 0)
        goto L69C;
    func_80126610();
    return;
L69C:
    func_80129838();
    func_80129C54();
    func_801264C0();
    func_8011FF40();
    func_80126610();
    return;
L6CC:
    func_800F6564(0x1BBA);
    if (func_800F6434(0x202) != 0)
        goto L7DC;
    func_80129EF4();
    goto L7DC;
L6F4:
    func_800F6630(1);
    func_800F52BC(8);
    if (func_800F53D4() != 0)
        goto L754;
    func_800F6564(0x1B06);
    func_800F5CCC();
    func_800F8188(0x1B06);
    if (func_800F5B8C(0x8080) != 0)
        goto L744;
    func_800F654C(2);
L744:
    func_800F8188(0x1B06);
    func_80129808();
L754:
    func_800F6630(1);
    func_800F52BC(4);
    if (func_800F53D4() != 0)
        goto L77C;
    func_80129E94();
L77C:
    func_800F6630(1);
    func_800F52BC(3);
    if (func_800F53D4() != 0)
        goto L5C8;
    func_800F6564(0x1BBA);
    if (func_800F6434(0x202) != 0)
        goto L7BC;
    func_80129EF4();
L7BC:
    func_800F6564(0x1B06);
    func_800F5574(2);
    if (func_800F53C0() != 0)
        goto L5C8;
L7DC:
    func_800F654C(1);
    func_800F8188(0x1B07);
    goto fEC;
}
