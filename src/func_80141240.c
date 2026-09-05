#include "common.h"
extern void func_800F8D6C(u32 v0);
extern void func_800F7500(u32 v0);
extern void func_80141290(void);
void func_80141240(void) {
    func_800F8D6C(0);
    func_800F7500(0);
    func_80141290();
    func_800F7500(0x40);
    func_80141290();
    func_800F7500(0x80);
    func_80141290();;
}
