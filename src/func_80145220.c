#include "common.h"
extern void func_800F654C(void);
extern void func_800F71DC(void);
extern void func_800F8188(u32 v0);
extern void func_8013D12C(u32 v0);
extern void func_8013EF78(void);
extern void func_8014202C(u32 v0);
extern void func_80167BA0(void);
void func_80145220(void) {
    u32 tS;
    func_800F71DC();
    func_8014202C(0x20);
    func_800F654C();
    func_800F8188(0x8);
    func_8013D12C(0xF326);
    func_8013EF78();
    func_80167BA0();
    func_8013D12C(tS);
}
