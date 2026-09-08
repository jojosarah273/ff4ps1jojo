#include "common.h"
void func_800FDD8C(void)
{
    /* shop title rows: 0x7C window gate, 0x6/0x7 windows with 885C
       fill loops (L8FDE30/L8FDEB8 on 5C64(0x202)); 4248(0xF8)/
       9690/4008(0x47) reads. */
    func_800F6630(0x7C);
    func_800F4248(1);
    if (func_800F4120(2) == 0)
        return;
    func_800F6630(0x7C);
    func_800F7864();
    func_800F4248(0xF);
    func_800F9690();
    func_800F9690();
    func_800F6C68();
    func_800F824C(6);
    func_800F7500(7);
L8fde30:
    for (;;) {
        func_800F6C68();
        func_800F885C();
        func_800F5E48();
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F4248(0xF8);
    func_800F5410();
    func_800F4008(0x47);
    func_800F9690();
    func_800F6C68();
    func_800F885C();
    func_800F7500(7);
L8fdeb8:
    for (;;) {
        func_800F6C68();
        func_800F885C();
        func_800F5E48();
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F4248(0xF8);
    func_800F9690();
    func_800F6630(6);
    func_800F885C();
    return;
}
