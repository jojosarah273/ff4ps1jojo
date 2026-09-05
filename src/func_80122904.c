#include "common.h"
extern void func_800F6630(void);
extern void func_800F71DC(u32 v0);
extern void func_80120070(u32 v0);
void func_80122904(void) {
    func_800F6630();
    func_800F71DC(0xE8);
    func_80120070(0x88B5);
}
