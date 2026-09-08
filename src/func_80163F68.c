#include "common.h"
void func_80163F68(void)
{
    func_800F971C();
    func_800F8D00(0x3591);
    func_800F8D00(0x3593);
    func_800F8D00(0x3594);
    func_800F8D00(0x3595);
    func_800F8D6C(0xB5);
    func_800F8D6C(0xB7);
    func_800F7270(0xB7);
    func_800F6B68(0x3585);
    func_800F824C(0xB1);
    if (func_800F6434(0x202) != 0)
        goto fe8;
    goto d8;
fe8:
    for (;;) {
        func_800F7270(0xB7);
        func_800F6B68(0x358B);
        func_800F824C(0xAF);
        func_800F8FB8(0xB0);
        func_800F4F28(func_800F3C3C(0xAF));
        func_800F4F4C();
        func_800F7A40(func_800F3C3C(0xB0));
        func_800F7270(0xAF);
        func_800F5410();
        func_800F6C68();
        func_800F3F38(func_800F3B04(0x3591));
        func_800F8188(0x3591);
        func_800F6C68();
        func_800F3F38(func_800F3B04(0x3592));
        func_800F8188(0x3592);
        func_800F6564(0x3593);
        func_800F4008();
        func_800F8188(0x3593);
        func_800F7270(0xB7);
        func_800F6B68(0x3588);
        func_800F824C(0xAF);
        func_800F8FB8(0xB0);
        func_800F4F28(func_800F3C3C(0xAF));
        func_800F4F4C();
        func_800F7A40(func_800F3C3C(0xB0));
        func_800F7270(0xAF);
        func_800F5410();
        func_800F6C68();
        func_800F3F38(func_800F3B04(0x3594));
        func_800F8188(0x3594);
        func_800F6C68();
        func_800F3F38(func_800F3B04(0x3595));
        func_800F8188(0x3595);
        func_800F6564(0x3596);
        func_800F4008();
        func_800F8188(0x3596);
        func_800F7270(0xB7);
        func_800F6B68(0x358E);
        func_800F824C(0xB3);
        func_800F6B68(0x358E);
        func_800F4248(0xC0);
        func_800F5574(0xC0);
        if (func_800F53D4() != 0)
            goto i210;
        func_800F5574(0x40);
        if (func_800F53D4() == 0)
            goto i1C0;
        func_800F654C(5);
        goto i1E0;
    i1C0:
        func_800F5574(0x80);
        if (func_800F53D4() == 0)
            goto b8;
        func_800F654C(0x19);
    i1E0:
        func_800F824C(0xB4);
        func_801531CC();
        if (func_800F54D4(func_800F3C3C(0xB4)) != 0)
            goto b8;
    i210:
        func_800F4F28(func_800F3C3C(0xB3));
        func_800F4F28(func_800F3C3C(0xB3));
        func_800F6630(0xB3);
        func_800F971C();
        func_800F8EBC(0xA9);
        for (;;) {
            func_800F6C68();
            func_800F8960(0x289C);
            func_800F6364();
            func_800F63BC();
            func_800F62BC(0xA9);
            func_800F6630(0xA9);
            func_800F5574(4);
            if (func_800F53D4() != 0)
                break;
        }
        func_800F6564(0x16A3);
        func_800F3F38(func_800F3C3C(0x97));
        func_800F824C(0x97);
        func_80153218();
        func_800F5574(0x80);
        if (func_800F53C0() != 0)
            goto i310;
        func_800F654C(0);
        goto i368;
    i310:
        func_800F5574(0xD0);
        if (func_800F53C0() != 0)
            goto i338;
        func_800F654C(1);
        goto i368;
    i338:
        func_800F5574(0xFC);
        if (func_800F53C0() != 0)
            goto i360;
        func_800F654C(2);
        goto i368;
    i360:
        func_800F654C(3);
    i368:
        func_800F6B68(0x289C);
        func_800F7270(0xB5);
        func_800F5958(8);
        if (func_800F53D4() != 0)
            goto b8;
        func_800F8768(0x1804);
        func_800F62BC(0xB5);
    b8:
        func_800F5DA0(0xB1);
        func_800F6630(0xB1);
        if (func_800F6434(2) == 0)
            continue;
        break;
    }
d8:
    func_800F62BC(0xB7);
    func_800F6630(0xB7);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto fC0;
    func_800F5410();
    func_800F6564(0x16A0);
    func_800F3F38(func_800F3B04(0x3594));
    func_800F8188(0x16A0);
    func_800F6564(0x16A1);
    func_800F3F38(func_800F3B04(0x3595));
    func_800F8188(0x16A1);
    func_800F6564(0x16A2);
    func_800F3F38(func_800F3B04(0x3596));
    func_800F8188(0x16A2);
    func_800F5480();
    func_800F6564(0x16A0);
    func_800F8058(0x7F);
    func_800F6564(0x16A1);
    func_800F8058(0x96);
    func_800F6564(0x16A2);
    func_800F8058(0x98);
    if (func_800F53C0() != 0) {
        func_800F654C(0x7F);
        func_800F8188(0x16A0);
        func_800F654C(0x96);
        func_800F8188(0x16A1);
        func_800F654C(0x98);
        func_800F8188(0x16A2);
    }
    func_800F971C();
    func_800F8D6C(0xA9);
    func_800F8D6C(0xAB);
    func_800F8D6C(0xAD);
    func_800F8D00(0x405F);
    func_800F8D00(0x4061);
    func_800F8D00(0x4063);
    func_800F8D00(0x4065);
    func_800F8D00(0x4067);
    for (;;) {
        func_800F7270(0xA9);
        func_800F5958(5);
        if (func_800F53C0() != 0)
            goto q578;
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            goto q608;
    q578:
        func_800F7270(0xAD);
        func_800F6B68(0x1000);
        func_800F4248(0x1F);
        if (func_800F4120(2) != 0)
            goto q608;
        func_800F6B68(0x1003);
        func_800F4248(0xC0);
        if (func_800F4120(0x202) != 0)
            goto q608;
        func_800F7270(0xA9);
        func_800F6048(func_800F3B04());
        func_800F5958(5);
        if (func_800F53C0() != 0)
            goto q608;
        func_800F62BC(0xAB);
    q608:
        func_800F9644(0x20);
        func_800F5410();
        func_800F6658(0xAD);
        func_800F4064(0x40);
        func_800F8274(0xAD);
        func_800F971C();
        func_800F9660(0x20);
        func_800F62BC(0xA9);
        func_800F6630(0xA9);
        func_800F5574(0xA);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6564(0x3591);
    func_800F78C4(func_800F3B04(0x3592));
    func_800F78C4(func_800F3B04(0x3593));
    if (func_800F7918(2) != 0)
        goto q790;
    func_800F971C();
    func_800F8D6C(0xAD);
    func_800F8D6C(0xAF);
    func_800F6564(0x3591);
    func_800F78C4(func_800F3B04(0x3592));
    func_800F78C4(func_800F3B04(0x3593));
    if (func_800F7918(0x202) != 0)
        goto q728;
    func_800F8FB8(0xAD);
    func_800F8FB8(0xAE);
    func_800F8FB8(0xAF);
    goto q730;
q728:
    func_8016E668();
q730:
    func_800F6630(0xAD);
    func_800F78C4(func_800F3C3C(0xAE));
    func_800F78C4(func_800F3C3C(0xAF));
    if (func_800F7918(0x202) == 0)
        func_800F62BC(0xAD);
    func_800F7270(0xAD);
    func_800F8D00(0x3591);
    func_800F6630(0xAF);
    func_800F8188(0x3593);
q790:
    func_8005A234();
    func_80153264();
    func_800F6564(0x3594);
    func_800F8188(0x359A);
    func_800F6564(0x3595);
    func_800F8188(0x359B);
    func_800F6564(0x3596);
    func_800F8188(0x359C);
    func_800F6564(0x3591);
    func_800F8188(0x359D);
    func_800F6564(0x3592);
    func_800F8188(0x359E);
    func_800F6564(0x3593);
    func_800F8188(0x359F);
    func_800F971C();
    func_800F6564(0x3594);
    func_800F78C4(func_800F3B04(0x3595));
    if (func_800F7918(2) != 0)
        goto q860;
    func_800F654C(0x1F);
    func_800F8188(0x34CA);
    func_800F6364();
q860:
    func_800F6564(0x3591);
    func_800F78C4(func_800F3B04(0x3592));
    if (func_800F7918(2) != 0)
        goto q8A0;
    func_800F654C(0x20);
    func_800F8768(0x34CA);
    func_800F6364();
q8A0:
    if (func_800F6434(2) != 0)
        goto q8D8;
    func_800F654C(5);
    func_80150C38();
q8D8:
    func_800F654C(0xFF);
    func_800F8188(0x34CB);
    func_800F971C();
    func_800F8D6C(0xA9);
    func_800F8D6C(0xAB);
    for (;;) {
        func_800F7270(0xA9);
        func_800F6B68(0x405F);
        if (func_800F6434(2) != 0)
            goto a20;
        func_800F7270(0xAB);
        func_800F5410();
        func_800F6B68(0x1037);
        func_800F3F38(func_800F3B04(0x3591));
        func_800F8768(0x1037);
        func_800F6B68(0x1038);
        func_800F3F38(func_800F3B04(0x3592));
        func_800F8768(0x1038);
        func_800F6B68(0x1039);
        func_800F3F38(func_800F3B04(0x3593));
        func_800F8768(0x1039);
        func_800F5480();
        func_800F6B68(0x1037);
        func_800F8058(0x7F);
        func_800F6B68(0x1038);
        func_800F8058(0x96);
        func_800F6B68(0x1039);
        func_800F8058(0x98);
        if (func_800F53C0() != 0) {
            func_800F654C(0x7F);
            func_800F8768(0x1037);
            func_800F654C(0x96);
            func_800F8768(0x1038);
            func_800F654C(0x98);
            func_800F8768(0x1039);
        }
    a20:
        func_800F9644(0x20);
        func_800F5410();
        func_800F6658(0xAB);
        func_800F4064(0x40);
        func_800F8274(0xAB);
        func_800F971C();
        func_800F9660(0x20);
        func_800F62BC(0xA9);
        func_800F6630(0xA9);
        func_800F5574(0xA);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F8D6C(0x98);
    func_800F8D6C(0xA6);
    for (;;) {
        func_800F7270(0x98);
        func_800F6B68(0x405F);
        if (func_800F6434(0x202) == 0)
            goto f2C;
    ad0:
        func_800F7270(0xA6);
        func_800F6B68(0x1000);
        func_800F4248(0x1F);
        func_800F5CCC();
        func_800F5140();
        func_800F6C68();
        func_800F824C(0x80);
        func_800F6C68();
        func_800F824C(0x81);
        func_800F654C(0xF);
        func_800F824C(0x82);
        func_800F7270(0xA6);
        func_800F6B68(0x1002);
        func_800F5574(0x46);
        if (func_800F53C0() != 0)
            func_800F654C(0x45);
        func_800F5CCC();
        func_800F824C(0xDF);
        func_800F654C(5);
        func_800F824C(0xE1);
        func_8015240C();
        func_800F7594(0xE3);
        func_800F971C();
        for (;;) {
            func_800F67FC(0x80);
            func_800F8768(0x289C);
            func_800F63BC();
            func_800F6364();
            func_800F5958(5);
            if (func_800F53D4() != 0)
                break;
        }
        func_800F7270(0xA6);
        func_800F6B68(0x1002);
        func_800F5574(0x46);
        if (func_800F53C0() != 0) {
            func_800F939C();
            func_800F71DC();
            func_800F654C(7);
            func_80152224();
            func_800F8D6C(0xAD);
            func_800F960C();
            func_800F9644(0x20);
            func_800F5410();
            func_800F3F38(func_800F3C3C(0xAD));
            func_800F3F94();
            func_800F971C();
            func_800F9660(0x20);
            func_800F67FC(0x80);
            func_800F8188(0x289C);
        }
        func_800F6564(0x289F);
        func_800F824C(0xAD);
        func_800F6564(0x28A0);
        func_800F824C(0xAE);
        func_800F6564(0x289E);
        func_80152AAC();
        func_800F824C(0xAF);
        func_800F7270(0xA6);
        func_800F5410();
        func_800F6B68(0x103D);
        func_800F3F38(func_800F3C3C(0xAD));
        func_800F824C(0xAD);
        func_800F6B68(0x103E);
        func_800F3F38(func_800F3C3C(0xAE));
        func_800F824C(0xAE);
        func_800F6B68(0x103F);
        func_800F3F38(func_800F3C3C(0xAF));
        func_800F824C(0xAF);
        func_800F5480();
        func_800F6B68(0x1037);
        func_800F7F48(func_800F3C3C(0xAD));
        func_800F6B68(0x1038);
        func_800F7F48(func_800F3C3C(0xAE));
        func_800F6B68(0x1039);
        func_800F7F48(func_800F3C3C(0xAF));
        if (func_800F53C0() == 0)
            goto f2C;
        func_800F6630(0xAD);
        func_800F8768(0x103D);
        func_800F6630(0xAE);
        func_800F8768(0x103E);
        func_800F6630(0xAF);
        func_800F8768(0x103F);
        func_800F6B68(0x1002);
        func_800F5574(0x63);
        if (func_800F53C0() != 0)
            goto f2C;
        func_800F6048(func_800F3B04());
        func_8016501C();
        func_800F6630(0x98);
        func_800F5574(5);
        if (func_800F53C0() != 0)
            goto ad0;
        func_800F8188(0x359A);
        func_800F654C(0x21);
        func_800F8188(0x34CA);
        func_800F654C(5);
        func_80150C38();
        func_800F654C(0x23);
        func_800F8188(0x34CA);
        func_800F971C();
        func_800F8D6C(0xAF);
        for (;;) {
            func_800F7270(0xAF);
            func_800F6B68(0x291C);
            func_800F5574(0xFF);
            if (func_800F53D4() != 0)
                goto ad0;
            func_800F8188(0x359A);
            func_800F654C(5);
            func_80150C38();
            func_800F62BC(0xAF);
        }
    f2C:
        func_800F9644(0x20);
        func_800F5410();
        func_800F6658(0xA6);
        func_800F4064(0x40);
        func_800F8274(0xA6);
        func_800F971C();
        func_800F9660(0x20);
        func_800F62BC(0x98);
        func_800F6630(0x98);
        func_800F5574(0xA);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_801571DC();
    func_80155778();
    func_800F8F74(0x3975);
    for (;;) {
        func_800F6564(0x3975);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            goto fa4;
        func_801583FC();
    fa4:
        func_800F6240(0x3975);
        func_800F6564(0x3975);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
fC0:
    goto fe8;
}
