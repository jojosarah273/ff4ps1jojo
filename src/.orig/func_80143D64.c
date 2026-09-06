#include "common.h"
extern void func_800F5140(u32 v0);
extern void func_800F6B68(u32 v0);
extern void func_800F824C(void);
extern void func_800F9330(void);
extern void func_800F95A0(void);
extern void func_80148FA0(u32 v0);
void func_80143D64(void) {
    u32 tS;
    func_800F9330();
    func_800F6B68(tS);
    func_800F5140(0xF1F3);
    func_800F824C();
    func_800F6B68(0x28);
    func_80148FA0(0xF173);
    func_800F95A0();
}
