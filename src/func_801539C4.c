#include "common.h"
extern u32 D_8019ED40[8];
extern u32 D_8019ED44[8];
extern u32 D_8019ED54[8];
extern u32 D_8019ED5C[8];
void func_801539C4(void)
{
    func_800F6564(0x1800);
    func_800F5574(0xB6);
    if (func_800F53D4() != 0)
        goto entry1;
    func_800F5574(0xB7);
    if (func_800F53D4() == 0)
        goto head2;
entry1:
    func_800F6564(0x1801);
    if (func_800F6434(2) != 0)
        goto head2;
    func_800F6240(0x3881);
head2:
    func_801571DC();
    func_80157948();
    func_801577D0();
    func_800F6564(0x29A2);
    func_800F8188(0x38E5);
    func_800F4248(0x20);
    func_800F8188(0x388B);
    if (func_800F4120(2) != 0)
        goto exit1;
    func_800F971C();
    for (;;) {
        func_800F6C68();
        func_800F54D4(func_800F3B04(0x1800));
        if (func_800F53D4() != 0)
            break;
        func_800F6364();
        func_800F6364();
        func_800F5958(0x10);
        if (func_800F53D4() == 0)
            continue;
        goto exit1;
    }
    func_800F8D6C(0x84);
    func_800F6C68();
    if (func_800F54D4(func_800F3B04(0x1801)) == 0)
        goto exit1;
    func_800F6C68();
    func_800F824C(0x80);
    func_800F6C68();
    func_800F824C(0x81);
    func_800F654C(0x13);
    func_800F824C(0x82);
    func_800F971C();
    for (;;) {
        func_800F67FC(0x80);
        func_800F8768(0x388C);
        func_800F63BC();
        func_800F6364();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6630(0x84);
    func_800F5574(0xC);
    if (func_800F53D4() != 0)
        goto sel2;
    func_800F5574(0xE);
    if (func_800F53D4() == 0)
        goto exit1;
sel2:
    func_800F971C();
    for (;;) {
        func_800F67FC(0x80);
        func_800F8768(0x389A);
        func_800F63BC();
        func_800F6364();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F654C(0x63);
    func_800F8188(0x2190);
    func_800F8188(0x2210);
exit1:
    func_80155778();
    func_800F8F74(0x3975);
    for (;;) {
        func_800F6564(0x3975);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) == 0)
            func_801583FC();
        func_800F6240(0x3975);
        func_800F6564(0x3975);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F8D6C(0xA9);
    func_800F8EBC(0xAB);
    func_800F6630(0xA9);
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F6B68(0x2001);
    func_800F4248(0xF);
    func_800F824C(0xB7);
    func_800F5140();
    func_800F5410();
    func_800F3F38(func_800F3C3C(0xB7));
    func_800F824C(0xB7);
    func_800F8FB8(0xB8);
    func_800F8FB8(0xB5);
confirm:
    func_800F7270(0xB7);
    func_800F6C68();
    func_800F5574(0xFF);
    if (func_800F53D4() == 0)
        goto dialog;
    func_800F5410();
    func_800F6630(0xAB);
    func_800F4008(0x60);
    func_800F824C(0xAB);
    func_800F6630(0xAC);
    func_800F4008();
    func_800F824C(0xAC);
    goto after_dialog;
dialog:
    func_800F824C(0xDF);
    func_800F654C(0x18);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F7270(0xE3);
    func_800F8FB8(0xAD);
    func_800F7594(0xAB);
    for (;;) {
        func_800F6C68(0x1560);
        func_800F8960(0x2C7B);
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F6364();
        func_800F62BC(0xAD);
        func_800F6630(0xAD);
        func_800F5574(0x18);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F8EBC(0xAB);
after_dialog:
    func_800F62BC(0xB7);
    func_800F62BC(0xB5);
    func_800F6630(0xB5);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto confirm;
    func_800F62BC(0xA9);
    func_800F6630(0xA9);
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto info;
    func_800F971C();
    func_800F8D6C(0xA9);
    for (;;) {
        func_800F7270(0xA9);
        func_800F6B68(0x2C7B);
        if (func_800F6434(2) != 0)
            goto info_draw;
        func_800F8D6C(0xE5);
        func_800F71DC(0x97A0);
        func_800F8D6C(0x80);
        func_800F654C(0xF);
        func_800F824C(0x82);
        func_800F654C(0x6);
        func_801526F8();
        func_800F7270(0xA9);
        func_800F6564(0x289C);
        func_800F4248(0xE0);
        func_800F7864();
        func_800F8768(0x2C7A);
        func_800F6564(0x28A1);
        func_800F4248(0x7F);
        func_800F8768(0x2C7D);
    info_draw:
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F8D6C(0xA9);
        func_800F5958(0x5A0);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    for (;;) {
        func_800F6B68(0x1440);
        func_800F8960(0x321B);
        func_800F6B68(0x1441);
        func_800F8960(0x321C);
        func_800F6364();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5958(0x60);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F8D6C(0xA9);
info_page:
    func_800F8FB8(0xC7);
    func_800F7270(0xA9);
    func_800F6B68(0x321B);
    if (func_800F6434(2) != 0)
        goto page2;
    func_800F5574(0xDE);
    if (func_800F53C0() != 0)
        goto page2;
    func_800F5574(0xB0);
    if (func_800F53C0() != 0)
        goto page1;
    func_800F5574(0x6D);
    if (func_800F53C0() != 0)
        goto page2;
    func_800F5574(0x61);
    if (func_800F53C0() != 0) {
        func_800F654C(0);
        if (func_800F6434(2) != 0)
            goto common_draw;
    }
    func_800F8D6C(0xE5);
    func_800F71DC(0x9100);
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(0x8);
    func_801526F8();
    func_800F6564(0x289C);
    func_80152BC4();
    func_800F4248(0x8);
    func_800F824C(0xC7);
    func_800F6564(0x289F);
    func_800F9200();
    func_800F8D6C(0xE5);
    func_800F71DC(0x97A0);
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(0x6);
    func_801526F8();
    func_800F7270(0xA9);
    func_800F93DC();
    func_800F8768(0x321D);
    goto page_draw;
page1:
    func_800F5480();
    func_800F8058(0xB0);
    func_800F8D6C(0xE5);
    func_800F71DC(0x9680);
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(0x6);
    func_801526F8();
    func_800F7270(0xA9);
    func_800F6564(0x289F);
    func_800F8768(0x321D);
page_draw:
    func_800F6564(0x289C);
    func_800F4248(0xE0);
    func_800F3F38(func_800F3C3C(0xC7));
    func_800F78C4();
    func_800F7864();
common_draw:
    func_800F8768(0x321A);
page2:
    func_800F6364();
    func_800F6364();
    func_800F6364();
    func_800F6364();
    func_800F8D6C(0xA9);
    func_800F5958(0xC0);
    if (func_800F53D4() == 0)
        goto info_page;
    func_800F971C();
    func_800F8D6C(0xA9);
    func_800F8FB8(0xC7);
    func_800F7270(0xA9);
    func_800F6B68(0x32DB);
    if (func_800F6434(2) != 0)
        goto page3;
    func_800F8D6C(0xE5);
    func_800F71DC(0x9100);
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(0x8);
    func_801526F8();
    func_800F6564(0x289C);
    func_80152BC4();
    func_800F4248(0x8);
    func_800F824C(0xC7);
    func_800F7270(0xA9);
    func_800F6564(0x289F);
    func_800F8768(0x32DD);
    func_800F8D6C(0xE5);
    func_800F71DC(0x97A0);
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(0x6);
    func_801526F8();
    func_800F7270(0xA9);
    func_800F6564(0x289C);
    func_800F4248(0xE0);
    func_800F3F38(func_800F3C3C(0xC7));
    func_800F78C4();
    func_800F7864();
    func_800F8768(0x32DA);
page3:
    func_800F6364();
    func_800F6364();
    func_800F6364();
    func_800F6364();
    func_800F8D6C(0xA9);
    func_800F5958(0x28);
    if (func_800F53D4() == 0)
        goto info_page2;
    func_800F971C();
    func_800F8D6C(0xA9);
    func_800F8EBC();
last_menu:
    func_800F7270(0xA9);
    func_800F6B68(0x2000);
    func_800F4248(0x1F);
    if (func_800F4120(0x202) != 0)
        goto sel_menu;
    func_800F61E8();
sel_menu:
    func_800F5CCC();
    func_800F824C(0xDF);
    func_800F654C(0x5);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F654C(0x5);
    func_800F824C(0xAB);
    func_800F7270(0xE3);
    for (;;) {
        func_800F6C68();
        func_800F8960(0x3303);
        func_800F5574(0xFF);
        func_800F9330();
        if (func_800F53D4() == 0)
            func_800F6C68();
        func_800F8960(0x3302);
        func_800F95A0();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5DA0(0xAB);
        func_800F6630(0xAB);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(0x1A);
    func_800F8960(0x3303);
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    func_800F654C(0x1B);
    func_800F8960(0x3303);
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    func_800F9644(0x20);
    func_800F5410();
    func_800F6658(0xA9);
    func_800F4064(0x80);
    func_800F8274(0xA9);
    func_800F971C();
    func_800F5A90(0x8C);
    if (func_800F53D4() == 0)
        goto last_menu;
    func_800F971C();
    func_800F8D6C(0xB9);
    func_800F8FB8(0xBD);
    func_800F7270(0xB9);
    func_800F6B68(0x29B5);
    func_800F5574(0xFF);
    if (func_800F53D4() == 0)
        goto data_move;
    func_800F5410((u32)D_8019ED40[0]);
    *(u8 *)D_8019ED40[0] = *(u8 *)D_8019ED5C[0];
    func_800F4008(5);
    *(u16 *)D_8019ED54[0] = *(u16 *)D_8019ED44[0];
    func_800F6048(func_800F3B04(0x3540 + *(u16 *)D_8019ED54[0]));
    goto loop_end;
data_move:
    *(u16 *)D_8019ED54[0] = *(u16 *)D_8019ED44[0];
    func_800F6564(*(u16 *)D_8019ED44[0]);
    func_801530E0();
    if (func_800F53D4() != 0)
        goto data_draw;
    func_800F62BC(0xBD);
data_draw:
    func_800F6B68(0x29AD);
    func_800F824C(0xBB);
    func_800F8FB8(0xBC);
    func_80155C88();
loop_end:
    func_800F62BC(0xB9);
    func_800F6630(0xB9);
    func_800F5574(8);
    if (func_800F53D4() == 0)
        goto last_menu;
    func_801548F4();
    return;
}
