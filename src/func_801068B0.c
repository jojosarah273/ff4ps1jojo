#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800FE778(void);
extern void func_800F5DA0(u32 v0);
extern int func_800F5B8C(u32 v0);
void func_801068B0(void) {
    func_800F654C(0x8);
    func_800F824C(0x7);
    do {
        func_800FE778();
        func_800F5DA0(0xBB);
        func_800F5DA0(0xBB);
        func_800F5DA0(0x7);
    } while (func_800F5B8C(0x202) != 0);
}
