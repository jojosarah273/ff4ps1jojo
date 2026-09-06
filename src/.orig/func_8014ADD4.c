#include "common.h"
extern void func_800F654C(void);
extern void func_800F8188(u32 v0);
extern void func_801428FC(void);
extern void func_8014AD44(u32 v0);
extern void func_8014D680(void);
void func_8014ADD4(void) {
    func_800F654C();
    func_8014AD44(0);
    func_8014D680();
    func_801428FC();
    func_800F654C();
    func_800F8188(0xFF);
}
