#include "common.h"
extern void func_800F71DC(void);
extern void func_800F7500(u32 v0);
extern void func_800F9330(void);
extern void func_800F939C(void);
extern void func_80126368(u32 v0);
void func_801264E8(void) {
    func_800F9330();
    func_800F939C();
    func_800F71DC();
    func_800F7500(0x7800);
    func_80126368(0xC600);
}
