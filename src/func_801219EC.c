#include "common.h"
extern int func_800F53C0(void);
extern void func_801220EC(void);
extern void func_800F62BC(u32 v);
extern void func_80121F8C(void);
extern void func_800F5DA0(u32 v);
extern void func_800F654C(u32 v);
extern void func_800F824C(u32 v);
extern void func_80121A74(void);
void func_801219EC(void) {
    if (func_800F53C0() == 0) {
        func_80121F8C();
        func_800F5DA0(99);
    } else {
        func_801220EC();
        func_800F62BC(99);
    }
    func_800F654C(0xF7);
    func_800F824C(0x1E);
    func_800F654C(0xFA);
    func_800F824C(0x1F);
    func_800F654C(0xFC);
    func_800F824C(0x20);
    func_80121A74();
}
