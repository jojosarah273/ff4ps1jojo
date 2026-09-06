#include "common.h"
extern void func_800F6240(void);
extern void func_800F654C(u32 v0);
extern void func_80140FB8(u32 v0);
extern void func_80141334(u32 v0);
void func_80140FE0(void) {
    func_800F6240();
    func_800F654C(0xF44C);
    func_80141334(0x1);
    func_800F6240();
    func_80140FB8(0xF41A);
}
