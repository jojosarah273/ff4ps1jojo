#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800FE870(void);
extern void func_800FF024(void);
extern void func_800FE7D8(void);
extern void func_800F6630(u32 v0);
extern void func_800F4248(u32 v0);
extern int func_800F4120(u32 v0);
void func_80102E78(void) {
    func_800F654C(0x3);
    func_800F8188(0x1705);
    do {
        func_800FE870();
        func_800FF024();
        func_800FE7D8();
        func_800F6630(0x7A);
        func_800F4248(0x3);
    } while (func_800F4120(0x202) != 0);
}
