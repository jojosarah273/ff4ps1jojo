#include "common.h"
extern void func_800F6564(u32 v);
extern int func_800F6434(u32 v);
extern void func_800F5CCC(void);
extern void func_8012833C(void);
extern void func_800F5480(void);
void func_801282D4(void) {
    int iVar1;
    func_800F6564(0x1B47);
    iVar1 = func_800F6434(0x202);
    if (iVar1 == 0) {
        func_800F6564(0x1A3C);
        iVar1 = func_800F6434(0x202);
        if (iVar1 != 0) {
            func_800F5CCC();
            func_8012833C();
            return;
        }
    }
    func_800F5480();
}
