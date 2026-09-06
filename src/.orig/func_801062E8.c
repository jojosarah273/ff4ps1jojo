#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F7270(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F8D00(u32 v0);
extern void func_800FCC84(u32 v0);
extern void func_800FCCBC(u32 v0);
void func_801062E8(void) {
    u32 tS;
    func_800F654C(tS);
    func_800F8188(0x80);
    func_800FCC84(0x2115);
    func_800F654C(tS);
    func_800F8188(0x1);
    func_800F7270(0x4300);
    func_800F8D00(0x3D);
    func_800F71DC(0x2116);
    func_800F8D00(0xF6C6);
    func_800F654C(0x4302);
    func_800F8188(0x14);
    func_800F71DC(0x4304);
    func_800F8D00(0x10);
    func_800FCCBC(0x4305);
}
