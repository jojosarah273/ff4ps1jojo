#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F7500(u32 v0);
extern void func_800F8D6C(u32 v0);
extern void func_8016A0C8(u32 v0);
void func_8016A080(void) {
    u32 tS;
    func_800F71DC(tS);
    func_800F8D6C(0x32);
    func_800F71DC(0);
    func_800F7500(0xD300);
    func_800F654C(0x4000);
    func_8016A0C8(0x13);
}
