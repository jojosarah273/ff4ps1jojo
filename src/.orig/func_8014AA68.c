#include "common.h"
extern void func_800F654C(void);
extern void func_800F8188(u32 v0);
extern void func_8013D720(u32 v0);
void func_8014AA68(void) {
    func_800F654C();
    func_800F8188(0xA);
    func_8013D720(0xF47F);
    func_800F654C();
    func_800F8188(0xFF);
}
