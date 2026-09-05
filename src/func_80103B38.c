#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_80103EAC(void);
extern void func_800FF024(void);
extern void func_800FE7B0(void);
extern void func_80103F00(void);
extern void func_800F5DA0(u32 v0);
extern int func_800F5B8C(u32 v0);
void func_80103B38(void) {
    func_800F654C(0x28);
    func_800F824C(0x79);
    do {
        func_80103EAC();
        func_800FF024();
        func_800FE7B0();
        func_80103F00();
        func_800F5DA0(0x79);
    } while (func_800F5B8C(0x202) != 0);
}
