#include "common.h"
extern void func_800F8D6C(u32 v0);
extern void func_800FE778(void);
extern void func_800F7270(u32 v0);
extern void func_800F5E48(void);
extern int func_800F5C64(u32 v0);
void func_80116398(void) {
    func_800F8D6C(0x89);
    do {
        func_800FE778();
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
    } while (func_800F5C64(0x202) != 0);
}
