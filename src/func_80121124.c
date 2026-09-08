#include "common.h"
void func_80121124(void)
{
    func_800F926C();
    func_800F9448();
    func_800F4248(0x3F);
    func_800F7864();
    func_800F824C(0x63);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x63));
    func_800F61E8();
    func_800F824C(0x65);
    func_800F9644(0x20);
    func_800F9660(0x20);
    func_800F824C(0x64);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x64));
    func_800F61E8();
    func_800F824C(0x66);
    func_800F4248(0x3F);
    func_800F7864();
    func_800F824C(0x67);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x67));
    func_800F61E8();
    func_800F824C(0x69);
    func_800F9644(0x20);
    func_800F9660(0x20);
    func_800F824C(0x68);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x68));
    func_800F61E8();
    func_800F824C(0x6A);
    func_800F9448();
L1450:
    for (;;) {
        func_800F6630(0x64);
        if (func_800F54D4(func_800F3C3C(0x68)) == 0)
            func_801217EC();
        func_800F6630(0x66);
        if (func_800F54D4(func_800F3C3C(0x6A)) == 0)
            func_801218EC();
        func_800F6630(0x63);
        if (func_800F54D4(func_800F3C3C(0x67)) == 0)
            func_801219EC();
        func_800F6630(0x65);
        if (func_800F54D4(func_800F3C3C(0x69)) == 0)
            func_80121B5C();
        func_800F6630(0xC2);
        if (func_800F6434(2) == 0) {
            func_800F5DA0(0xC2);
            func_800F7500(8);
            func_800F7270(0x41);
            for (;;) {
                func_80121678();
                func_800F5EA0();
                if (func_800F5C64(0x202) != 0)
                    continue;
                break;
            }
        }
        /* v0/s0 branch */
        if (1) {
            func_80126990();
        }
        func_8011F320();
        func_800F6630(0xC3);
        func_800F71DC(0x85B8);
        func_80120070();
        /* v1/s0 branch */
        if (1) {
            func_80126990();
        }
        func_8016EA7C();
        func_800F7270(0x63);
        if (func_800F56AC(func_800F3C3C(0x67)) == 0)
            continue;
        func_800F7270(0x65);
        if (func_800F56AC(func_800F3C3C(0x69)) == 0)
            continue;
        func_800F6564(0x1C2);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    func_800F71DC(0x858C);
    func_800F8D00(0x1CD);
    func_800F8D00(0x1D0);
    return;
}
