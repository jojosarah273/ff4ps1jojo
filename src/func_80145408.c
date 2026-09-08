#include "common.h"
void func_80145408(void)
{
    func_800F6564(0xF320);
    if (func_800F6434(2) != 0)
        return;
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        return;
    func_800F71DC(0x16);
    func_800F654C(0xAA);
    for (;;) {
        func_800F8768(0x500);
        func_800F6364();
        func_800F5958(0x20);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6564(0xF327);
    if (func_800F6434(2) == 0)
        func_800F6240(0xF326);
    func_800F6564(0xF326);
    func_800F4248(3);
    func_800F824C(0xE);
    func_800F6564(0xF325);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0xE));
    func_800F6C68();
    func_800F8188(0xF328);
    func_800F971C();
    func_800F8D00(0xF32E);
    func_800F6564(0xF32C);
    if (func_800F6434(2) != 0)
        goto L60c;
    func_800F6564(0xF1B3);
    func_800F5140();
    func_800F824C(0x1E);
    func_800F6564(0xF133);
    func_800F5410();
    func_800F3F38(func_800F3B04(0xF32D));
    func_800F8188(0xF133);
    func_80147000();
    func_800F8188(0xF32F);
    func_800F6564(0xF1F3);
    func_800F5140();
    func_800F824C(0x1E);
    func_800F6564(0xF173);
    func_800F5410();
    func_800F3F38(func_800F3B04(0xF32D));
    func_800F8188(0xF173);
    func_80147000();
    func_800F8188(0xF32E);
L60c:
    func_800F6564(0xF328);
    func_800F5140();
    func_800F6C68();
    func_800F824C(0x1C);
    func_800F6C68();
    func_800F824C(0x1D);
    func_800F654C(0xD);
    func_800F824C(0x1E);
    func_800F6564(0xF322);
    func_800F5410();
    func_800F3F38(func_800F3B04(0xF32F));
    func_800F824C(0x23);
    func_800F6564(0xF324);
    func_800F824C(0x21);
    func_800F8FB8(0xE);
    func_800F7500(0x160);
L6b4:
    for (;;) {
        func_800F6564(0xF323);
        func_800F824C(0x20);
        func_800F6564(0xF321);
        func_800F5410();
        func_800F3F38(func_800F3B04(0xF32E));
        func_800F824C(0x22);
        func_800F6564(0xF329);
        func_800F8188(0xF32A);
    L6fc:
        for (;;) {
            func_801673CC();
            if (func_800F53C0() == 0)
                goto L80c;
            func_800F8960(0x302);
            func_800F4F28(func_800F3B04(0xF32A));
            if (func_800F4FAC(1) != 0)
                goto L80c;
            func_800F6564(0x6CC0);
            if (func_800F6434(0x202) != 0)
                goto L794;
            func_800F6630(0x22);
            func_800F8960(0x300);
            func_800F6630(0x10);
            func_800F8960(0x303);
            goto L7dc;
        L794:
            func_800F6630(0x22);
            func_800F5480();
            func_800F8058(0x10);
            func_800F8960(0x300);
            func_800F6630(0x10);
            func_800F8960(0x303);
        L7dc:
            func_800F6630(0x23);
            func_800F8960(0x301);
            func_800F63BC();
            func_800F63BC();
            func_800F63BC();
            func_800F63BC();
        L80c:
            func_800F6630(0x22);
            func_800F5410();
            func_800F4008(0x10);
            func_800F824C(0x22);
            func_800F5DA0(0x20);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        func_800F6630(0x23);
        func_800F5410();
        func_800F4008(0x10);
        func_800F824C(0x23);
        func_800F5DA0(0x21);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    return;
}
