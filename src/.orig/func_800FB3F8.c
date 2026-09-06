#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
void func_800FB3F8(void) {
    u32 tS;
    func_800F654C(tS);
    func_800F8188(0x80);
    func_800F654C(0x2100);
    func_800F8188(0);
}
