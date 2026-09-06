#include "common.h"
extern void func_800F6240(void);
extern void func_800F8F74(u32 v0);
extern void func_8013EF78(u32 v0);
extern void func_80141F54(void);
void func_80141FEC(void) {
    u32 tS;
    func_800F6240();
    func_8013EF78(0xF327);
    func_80141F54();
    func_800F8F74(tS);
    func_800F8F74(0xF326);
}
