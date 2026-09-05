#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800F8D6C(u32 v0);
extern void func_800F9200(void);
extern void func_800F9330(void);
extern void func_800F93DC(void);
extern void func_800F95A0(u32 v0);
extern void func_800F971C(u32 v0);
extern void func_801240A8(void);
void func_8012102C(void) {
    u32 tS;
    func_801240A8();
    func_800F9200();
    func_800F9330();
    func_800F71DC(tS);
    func_800F8D6C(0xA600);
    func_800F71DC(0x29);
    func_800F8D6C(0x6800);
    func_800F971C(0x35);
    func_800F824C(tS);
    func_800F654C(0xC3);
    func_800F824C(0x20);
    func_800F95A0(0x34);
    func_800F93DC();
}
