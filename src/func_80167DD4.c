#include "common.h"
extern void func_800F4008(void);
extern void func_800F4248(void);
extern void func_800F5410(u32 v0);
extern void func_800F6364(u32 v0);
extern void func_800F8768(u32 v0);
extern void func_80167B48(void);
void func_80167DD4(void) {
    u32 tS;
    func_80167B48();
    func_800F4248();
    func_800F5410(0x7F);
    func_800F8768(tS);
    func_800F6364(0xF398);
    func_80167B48();
    func_800F4248();
    func_800F5410(0x3F);
    func_800F4008();
    func_800F8768(0x20);
    func_800F6364(0xF398);
}
