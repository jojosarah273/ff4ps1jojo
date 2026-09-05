#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800F8D6C(u32 v0);
extern void func_800F9200(void);
extern void func_800F9330(void);
extern void func_800F93DC(void);
extern void func_800F95A0(u32 v0);
extern void func_80124130(void);
void func_80120E9C(void) {
    u32 tS;
    func_80124130();
    func_800F9200();
    func_800F9330();
    func_800F71DC(tS);
    func_800F8D6C(0xC600);
    func_800F71DC(0x29);
    func_800F8D6C(0x7800);
    func_800F654C(0x35);
    func_800F824C(0x2);
    func_800F654C(0xC3);
    func_800F824C(0x20);
    func_800F95A0(0x34);
    func_800F93DC();
}
