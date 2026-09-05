#include "common.h"
extern void func_800F71DC(u32 v0);
extern void func_800F6B68(u32 v0);
extern void func_800F8768(u32 v0);
extern void func_800F5E48(void);
extern int func_800F5C64(u32 v0);
void func_80148BE0(void) {
    func_800F71DC(0x20);
    do {
        func_800F6B68(0x33F);
        func_800F8768(0x343);
        func_800F5E48();
    } while (func_800F5C64(0x202) != 0);
}
