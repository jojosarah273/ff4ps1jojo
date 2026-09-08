#include "common.h"
void func_8015DCA4(void)
{
    func_800F971C();
    func_800F8D6C(0x8E);
LDCD4:
    for (;;) {
        func_800F7270(0x8E);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            goto LDFA8;
        func_800F6B68(0x3560);
        if (func_800F6434(2) == 0)
            goto LDFA8;
        func_80152CDC();
        func_800F7270(0xA6);
        func_800F6B68(0x2003);
        func_800F4248(0xC0);
        if (func_800F4120(0x202) != 0)
            goto LDD68;
        func_800F6B68(0x2004);
        func_800F4248(0x30);
        func_800F40E8();
    LDD68:
        if (func_800F53D4() == 0)
            goto LDFA8;
        func_800F6B68(0x2005);
        func_800F4248(0x40);
        if (func_800F4120(2) == 0)
            goto LDFA8;
        func_800F6B68(0x2004);
        func_800F4248(0xC);
        if (func_800F4120(2) != 0)
            goto LDE30;
        func_800F6B68(0x2005);
        func_800F4248(0xFB);
        func_800F8768(0x2005);
        func_800F6B68(0x2004);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto LDE00;
        func_8015E464();
        goto LDF48;
    LDE00:
        func_800F6B68(0x2004);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto LDE30;
        func_8015DFE0();
        goto LDF48;
    LDE30:
        func_800F6B68(0x2006);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto LDFA8;
        func_800F6B68(0x2000);
        func_800F4248(0x1F);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            goto LDFA8;
        func_800F6564(0x3582);
        if (func_800F6434(0x202) != 0)
            goto LDFA8;
        func_800F654C(3);
        func_8015310C();
        func_800F7210(0x3598);
        func_800F6B68(0x2A06);
        func_800F4248(8);
        if (func_800F4120(0x202) != 0)
            goto LDFA8;
        func_800F7270(0xA6);
        func_800F6B68(0x2006);
        if (func_800F6434(0x8080) != 0)
            goto LDF18;
        func_8015E758();
        func_800F5CCC();
        if (func_800F5B8C(0x202) != 0)
            goto LDFA8;
        func_8015E6A4();
        goto LDF60;
    LDF18:
        func_8015E758();
        func_800F5CCC();
        if (func_800F5B8C(2) != 0)
            goto LDFA8;
        func_8015E66C();
        goto LDF60;
    LDF48:
        func_800F8FB8(0xD6);
        func_800F6630(0x8E);
        func_8015A374();
    LDF60:
        func_800F654C(3);
        func_80153374();
        func_800F654C(8);
        func_800F8768(0x2A06);
        func_800F7270(0x8E);
        func_800F6048(func_800F3B04());
    LDFA8:
        func_800F62BC(0x8E);
        func_800F6630(0x8E);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
