#include "common.h"
void func_80160E88(void)
{
    func_800F654C(0x17);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    func_800F654C(0xF8);
    func_800F8188(0x33C6);
    func_800F654C(4);
    func_800F8188(0x33C7);
    func_801532D4();
    func_800F6630(0xCE);
    if (func_800F6434(0x80) == 0)
        goto L103c;
    func_801531CC();
    func_800F824C(0xA9);
    func_800F5410();
    func_800F654C(0x32);
    func_800F3F38(func_800F3B04(0x2682));
    func_800F5480();
    func_800F7F48(func_800F3B04(0x272F));
    if (func_800F53C0() != 0)
        goto Lf58;
    func_800F654C(1);
    goto Lf78;
Lf58:
    func_800F5574(0x63);
    if (func_800F53C0() == 0)
        goto Lf78;
    func_800F654C(0x63);
Lf78:
    if (func_800F54D4(func_800F3C3C(0xA9)) != 0)
        goto L1054;
    func_801531CC();
    if (func_800F54D4(func_800F3B04(0x272F)) == 0)
        goto L1038;
    func_800F9644(0x20);
    func_800F658C(0x2689);
    func_80152B38();
    func_800F8274(0xA9);
    func_800F6558();
    func_800F9660(0x20);
    func_800F6630(0xCD);
    func_800F63F8();
    func_80061C1C();
    func_800F6630(0xA9);
    func_800F8768(0x34D4);
    func_800F6630(0xAA);
    func_800F8768(0x34D5);
    func_80061C8C();
    goto L103c;
L1038:
    ;
L103c:
    func_800F654C();
    func_800F8188(0x34CA);
    return;
L1054:
    func_800F6564(0x2773);
    func_800F4248(0xC0);
    func_800F5574(0xC0);
    if (func_800F53D4() != 0)
        return;
    func_800F971C();
    func_800F61E8();
    func_800F824C(0xAA);
    func_800F6564(0x2773);
    func_800F4248(0x3F);
    func_80152994();
    func_800F6C68();
    if (func_800F6434(2) != 0)
        goto L103c;
    func_800F824C(0xA9);
    func_800F5574(0x61);
    if (func_800F53C0() != 0)
        goto L1128;
    func_800F5574(0x54);
    if (func_800F53C0() == 0)
        goto L1128;
    func_800F654C(0xA);
    func_800F824C(0xAA);
L1128:
    func_800F971C();
L1168:
    for (;;) {
        func_800F6B68(0x321B);
        if (func_800F54D4(func_800F3C3C(0xA9)) != 0)
            goto L1298;
    L1190:
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x30);
        if (func_800F53D4() == 0)
            goto L1168;
        func_800F6564(0x38F4);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L103c;
        func_800F9644(0x20);
        func_800F971C();
        func_800F9660(0x20);
        func_800F6630(0xAA);
        func_800F8768(0x321C);
        func_800F6630(0xA9);
        func_800F8768(0x321B);
        func_800F8D6C(0xAB);
        func_800F939C();
        func_80163950();
        func_800F960C();
        goto L1330;
    L1298:
        func_800F5410();
        func_800F6B68(0x321C);
        func_800F3F38(func_800F3C3C(0xAA));
        func_800F5574(0x64);
        if (func_800F53C0() == 0)
            goto L1328;
        func_800F9200();
        func_800F654C(0x63);
        func_800F8768(0x321C);
        func_80161368();
        func_800F93DC();
        func_800F5480();
        func_800F8058(0x63);
        if (func_800F53D4() != 0)
            goto L1330;
        func_800F824C(0xAA);
        goto L1190;
    L1328:
        func_800F8768(0x321C);
    L1330:
        func_80161368();
        func_800F6630(0xA9);
        func_800F8188(0x359A);
        func_800F654C(0x1D);
        func_800F8188(0x34CA);
        return;
    }
}
