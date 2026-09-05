#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800F8D6C(u32 v0);
extern void func_800F8FB8(u32 v0);
extern void func_800F9200(void);
extern void func_800F9330(void);
extern void func_800F93DC(void);
extern void func_800F95A0(u32 v0);
void func_80120FBC(void) {
    u32 tS;
    func_800F9200();
    func_800F9330();
    func_800F71DC(tS);
    func_800F8D6C(0xB600);
    func_800F71DC(0x29);
    func_800F8D6C(0x6000);
    func_800F654C(0x35);
    func_800F824C(0x1);
    func_800F8FB8(0xC3);
    func_800F95A0(0x34);
    func_800F93DC();
}
