#include "common.h"
void func_8014C13C(void)
{
    func_800F6564(0x34C5);
    if (func_800F6434(0x202) == 0)
        return;
    func_8014D680();
    func_80148CAC();
    func_8014046C();
    func_800F71DC(5);
    func_800F654C(0x27);
    func_800760D0();
    func_80148E08();
    func_800F971C();
    func_800F8D00(0xF111);
    func_800F8D00(0xF113);
    func_80148E80();
    func_800F654C(0x60);
    func_800F81E8(0x2107);
    func_800F654C(0x58);
    func_800F81E8(0x2108);
    func_800F654C(3);
    func_800F8188(0xF1B5);
    func_800F61E8();
    func_800F8188(0xF1B3);
    func_800F6564(0xED4E);
    func_800F4248(0xBF);
    func_800F8188(0xED4E);
    func_800F971C();
    func_80071C2C();
    func_80091AB8();
L23c:
    for (;;) {
        func_8007259C();
        func_8014C4BC();
        func_800F6564(0xF111);
        func_800F5410();
        func_800F4008(4);
        func_800F8188(0xF111);
        func_800F8188(0xF133);
        func_800F6564(0xF113);
        func_800F5410();
        func_800F4008(8);
        func_800F8188(0xF113);
        func_800F8188(0xF134);
        func_800F7500();
    L2a4:
        for (;;) {
            func_800F71DC();
            func_80148F60();
            func_800F8960(0x7614);
            func_800F8960(0x7694);
            func_800F8960(0x7714);
            func_800F8960(0x7794);
            func_800F8960(0x7814);
            func_800F71DC(1);
            func_80148F60();
            func_800F9200();
            func_800F9200();
            func_800F8960(0x7612);
            func_800F8960(0x7692);
            func_800F8960(0x7712);
            func_800F8960(0x7792);
            func_800F8960(0x7812);
            func_800F93DC();
            if (func_800F6434(0x80) != 0)
                goto L34c;
            func_800F971C();
            goto L354;
        L34c:
            func_800F654C(1);
        L354:
            func_800F8960(0x7613);
            func_800F8960(0x7693);
            func_800F8960(0x7713);
            func_800F8960(0x7793);
            func_800F8960(0x7813);
            func_800F93DC();
            func_800F8960(0x7992);
            func_800F8960(0x7A12);
            func_800F8960(0x7A92);
            func_800F8960(0x7B12);
            func_800F5A90(0x30);
            if (func_800F53C0() != 0)
                goto L3c4;
            func_800F8960(0x7B92);
        L3c4:
            func_800F6564(0xF133);
            func_800F5410();
            func_800F4008(8);
            func_800F8188(0xF133);
            func_800F6564(0xF134);
            func_800F5410();
            func_800F4008(8);
            func_800F8188(0xF134);
            func_800F5A90(0x80);
            if (func_800F53D4() == 0)
                goto L2a4;
            func_800F6564(0xF112);
            func_800F8188(0xF1B4);
            func_800F6564(0xF111);
            func_800F8188(0xF133);
            func_800F6564(0xF113);
            func_800F8188(0xF134);
            func_800F6240(0xF112);
            func_800F6564(0xF112);
            func_800F5574(0x64);
            if (func_800F53D4() == 0)
                goto L23c;
            func_800F6240(0xF425);
            return;
        }
    }
}
