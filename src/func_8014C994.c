#include "common.h"
extern void func_800F6240(void);
extern void func_800F654C(u32 v0);
extern void func_8014B93C(u32 v0);
extern void func_8014C96C(void);
void func_8014C994(void) {
    func_8014C96C();
    func_800F6240();
    func_800F654C(0xF2A0);
    func_8014B93C(0x1);
}
