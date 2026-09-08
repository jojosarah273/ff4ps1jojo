#include "common.h"
extern u32 D_8019ED54[8];
extern u32 D_8019ED58[8];
void func_80150C58(void)
{
    func_80151F28();
    func_800F71DC(0xFF);
    for (;;) {
        func_800F6C68();
        func_800F8768(0x1900);
        func_800F5E48();
        if (func_800F5C64(0x8080) == 0)
            break;
    }
    func_80151CD8();
    func_800F71DC(0x7F);
    func_800F971C();
    func_800F5410();
    for (;;) {
        func_800F3F38(func_800F3B04(0x600 + *(u16 *)D_8019ED54[0]));
        func_800F5E48();
        if (func_800F5C64(0x8080) == 0)
            break;
    }
    func_800F824C(0x97);
    func_8005A234();
    func_800F6564(0x1802);
    func_800F9200();
    func_800F9200();
    func_800F4248(0x80);
    func_800F8188(0x352C);
    func_800F93DC();
    func_800F4248(0x40);
    func_800F824C(0xA9);
    func_800F93DC();
    func_800F4248(0x3F);
    func_800F8188(0x1802);
    func_800F6630(0xA9);
    if (func_800F6434(2) == 0) {
        func_800F654C(7);
        func_800F8188(0x1802);
    }
    func_800F6564(0x1801);
    func_800F4248(0x80);
    func_800F8188(0x38EF);
    func_800F6564(0x1801);
    func_800F4248(0x7F);
    func_800F8188(0x1801);
    func_800F9644(0x20);
    func_800F658C(0x1800);
    func_800F55C0(0x100);
    if (func_800F53C0() == 0)
        goto df4;
    func_800F5480();
    func_800F80D0();
    func_800F81B0(0x1800);
df4:
    func_800F658C(0x1800);
    func_800F81B0(0x393D);
    func_800F6558(8);
    func_800F81B0(0x393F);
    func_8015236C();
    func_800F971C();
    func_800F9660(0x20);
    func_800F7210(0x3941);
    func_800F971C();
    for (;;) {
        func_800F6C68();
        func_800F8960(0x299C);
        func_800F63BC();
        func_800F6364();
        func_800F5A90(8);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6564(0x299C);
    func_800F8188(0x29A4);
    func_800F4248(8);
    func_800F8188(0x3581);
    func_800F71DC(3);
    func_800F5EA0();
    for (;;) {
        func_800F6B68(0x299C);
        func_800F8960(0x29AD);
        func_800F8960(0x29B1);
        func_800F5E48();
        func_800F5EA0();
        if (func_800F5C64(0x8080) == 0)
            break;
    }
    func_800F654C(0xFF);
    func_800F8188(0x29B0);
    func_800F8188(0x29B4);
    func_800F971C();
    func_800F6564(0x29A0);
    func_800F824C(0xAB);
    for (;;) {
        func_800F90EC(0x29CA);
        func_800F4F28(func_800F3C3C(0xAB));
        func_800F4F4C();
        func_800F7A40(func_800F3B04(0x29CA + *(u16 *)D_8019ED54[0]));
        func_800F4F28(func_800F3C3C(0xAB));
        func_800F4F4C();
        func_800F7A40(func_800F3B04(0x29CA + *(u16 *)D_8019ED54[0]));
        func_800F6364();
        func_800F5958(3);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F971C();
view14:
    func_800F63BC();
view30:
    for (;;) {
        func_800F6B68(0x29AD);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto viewF8;
        if (func_800F54D4(func_800F3B04(0x29AD + *(u16 *)D_8019ED58[0])) == 0)
            goto viewD8;
        func_800F5410();
        func_800F6B68(0x29CA);
        func_800F3F38(func_800F3B04(0x29CA + *(u16 *)D_8019ED58[0]));
        func_800F8768(0x29CA);
        func_800F971C();
        func_800F8960(0x29CA);
        func_800F5CCC();
        func_800F8960(0x29AD);
    viewD8:
        func_800F63BC();
        func_800F5A90(3);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
viewF8:
    func_800F6364();
    func_800F5958(2);
    if (func_800F53D4() == 0)
        goto view14;
    func_800F654C(0xFF);
    func_800F7500(7);
    for (;;) {
        func_800F8960(0x29B5);
        func_800F8960(0x29BD);
        func_800F5EA0();
        if (func_800F5C64(0x8080) == 0)
            break;
    }
    func_800F63BC();
view74:
    for (;;) {
        func_800F6B68(0x29CA);
        func_800F824C(0xAB);
        if (func_800F6434(2) != 0)
            goto viewE4;
        for (;;) {
            func_800F8960(0x29B5);
            func_800F8960(0x29BD);
            func_800F63BC();
            func_800F5DA0(0xAB);
            func_800F6630(0xAB);
            if (func_800F6434(0x202) == 0)
                break;
        }
    viewE4:
        func_800F6364();
        func_800F5958(3);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6564(0x29A1);
    func_800F824C(0xDF);
    func_800F654C(8);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F7270(0xE3);
    func_800F971C();
    for (;;) {
        func_800F6C68();
        func_800F8960(0x29A5);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(8);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F5410();
    func_800F6564(0x29CA);
    func_800F3F38(func_800F3B04(0x29CB));
    func_800F3F38(func_800F3B04(0x29CC));
    func_800F8188(0x29CD);
    func_800F6564(0x29CA);
    func_800F8188(0x38F0);
    func_800F6564(0x29CB);
    func_800F8188(0x38F1);
    func_800F6564(0x29CC);
    func_800F8188(0x38F2);
    func_800F6564(0x29A3);
    func_800F824C(0xDF);
    func_800F654C(0x10);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F7270(0xE3);
    func_800F971C();
    for (;;) {
        func_800F6C68();
        func_800F8960(0x29CF);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    func_801539C4();
    func_800F6564(0x2282);
    func_800F5574(0x61);
    if (func_800F53C0() != 0) {
        func_800F5480();
        func_800F8058(0x61);
        func_800F6C68();
        func_800F8188(0x38D6);
    }
    func_800F6564(0x38E5);
    func_800F4248(0xC);
    func_800F5574(3);
    if (func_800F53D4() == 0) {
        func_800F6C68();
        func_8016E500();
    }
    func_800F654C(3);
    func_80150C38();
l146C:
    func_800F6564(0x16AC);
    func_800F6C68();
    func_800F61E8();
    func_800F8188(0x3538);
    func_800F8F74(0x38E6);
    for (;;) {
        func_800F654C(2);
        func_80150C38();
        func_800F6564(0x38D9);
        func_800F78C4(func_800F3B04(0x38DA));
        if (func_800F7918(0x202) != 0)
            continue;
        func_800F5D24(0x3538);
        if (func_800F6434(0x202) != 0)
            continue;
        func_800F6564(0x38D7);
        if (func_800F6434(0x202) != 0)
            goto l1540;
        func_800F6564(0x3581);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto l15E8;
        break;
    }
l1540:
    func_800F6564(0x3581);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto l1570;
    func_800F654C(4);
    goto l15A0;
l1570:
    func_800F6564(0x38D7);
    if (func_800F6434(0x80) != 0)
        goto l1598;
    func_800F654C(2);
    goto l15A0;
l1598:
    func_800F654C(3);
l15A0:
    func_800F8188(0x34CA);
    func_800F654C(0xFF);
    func_800F8188(0x34CB);
    func_800F8188(0x33C4);
    func_80153264();
    func_800F654C(5);
    func_80150C38();
    func_800F8F74(0x38D7);
    func_800F8F74(0x3581);
l15E8:
    func_800F6564(0x2282);
    func_800F5574(0x63);
    if (func_800F53D4() == 0)
        goto l1630;
    func_800F6564(0x352D);
    if (func_800F6434(0x202) != 0)
        goto l1630;
    func_800F654C(0xF);
    func_800F8188(0x38D6);
l1630:
    func_80157AD0();
    func_800F6564(0x3601);
    func_800F5574(0xFF);
    if (func_800F53D4() == 0)
        goto l1668;
    func_80150B88();
    func_8015D9A8();
l1668:
    func_8015AC7C();
    func_800F6630(0xA8);
    if (func_800F6434(0x202) != 0)
        goto l1718;
    func_800F6564(0x3601);
    func_800F5574(0xFF);
    if (func_800F53D4() == 0)
        goto l16B8;
    func_8015DCA4();
    func_8015BD34();
l16B8:
    func_80157F30();
    func_800F6630(0xD1);
    if (func_800F6434(2) != 0)
        goto l146C;
    func_80158190();
    func_80151C0C();
    func_800F6564(0x352E);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto l146C;
    func_8005F188();
    goto l146C;
l1718:
    func_8016E560();
    func_800F654C(0x85);
    func_800F8188(0x35F3);
    func_800F6630(0xD7);
    if (func_800F6434(2) != 0)
        goto l1758;
    func_800F654C(1);
    func_80150C38();
l1758:
    func_800F6630(0xA8);
    func_800F8188(0x1803);
    func_800F4248(0x60);
    if (func_800F4120(0x202) != 0)
        goto l18A8;
    func_800F6630(0xA8);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto l17C8;
    func_800F654C(0x15);
    func_80150C38();
    func_80153518();
    func_8016571C();
    goto l19F0;
l17C8:
    func_800F6564(0x38E5);
    func_800F4248(0xC);
    func_800F5574(0xC);
    if (func_800F53D4() != 0)
        goto l1800;
    func_800F654C(0x8B);
    func_800F8188(0x35F3);
l1800:
    func_800F654C(0xC);
    func_80150C38();
    func_800F654C(2);
    func_80150C38();
    func_800F654C(0x15);
    func_80150C38();
    func_80153264();
    func_800F654C(0x24);
    func_800F8188(0x34CA);
    func_800F654C(0xFF);
    func_800F8188(0x34CB);
    func_800F8188(0x33C4);
    func_800F8F74(0x359A);
    func_800F654C(0x40);
    func_800F8188(0x34C2);
    func_800F6564(0x388B);
    if (func_800F6434(0x202) != 0)
        goto l19F0;
    func_800F654C(5);
    func_80150C38();
    goto l19F0;
l18A8:
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        goto l1908;
    func_800F654C(0x13);
    func_80150C38();
    func_80153518();
    func_8016571C();
    func_800F6564(0x38F3);
    if (func_800F6434(0x202) != 0)
        goto l19F0;
    func_80153608();
    goto l19F0;
l1908:
    func_801533BC();
    func_800F6630(0xA9);
    if (func_800F6434(0x202) != 0)
        goto l1950;
    func_800F6564(0x38E5);
    func_800F4248(0xC);
    func_800F5574(0xC);
    if (func_800F53D4() != 0)
        goto l1968;
l1950:
    func_800F654C(8);
    func_800F8188(0x38BE);
    func_800F6240(0x38BD);
l1968:
    func_80153518();
    func_800F654C(2);
    func_80150C38();
    func_801534D8();
    func_800F6630(0xA9);
    if (func_800F6434(0x202) != 0)
        goto l19B0;
    func_800F654C(0x12);
    func_80150C38();
l19B0:
    func_8016571C();
    func_800F6630(0xA8);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto l19F0;
    func_80163F68();
    func_80153518();
    func_8016571C();
l19F0:
    func_800F971C();
    for (;;) {
        func_800F5E48();
        if (func_800F5C64(0x202) == 0)
            break;
    }
    func_800F8FB8(0xAB);
    func_800F7210(0x1800);
    func_800F5958(0x1C0);
    if (func_800F53C0() == 0)
        goto l1A5C;
    func_800F62BC(0xAB);
l1A5C:
    func_800F71DC(7);
    for (;;) {
        func_800F6B68(0x1804);
        func_800F78C4(func_800F3C3C(0xAB));
        func_800F824C(0xAB);
        func_800F5E48();
        if (func_800F5C64(0x8080) == 0)
            break;
    }
    func_800F6364();
    for (;;) {
        func_800F5E48();
        if (func_800F5C64(0x202) == 0)
            break;
    }
    func_800F6564(0x38E5);
    func_800F4248(0xC);
    func_800F5574(0xC);
    if (func_800F53D4() != 0)
        goto l1B4C;
    func_800F6630(0xAB);
    if (func_800F6434(0x202) != 0)
        goto l1B4C;
    func_800F6564(0x1800);
    func_800F5574(0xB7);
    if (func_800F53D4() == 0)
        goto l1B34;
    func_800F6564(0x1801);
    if (func_800F6434(0x202) != 0)
        goto l1B4C;
l1B34:
    func_800F6564(0x35F3);
    func_800F8188(0x1E00);
    func_80169128();
l1B4C:
    func_800F654C(0xFF);
    func_800F824C(0xA9);
    func_800F654C(0x10);
    func_800F824C(0xAA);
    for (;;) {
        func_800F62BC(0xA9);
        func_800F5DA0(0xAA);
        func_800F6630(0xAA);
        if (func_800F6434(2) != 0)
            goto l1BEC;
        func_800F6630(0xA9);
        func_80152908();
        func_800F8188(0x6CC2);
        func_800F6630(0xAA);
        func_800F8188(0x6CC1);
        func_800F654C(2);
        func_80150C38();
    }
l1BEC:
    func_800F654C(0);
    func_800F81E8(0x2106);
    return;
}
