#include "common.h"
extern u32 D_8019ED54[8];
extern u32 D_8019ED58[8];
void func_8013389C(void)
{
    func_800F654C();
    func_800F3D48();
    func_800F6E30(0x57);
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064(0xFF98);
    func_800F8274(0x99);
    func_800F9660(0x20);
    func_80120F1C();
    func_800F6630(0xE8);
    func_80124EAC();
    func_800F8D6C(0xE5);
    func_8012AAC0();
    func_801264C0();
    func_8016EA7C();
    func_800F6630(0xE8);
    func_80124EAC();
    func_800F8D6C(0x60);
main_loop:
    func_800F6E30(0x51);
    func_800F5140();
    func_800F4F4C();
    func_800F4008(0x76);
    func_800F824C(0x46);
    func_800F6E30(0x54);
    if (func_800F6434(2) == 0)
        func_800F654C(0x68);
    func_800F4008(8);
    func_800F824C(0x45);
    func_8011F6AC();
    func_8011F684();
    func_8011F884();
loop_bottom:
    func_800F6630(1);
    func_800F4248(1);
    if (func_800F4120(2) != 0)
        goto a28;
    func_800F6E30(0x54);
    func_800F61E8();
    func_800F4248(1);
    func_800F8A18(0x54);
    if (func_800F4120(2) != 0)
        goto b70;
a28:
    func_800F6630(1);
    func_800F4248(2);
    if (func_800F4120(2) != 0)
        goto a78;
    func_800F6E30(0x54);
    func_800F61E8();
    func_800F4248(1);
    func_800F8A18(0x54);
    if (func_800F4120(0x202) != 0)
        goto a98;
a78:
    func_800F6630(1);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto b50;
a98:
    func_800F6E30(0x51);
    func_800F5CCC();
    if (func_800F5B8C(0x8080) != 0)
        goto b48;
    func_800F6E30(0x57);
    func_800F5CCC();
    if (func_800F5B8C(0x80) != 0)
        goto b50;
    func_800F8A18(0x57);
    func_800F654C(8);
    for (;;) {
        func_800F9644(0x20);
        func_800F5DD4(0x99);
        func_800F5DD4(0x99);
        func_800F9660(0x20);
        func_801266C8();
        func_800F5CCC();
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_8011F7D4();
    if (func_800F53C0() == 0)
        goto loop_bottom;
    goto b50;
b48:
    func_800F8A18(0x51);
b50:
    func_800F6630(1);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto c38;
b70:
    func_800F6E30(0x51);
    func_800F61E8();
    func_800F5574(6);
    if (func_800F53D4() == 0)
        goto c30;
    func_800F6E30(0x57);
    func_800F61E8();
    func_800F5574(0x13);
    if (func_800F53D4() != 0)
        goto c38;
    func_800F8A18(0x57);
    func_800F654C(8);
    for (;;) {
        func_800F9644(0x20);
        func_800F62F0(0x99);
        func_800F62F0(0x99);
        func_800F9660(0x20);
        func_801266C8();
        func_800F5CCC();
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_8011F7D4();
    if (func_800F53C0() == 0)
        goto loop_bottom;
    goto c38;
c30:
    func_800F8A18(0x51);
c38:
    func_800F6630();
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto ec;
    func_800F7270(0x60);
    func_800F8D6C(0x5D);
    func_800F6E30(0x51);
    func_800F5410();
    func_800F3F38(func_800F3B04(func_800F3A70(0x57)));
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3B04(func_800F3A70(0x54)));
    func_800F5140();
    func_801224D0();
    func_800F6B68(0x1440);
    func_800F8D6C(0x4B);
    if (func_800F6434(2) != 0)
        goto d10;
    func_800F7270(0x5D);
    func_800F8D6C(0xE5);
    func_8013441C();
    if (func_800F53C0() == 0)
        goto L36C;
d10:
    func_800F6564(0x1B37);
    func_801224D0();
    func_800F7270(0x4B);
    func_800F824C(0x43);
    func_800F7594(0x43);
    func_800F6564(0x1B37);
    func_800F5574(2);
    if (func_800F53C0() == 0)
        goto f78;
    func_800F66D8(0x60);
    if (func_800F6434(0x202) != 0)
        goto db8;
    func_800F6B68(0x1440);
    if (func_800F6434(0x202) == 0)
        return;
    goto L2D4;
db8:
    func_800F6B68(0x1440);
    if (func_800F6434(0x202) != 0)
        goto e08;
    func_800F66D8(0x60);
    func_800F8768(0x1440);
    func_800F6048(func_800F3B04(0x1441 + *(u16 *)D_8019ED54[0]));
    goto L12C;
e08:
    if (func_800F54D4(func_800F3B04(func_800F3A70(0x60))) != 0)
        return;
    func_800F6B68(0x1441);
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto e90;
    func_800F66D8(0x60);
    func_800F9200();
    func_800F6B68(0x1440);
    func_800F82EC(0x60);
    func_800F93DC();
    goto L314;
e90:
    func_800F66D8(0x60);
    func_800F9330();
    func_80134948();
    if (func_800F53D4() != 0)
        goto ed8;
    func_800F971C();
    func_80134948();
    if (func_800F53D4() == 0)
        goto f60;
ed8:
    func_800F66D8(0x60);
    func_800F8768(0x1440);
    func_800F6048(func_800F3B04(0x1441 + *(u16 *)D_8019ED54[0]));
    func_800F95A0();
    func_800F6B68(0x1440);
    func_800F82EC(0x60);
    func_800F5B2C(func_800F3B04(0x1441 + *(u16 *)D_8019ED54[0]));
    if (func_800F5B8C(0x202) != 0)
        return;
    func_800F90EC(0x1440);
    return;
f60:
    func_800F95A0();
f68:
    func_8012219C();
    return;
f78:
    func_800F66D8(0x60);
    if (func_800F6434(0x202) != 0)
        goto L008;
    func_800F6B68(0x1440);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F82EC(0x60);
    func_80134A50();
    if (func_800F53C0() == 0)
        goto fe8;
    func_800F63BC();
    func_800F6B68(0x1441);
    func_800F82EC(0x60);
    goto L34C;
fe8:
    func_800F63BC();
    func_800F66D8(0x60);
    func_800F61E8();
    goto L2D4;
L008:
    func_800F6B68(0x1440);
    if (func_800F6434(0x202) != 0)
        goto L068;
    func_800F66D8(0x60);
    func_800F8768(0x1440);
    func_800F63BC();
    func_800F66D8(0x60);
    func_800F8768(0x1441);
    func_800F654C();
    func_800F82EC(0x60);
    func_800F5EA0();
    goto L134;
L068:
    if (func_800F54D4(func_800F3B04(func_800F3A70(0x60))) == 0)
        goto L144;
    func_80134A50();
    if (func_800F53C0() == 0)
        return;
    func_800F6B68(0x1441);
    func_800F63BC();
    func_800F5410();
    func_800F3F38(func_800F3B04(func_800F3A70(0x60)));
    func_800F5574(0x64);
    if (func_800F53C0() == 0)
        goto L344;
    func_800F5480();
    func_800F8058(0x63);
    func_800F8768(0x1441);
L12C:
    func_800F654C();
L134:
    func_800F82EC(0x60);
    return;
L144:
    func_800F6B68(0x1440);
    func_80134A50();
    if (func_800F53C0() != 0)
        goto L184;
    func_800F6B68(0x1441);
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L1AC;
L184:
    func_80134AB0();
    func_800F63BC();
    func_800F6364();
    func_80134AB0();
    return;
L1AC:
    func_800F63BC();
    func_800F654C(0x63);
    func_800F5480();
    func_800F7F48(func_800F3B04(func_800F3A70(0x60)));
    func_800F824C(0xE3);
    func_800F5EA0();
    func_800F66D8(0x60);
    func_80134948();
    if (func_800F53D4() != 0)
        goto L23C;
    func_800F654C();
    func_80134948();
    if (func_800F53D4() == 0)
        goto f68;
L23C:
    func_800F66D8(0x60);
    func_800F8768(0x1440);
    func_800F63BC();
    func_800F66D8(0x60);
    func_800F5410();
    func_800F3F38(func_800F3B04(0x1441 + *(u16 *)D_8019ED54[0]));
    func_800F8768(0x1441);
    func_800F7270(0x4B);
    func_800F6B68(0x1440);
    func_80134A50();
    if (func_800F53C0() != 0)
        goto L324;
    func_800F654C(1);
    func_800F82EC(0x60);
    func_800F5EA0();
    func_800F6B68(0x1440);
L2D4:
    func_800F82EC(0x60);
    func_800F5B2C(func_800F3B04(0x1441 + *(u16 *)D_8019ED54[0]));
    if (func_800F5B8C(0x202) != 0)
        return;
    func_800F654C();
L314:
    func_800F8768(0x1440);
    return;
L324:
    func_800F6B68(0x1441);
    func_800F82EC(0x60);
    func_800F5EA0();
    func_800F6B68(0x1440);
L344:
    func_800F82EC(0x60);
L34C:
    func_800F654C();
    func_800F8768(0x1440);
    func_800F8768(0x1441);
    return;
L36C:
    func_8012219C();
    func_800F6630(0xEB);
    if (func_800F6434(2) != 0)
        goto ec;
    func_8012B0D8();
    func_80120FBC();
    func_800F7500();
    func_8011FB74();
    func_80126458();
    func_8011F6A4();
    func_8011FF40();
    func_801240D0();
    func_800F7500();
    func_8011EF30();
    func_80126458();
ec:
    func_800F6630(1);
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto main_loop;
    return;
}
