#include "common.h"
void func_80174880(void)
{
    /* battle action-confirm overlay: 4 members; each gets a highlight pass
       (6630/5574(0xA) + 4008(0x38) select-read) and a detail pass
       (6630/4248(0xF) + 4008(0x38)). Skip when 53C0()==0 (no confirm). */
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F71DC(0x2882);
    func_800F6630(0x86);
    func_800F5574(0xA);
    if (func_800F53C0() != 0) {
        func_800F5410();
        func_800F4008(0x38);
    }
    func_800F654C(0x20);
    func_800F6630(0x86);
    func_800F4248(0xF);
    func_800F5574(0xA);
    if (func_800F53C0() != 0) {
        func_800F5410();
        func_800F4008(0x38);
    }
    func_800F654C(0x20);
    func_800F6630(0x87);
    func_800F5574(0xA);
    if (func_800F53C0() != 0) {
        func_800F5410();
        func_800F4008(0x38);
    }
    func_800F654C(0x20);
    func_800F6630(0x87);
    func_800F4248(0xF);
    func_800F5574(0xA);
    if (func_800F53C0() != 0) {
        func_800F5410();
        func_800F4008(0x38);
    }
    func_800F654C(0x20);
    func_800F71DC(0x28A2);
    func_800F6630(0x88);
    func_800F5574(0xA);
    if (func_800F53C0() != 0) {
        func_800F5410();
        func_800F4008(0x38);
    }
    func_800F654C(0x20);
    func_800F6630(0x88);
    func_800F4248(0xF);
    func_800F5574(0xA);
    if (func_800F53C0() != 0) {
        func_800F5410();
        func_800F4008(0x38);
    }
    func_800F654C(0x20);
    return;
}
