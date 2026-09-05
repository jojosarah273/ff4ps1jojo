#include "common.h"
extern void func_800F658C(u32 v0);
extern void func_800F8274(u32 v0);
extern void func_800F9330(void);
extern void func_800F9644(void);
extern void func_80140224(u32 v0);
void func_80140310(void) {
    func_800F9330();
    func_800F9644();
    func_800F658C(0x20);
    func_800F8274(0xF408);
    func_80140224(0x2);
}
