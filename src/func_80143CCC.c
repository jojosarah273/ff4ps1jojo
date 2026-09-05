#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_80145278(void);
extern void func_801452C8(void);
extern void func_8014A488(u32 v0);
void func_80143CCC(void) {
    u32 tS;
    func_80145278();
    func_800F654C(tS);
    func_800F8188(0x8);
    func_800F654C(0xF326);
    func_8014A488(0x7);
    func_801452C8();
}
