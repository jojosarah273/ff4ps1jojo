#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F7270(u32 v0);
extern void func_800F8768(u32 v0);
extern void func_800F6364(void);
extern void func_800F5958(u32 v0);
extern int func_800F53D4(void);
void func_80129EF4(void) {
    func_800F654C(0xFF);
    func_800F8188(0x1B08);
    func_800F8188(0x1BBA);
    func_800F7270(0x41);
    do {
        func_800F8768(0x1B0A);
        func_800F6364();
        func_800F5958(0x6);
    } while (func_800F53D4() == 0);
}
