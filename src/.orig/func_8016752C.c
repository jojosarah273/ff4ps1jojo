#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_80168B94(u32 v0);
void func_8016752C(void) {
    u32 tS;
    func_800F654C(tS);
    func_80168B94(0x40);
    func_800F654C(tS);
    func_800F8188(0x1F);
    func_800F8188(0xF433);
    func_800F8188(0xF435);
    func_800F654C(0xF434);
    func_800F8188(0xE0);
    func_800F654C(0xEF88);
    func_800F8188(0x10);
    func_800F654C(0xF49B);
    func_800F8188(0x5);
}
