#include "common.h"
extern void func_800F4248(u32 v0);
extern void func_800F6240(void);
extern void func_800F654C(void);
extern void func_800F6564(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F9200(void);
extern void func_800F93DC(u32 v0);
extern void func_8014D080(u32 v0);
extern void func_8014D14C(void);
extern void func_8014D394(void);
void func_8014AD44(void) {
    u32 tS;
    func_800F9200();
    func_800F6564(tS);
    func_800F4248(0x34C4);
    func_800F8188(0x80);
    func_800F6564(0xF279);
    func_800F8188(0x34C5);
    func_800F8188(0xF27A);
    func_800F8188(0xF281);
    func_8014D080(0xF284);
    func_8014D394();
    func_800F654C();
    func_800F8188(0x3);
    func_800F93DC(0xF281);
    func_8014D14C();
    func_800F6240();
}
