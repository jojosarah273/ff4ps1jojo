#include "common.h"
extern void func_800F3D64(u32 v0);
extern void func_800F6558(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F7500(u32 v0);
extern void func_800F9644(void);
extern void func_800F9660(u32 v0);
void func_80126878(void) {
    func_800F9644();
    func_800F6558(0x20);
    func_800F71DC(0xFF);
    func_800F7500(0xA400);
    func_800F3D64(0xA000);
    func_800F9660(0x7E7E);
}
