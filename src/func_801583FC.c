#include "common.h"
extern u32 D_8019ED40[8];
extern u32 D_8019ED44[8];
extern u32 D_8019ED58[8];
extern u32 D_8019ED60[8];
void func_801583FC(void)
{
    func_800F6564(0x3975);
    func_80152CDC();
    func_800F5410();
    func_800F6630(0xA6);
    func_800F4008();
    func_800F824C(0x80);
    func_800F6630(0xA7);
    func_800F4008(0x20);
    func_800F824C(0x81);
    func_800F9644(0x20);
    func_800F5410();
    func_800F658C(0x3532);
    func_800F4064(0x2780);
    func_800F8274(0x82);
    func_800F971C();
    func_800F9660(0x20);
    func_800F6564(0x352C);
    if (func_800F6434(2) == 0) {
        func_800F971C();
        func_800F8D6C(0xA9);
        func_800F8EBC();
        func_800F8EBC(0xAB);
        for (;;) {
            func_800F66D8(0x82);
            if (func_800F6434(0x8080) != 0)
                goto sel_a;
            func_800F62BC(0xA9);
            goto after_sel;
        sel_a:
            func_800F5410();
            func_800F4008(0xB);
            func_800F62BC(0xAB);
            func_800F6630(0xAB);
            func_800F5574(5);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
    after_sel:
        func_800F6630(0xA9);
        if (func_800F6434(2) == 0) {
            func_800F7500(5);
            func_800F654C(0x80);
            func_800F82EC(0x80);
        }
    }
    func_800F7500(0x14);
    func_800F971C();
    for (;;) {
        func_800F82EC(0x80);
        func_800F63BC();
        func_800F5A90(0x19);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F8FB8(0xAF);
    func_800F7500(7);
    for (;;) {
        func_800F66D8(0x82);
        func_800F9200();
        func_800F4248(0xF8);
        func_800F824C(0xA9);
        func_800F93DC();
        func_800F4248(7);
        func_800F5140();
        func_800F6C68();
        func_800F824C(0xAB);
        func_800F6364();
        func_800F6C68();
        func_800F824C(0xAC);
        func_800F939C();
        func_800F7500(0x14);
        for (;;) {
            func_800F4F28(func_800F3C3C(0xA9));
            if (func_800F4FAC(0x101) != 0)
                goto sprite_b;
            func_800F5410();
            func_800F66D8(0x80);
            func_800F3F38(func_800F3C3C(0xAB));
            goto sprite_done;
        sprite_b:
            func_800F5410();
            func_800F66D8(0x80);
            func_800F3F38(func_800F3C3C(0xAC));
        sprite_done:
            func_800F82EC(0x80);
            func_800F63BC();
            func_800F5A90(0x19);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F960C();
        func_800F5410();
        func_800F4008(0xB);
        func_800F62BC(0xAF);
        func_800F6630(0xAF);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F7500(0xF);
    func_800F8EBC(0xA9);
    func_800F7500(0x14);
    func_800F8EBC(0xAB);
    for (;;) {
        func_800F7594(0xA9);
        func_800F5410();
        func_800F66D8(0x80);
        func_800F7594(0xAB);
        func_800F3F38(func_800F3B04(func_800F3A70(0x80)));
        func_800F5574(0xB6);
        if (func_800F53C0() != 0)
            goto wB6;
        func_800F5574(0x63);
        if (func_800F53C0() == 0)
            goto wsel;
        func_800F654C(0x63);
        goto wsel;
    wB6:
        func_800F654C(1);
    wsel:
        func_800F82EC(0x80);
        func_800F62BC(0xA9);
        func_800F62BC(0xAB);
        func_800F6630(0xA9);
        func_800F5574(0x14);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F7500(2);
    func_800F66D8(0x80);
    func_800F8188(0x3965);
    func_800F971C();
    func_800F7500(0x14);
    for (;;) {
        func_800F66D8(0x80);
        func_800F8768(0x3966);
        func_800F63BC();
        func_800F6364();
        func_800F5958(5);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F8F74(0x396B);
    func_800F8F74(0x396C);
    func_800F8F74(0x396D);
    func_800F8F74(0x396E);
    func_800F8F74(0x396F);
    func_800F8F74(0x3970);
    func_800F8F74(0x3971);
    func_800F8F74(0x3972);
    func_800F8F74(0x3973);
    func_800F8F74(0x3974);
    func_800F7500(0x25);
    func_800F66D8(0x82);
    if (func_800F6434(0x8080) == 0) {
        func_800F7500(0x21);
        func_8015A0F4();
        func_800F6564(0x396D);
        func_800F8188(0x396E);
    }
    func_800F7500(0x30);
    func_800F66D8(0x82);
    if (func_800F6434(0x8080) == 0) {
        func_800F7500(0x2C);
        func_8015A0F4();
    }
    func_800F971C();
    func_800F8D6C(0xA9);
    func_800F7500(8);
    for (;;) {
        func_800F66D8(0x82);
        func_800F8674(0xAD);
        func_800F5410();
        func_800F4008(0xB);
        func_800F6364();
        func_800F5958(3);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6564(0x396D);
    func_800F824C(0xB0);
    func_800F6564(0x396E);
    func_800F824C(0xB1);
    func_800F971C();
    for (;;) {
        func_800F6A78(0xAD);
        if (func_800F6434(0x80) != 0)
            goto opt_b;
        func_800F78C4(func_800F3C3C(0xA9));
        func_800F824C(0xA9);
        goto opt_done;
    opt_b:
        func_800F78C4(func_800F3C3C(0xAA));
        func_800F824C(0xAA);
    opt_done:
        func_800F6364();
        func_800F5958(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F7500(0x25);
    func_800F6630(0xA9);
    func_800F82EC(0x80);
    func_800F63BC();
    func_800F6630(0xAA);
    func_800F82EC(0x80);
    func_800F7500(5);
    func_800F971C();
    func_800F8FB8(0xA9);
    for (;;) {
        func_800F66D8(0x82);
        func_800F78C4(func_800F3C3C(0xA9));
        func_800F824C(0xA9);
        func_800F5410();
        func_800F4008(0xB);
        func_800F6364();
        func_800F5958(3);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F7500(0x27);
    func_800F6630(0xA9);
    func_800F78C4(func_800F3B04(0x3974));
    func_800F82EC(0x80);
    func_800F7500(0x28);
    func_800F6564(0x3965);
    func_80152B38();
    func_800F824C(0xDF);
    func_800F6564(0x396B);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F6564(0x3967);
    func_80152BC4();
    func_800F5410();
    func_800F3F38(func_800F3C3C(0xE3));
    func_800F82EC(0x80);
    func_800F7500(2);
    func_800F971C();
    for (;;) {
        func_800F5410();
        func_800F66D8(0x82);
        func_800F4248(0x7F);
        func_800F3F38(func_800F3C3C(0xAA));
        func_800F824C(0xAA);
        func_800F5410();
        func_800F4008(0xB);
        func_800F6364();
        func_800F5958(3);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F7500(0x29);
    func_800F5410();
    func_800F6630(0xAA);
    func_800F3F38(func_800F3B04(0x396C));
    func_8015A30C();
    func_800F82EC(0x80);
    func_800F6564(0x3968);
    func_800F7864();
    func_800F824C(0xA9);
    func_800F971C();
    func_800F63BC();
    for (;;) {
        func_800F5410();
        func_800F66D8(0x82);
        func_800F3F38(func_800F3C3C(0xA9));
        func_800F824C(0xA9);
        func_800F5410((u32)D_8019ED40[0]);
        *(u8 *)D_8019ED40[0] = *(u8 *)D_8019ED60[0];
        func_800F4008(0xB);
        func_800F6364();
        *(u16 *)D_8019ED58[0] = *(u16 *)D_8019ED44[0];
        func_800F5958(3);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F7500(0x2A);
    func_800F5410();
    func_800F6630(0xA9);
    func_800F3F38(func_800F3B04(0x396F));
    func_8015A344();
    func_800F82EC(0x80);
    func_800F971C();
    func_800F8D6C(0xA9);
    func_800F7500(9);
    for (;;) {
        func_800F66D8(0x82);
        func_800F78C4(func_800F3C3C(0xA9));
        func_800F824C(0xA9);
        func_800F63BC();
        func_800F66D8(0x82);
        func_800F78C4(func_800F3C3C(0xAA));
        func_800F824C(0xAA);
        func_800F5410();
        func_800F4008(0xA);
        func_800F6364();
        func_800F5958(3);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F7500(0x2B);
    func_800F6630(0xA9);
    func_800F78C4(func_800F3B04(0x3970));
    func_800F82EC(0x80);
    func_800F63BC();
    func_800F6630(0xAA);
    func_800F78C4(func_800F3B04(0x3971));
    func_800F82EC(0x80);
    func_800F7500(0x25);
    func_800F66D8(0x80);
    func_800F824C(0xA9);
    func_8015A094();
    func_800F7500(0x20);
    func_800F82EC(0x80);
    func_800F7500(0x26);
    func_800F66D8(0x80);
    func_800F824C(0xA9);
    func_8015A094();
    if (func_800F53D4() != 0)
        goto done;
    func_800F7500(0x21);
    func_800F82EC(0x80);
done:
    func_8015902C();
    return;
}
