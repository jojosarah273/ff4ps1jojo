#include "common.h"
extern int func_800F53C0(void);
extern void func_80121FDC(void);
extern void func_800F62BC(u32 v);
extern void func_8012202C(void);
extern void func_800F5DA0(u32 v);
extern void func_800F654C(u32 v);
extern void func_800F824C(u32 v);
extern void func_80121BE4(void);
void func_80121B5C(void) {
    if (func_800F53C0() == 0) {
        func_8012202C();
        func_800F5DA0(0x65);
    } else {
        func_80121FDC();
        func_800F62BC(0x65);
    }
    func_800F654C(0xF9);
    func_800F824C(0x1E);
    func_800F654C(0xFB);
    func_800F824C(0x1F);
    func_800F654C(0xFE);
    func_800F824C(0x20);
    func_80121BE4();
}
