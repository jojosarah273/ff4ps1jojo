#include "common.h"
extern u32 D_8019ED54[8];
extern u32 D_8019ED58[8];
extern u32 D_8019EF0C[8];
extern u32 D_800D1E05[8];
void func_8012B190(void)
{
    func_800F6564(0x1B23);
    func_800F5410();
    func_800F3F38(func_800F3B04(0x1B1A));
    if (func_800F54D4(func_800F3B04(0x1B25)) == 0)
        goto L410;
    func_800F6564(0x1B22);
    if (func_800F54D4(func_800F3B04(0x1B24)) == 0)
        goto L410;
    func_800F6564(0x1B25);
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3B04(0x1B24));
    func_800F5140();
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_800F7270(0x45);
    func_800F6B68(0x1441);
    if (func_800F6434(2) != 0)
        goto L814;
    func_800F6B68(0x1440);
    func_800F5574(0xFE);
    if (func_800F53D4() == 0)
        goto L2B8;
    func_800F654C(0x63);
    func_800F824C(0xE3);
    func_800F71DC(0x1440);
    func_8012E844();
    func_801221EC();
    return;
L2B8:
    func_8012AE00();
    func_800F6630(0x60);
    func_800F4248(8);
    if (func_800F4120(0x202) != 0)
        goto L38C;
    func_800F6B68(0x1440);
    func_800F8188(0x1B3B);
    func_800F8D00(0x1B3C);
    *(u8 *)D_800D1E05[0] = *(u8 *)D_8019EF0C[0];
    func_800F5574(0xED);
    if (func_800F53D4() == 0)
        goto L35C;
    func_800F5B2C(func_800F3B04(0x1441 + *(u16 *)D_8019ED54[0]));
    if (func_800F5B8C(0x202) != 0)
        goto L850;
    func_800F90EC(0x1440);
    goto L850;
L35C:
    func_800F5574(0xCE);
    if (func_800F53C0() == 0)
        goto L38C;
    func_800F5574(0xEB);
    if (func_800F53C0() == 0)
        goto L690;
L38C:
    func_801210AC();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011FBA4();
L3C0:
    func_801263F0();
    func_8011FF40();
    func_8012B0B0();
    func_801210AC();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011FBA4();
    return;
L410:
    func_8012B0B0();
    func_800F6564(0x1B23);
    func_800F5410();
    func_800F3F38(func_800F3B04(0x1B1A));
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3B04(0x1B22));
    func_800F5140();
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_800F7594(0x45);
    func_800F6564(0x1B25);
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3B04(0x1B24));
    func_800F5140();
    func_800F824C(0x45);
    func_800F7270(0x45);
    func_800F6D70(0x1440);
    func_800F5574(0xFF);
    if (func_800F53D4() == 0)
        goto L560;
    func_800F6B68(0x1440);
    if (func_800F6434(2) != 0)
        goto L560;
    func_800F5574(0xED);
    if (func_800F53D4() != 0)
        goto L670;
    func_800F5574(0x19);
    if (func_800F53D4() != 0)
        goto L550;
    func_800F5574(0xC8);
    if (func_800F53D4() != 0)
        goto L550;
    func_800F5574(0xEC);
    if (func_800F53C0() == 0)
        goto L670;
L550:
    func_8012219C();
    goto L5F8;
L560:
    func_800F6B68(0x1440);
    if (func_800F54D4(func_800F3B04(0x1440 + *(u16 *)D_8019ED58[0])) != 0)
        goto L620;
L598:
    func_800F6B68(0x1440);
    func_800F9200();
    func_800F6B68(0x1441);
    func_800F9200();
    func_800F6D70(0x1440);
    func_800F8768(0x1440);
    func_800F6D70(0x1441);
    func_800F8768(0x1441);
    func_800F93DC();
    func_800F8960(0x1441);
    func_800F93DC();
    func_800F8960(0x1440);
L5F8:
    func_80120FBC();
    func_8012AAC0();
    func_8012B0B0();
    func_801210AC();
    return;
L620:
    func_800F6D70(0x1441);
    func_800F5410();
    func_800F3F38(func_800F3B04(0x1441 + *(u16 *)D_8019ED54[0]));
    func_800F5574(0x64);
    if (func_800F53C0() != 0)
        goto L598;
    func_800F8960(0x1441);
L670:
    func_800F654C();
    func_800F8768(0x1440);
    func_800F8768(0x1441);
    goto L5F8;
L690:
    func_800F5574(0xDE);
    if (func_800F53D4() != 0)
        goto L6F0;
    func_800F5574(0xE2);
    if (func_800F53C0() != 0)
        goto L6F0;
    func_8012BAF8();
    func_800F6630(0xE8);
    if (func_800F6434(0x80) != 0)
        goto L7DC;
    func_80124EAC();
    func_800F8D6C(0x60);
L6F0:
    func_800F7210(0x1B3C);
    func_800F5B2C(func_800F3B04(0x1441 + *(u16 *)D_8019ED54[0]));
    if (func_800F5B8C(0x202) != 0)
        goto L730;
    func_800F90EC(0x1440);
L730:
    func_800F6564(0x1B3B);
    func_800F5480();
    func_800F8058(0xCE);
    func_800F71DC(0xA67C);
    func_80120070();
    func_800F6564(0x1B3B);
    func_800F5574(0xDE);
    if (func_800F53D4() != 0)
        goto L7DC;
    func_800F5574(0xE2);
    if (func_800F53C0() != 0)
        goto L7DC;
    func_800F6564(0x1A82);
    if (func_800F6434(0x202) != 0)
        goto L7DC;
    func_8012BA14();
    func_801263F0();
    func_8011FF40();
L7DC:
    func_800F8F74(0x1A82);
    func_8012102C();
    func_800F7500();
    func_8011FB74();
    func_801263F0();
    return;
L814:
    func_801210AC();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011FBA4();
    goto L3C0;
L850:
    func_800F6564(0x1E05);
    func_800F9200();
    func_800F8F74(0x1B19);
    func_800F654C(1);
    func_800F8188(0x1A88);
    func_800F7270(0x93);
    func_800F8D00(0x1BA5);
    func_800F654C(0x85);
    func_800F8188(0x1E00);
    func_80169128();
    func_80126610();
    func_800F654C(0x4C);
    func_8012224C();
    func_800F654C(0xF0);
    for (;;) {
        func_8011F320();
        func_800F5CCC();
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(0x30);
    func_80138A34();
    func_80138A6C();
    func_800F93DC();
    func_80138A34();
    func_800F654C();
    func_800F3D48();
    func_800F7210(0x1A65);
    return;
}
