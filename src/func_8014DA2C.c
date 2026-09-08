#include "common.h"
extern u32 D_801CFD68[8];
void func_8014DA2C(void)
{
    u32 s0 = 1;
    if (*(u16 *)(D_801CFD68[0] + 0x8000 + 0x726A) == 0x2040)
        s0 = 1;
    func_800F5140(0xF44E);
    func_800F8F74();
    func_800F654C(1);
    func_800F8188(0xF261);
    func_800F6630(2);
    func_800F8188(0xF24C);
    func_800F824C(6);
    func_800F6C68();
    func_800F824C(2);
    func_800F6C68();
    func_800F824C(3);
    func_800F654C(0xF);
    func_800F824C(4);
    func_800F8188(0xF280);
    func_800F6630(1);
    func_800F78C4(func_800F3B04(0xF24C));
    if (func_800F7918(0x202) != 0)
        goto Ldb30;
    func_8014E38C();
    return;
Ldb30:
    func_800F6630();
    func_800F8188(0xF485);
    func_8014D680();
    func_800F7270();
    func_800F8D00(0xF279);
    func_800F6630(1);
    func_800F8188(0xF281);
    func_800F8188(0xF284);
    func_800F6564(0xF2D0);
    func_800F5574(2);
    if (func_800F53D4() != 0)
        goto Ldba8;
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto Ldbb8;
Ldba8:
    func_800F654C(0xFF);
    func_800F8188(0xF27A);
Ldbb8:
    func_800F7270(2);
    func_800F8D00(0xF27C);
    func_800F6EA8(2);
    func_800F4248(0xF0);
    func_800F6C68();
    func_800F8188(0xF24D);
    func_800F6C68();
    func_800F8188(0xF24E);
    func_800F6EA8(2);
    func_800F4248(0xF);
    func_800F61E8();
    func_800F8188(0xF27B);
    func_8014CA24();
    func_800F7500();
    for (;;) {
        func_800F66D8(8);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x2C));
        func_800F8960(0xF251);
        func_800F63BC();
        func_800F66D8(8);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x2D));
        func_800F8960(0xF251);
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F71DC();
    for (;;) {
        func_800F90EC(0xF268);
        func_800F6364();
        func_800F5958(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    func_8014CFC4();
    func_800F7500(1);
    func_800F67FC(2);
    func_800F4248(0x18);
    func_800F6C68();
    func_800F8188(0xF29F);
    func_800F7500(1);
    func_800F67FC(2);
    if (func_800F6434(0x8080) != 0)
        goto Lddac;
    func_800F8F74(0xF261);
Lddac:
    func_800F67FC(2);
    func_800F4248(7);
    func_800F8188(0xF249);
    func_800F654C(0x10);
    func_800F8188(0xF24F);
    func_800F8188(0xF250);
    func_80148CAC();
    func_800F8F74(0xF27E);
    func_800F8F74(0xF27F);
    func_800F8F74(0xF24A);
    func_800F8F74(0xF24B);
    func_8014D080();
    func_800F71DC();
    func_800F8D00(0xF281);
    if (s0 == 0) {
        s0 = 2;
        func_8007259C();
    } else if (s0 == 2) {
        func_8007259C();
    }
    func_8014D98C();
    func_800F6564(0xF27E);
    func_800F4280(0xF29F);
    if (func_800F4120(0x202) == 0) {
        func_800F6564(0xF2A0);
        func_800F5574(3);
        if (func_800F53D4() != 0)
            func_8013E73C();
    }
Ldeb8:
    func_800F6564(0xF2A0);
    func_800F5574(4);
    if (func_800F53D4() != 0)
        func_8014588C();
Ldee0:
    func_800F6564(0xF281);
    if (func_800F6434(2) != 0)
        goto Ldf80;
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto Ldf80;
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto Ldf38;
    func_800F654C(4);
    goto Ldf40;
Ldf38:
    func_800F654C(2);
Ldf40:
    func_800F824C();
    func_800F6564(0x1813);
    func_800F4370();
    if (func_800F4120(2) != 0)
        goto Ldf78;
    func_8014D394();
    goto Ldf80;
Ldf78:
    func_8014D31C();
Ldf80:
    func_800F6564(0xF2D0);
    if (func_800F6434(2) != 0)
        goto Le04c;
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto Le02c;
    func_800F6564(0xF27E);
    func_800F4248(7);
    func_800F6564(0xF279);
    if (func_800F6434(0x202) != 0)
        goto Le01c;
    func_800F6C68();
    func_800F8188(0xF268);
    func_8014CF14();
    func_8014EA0C();
    goto Le04c;
Le01c:
    func_8014D4D4();
    goto Le04c;
Le02c:
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto Le04c;
    func_80141DA0();
Le04c:
    func_800F6240(0xF27E);
Le054:
    for (;;) {
        func_800F7534(0xF27C);
        func_800F8EBC(2);
        func_800F6564(0xF280);
        func_800F824C(4);
        func_800F6564(0xF27F);
        func_800F67FC(2);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto Le2ec;
        func_800F67FC(2);
        if (func_800F6434(0x80) == 0)
            goto Le28c;
        func_800F824C(6);
        func_800F5574(0x88);
        if (func_800F53D4() == 0)
            goto Le11c;
        func_800F6240(0xF27F);
        func_800F63BC();
        func_800F67FC(2);
        func_800F6240(0xF44E);
        func_8014D780();
        goto Le27c;
    Le11c:
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto Le1bc;
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto Le15c;
        func_8014D31C();
        goto Le27c;
    Le15c:
        func_800F6630(6);
        func_800F9200();
        func_800F4248(7);
        func_8014D14C();
        func_800F93DC();
        func_800F4248(3);
        func_800F8188(0xF281);
        func_8014D394();
        goto Le27c;
    Le1bc:
        func_800F6630(6);
        func_800F4248(7);
        func_800F5140(6);
        func_800F6630();
        func_800F4248(7);
        func_800F61E8();
        func_800F824C(8);
        func_8014EAE4();
        func_800F6564(0xF24A);
        func_800F5410();
        func_800F3F38(func_800F3C3C(6));
        func_800F8188(0xF24A);
        func_800F6564(0xF24B);
        func_800F5410();
        func_800F3F38(func_800F3C3C(7));
        func_800F8188(0xF24B);
    Le27c:
        func_800F6240(0xF27F);
        goto Le054;
    Le28c:
        func_800F4248(0x7F);
        func_800F8188(0xF248);
        func_800F6564(0xF27A);
        func_800F8188(0xF262);
        func_800F654C(1);
        func_800F8188(0xF247);
        func_800F6564(0xF27E);
        func_800F4280(0xF29F);
        if (func_800F4120(0x202) != 0)
            goto Lde20;
        func_800F6240(0xF27F);
        goto Lde20;
    Le2ec:
        func_800F8F74(0xF27F);
        func_800F6564(0xF2A0);
        if (func_800F6434(2) == 0)
            func_8014E424();
        func_800F5D24(0xF27B);
        if (func_800F5B8C(2) == 0)
            goto Lde20;
        func_800F6564(0xF285);
        if (func_800F6434(0x202) != 0)
            goto Le34c;
        func_8014D31C();
    Le34c:
        func_8014E38C();
        func_800F6564(0xF284);
        func_800F8188(0xF467);
        func_8009B8E4();
        func_800F971C();
        func_8014D500();
        return;
    }
Lde20:
    if (s0 == 0) {
        s0 = 2;
        func_8007259C();
    } else if (s0 == 2) {
        func_8007259C();
    }
    goto Ldeb8;
}
