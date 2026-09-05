#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800F8FB8(u32 v0);
extern void func_80111BBC(u32 v0);
void func_80110F2C(void) {
    u32 tS;
    func_800F654C(tS);
    func_800F8188(0x6);
    func_800F654C(0x1704);
    func_800F8188(0x3);
    func_800F654C(0x1705);
    func_800F824C(0x58);
    func_800F654C(0x2C);
    func_800F824C(0x60);
    func_80111BBC(0x2E);
    func_800F8FB8(tS);
    func_800F8FB8(0x79);
    func_800F8FB8(0x7A);
}
