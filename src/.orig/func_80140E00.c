#include "common.h"
extern void func_8009546C(u32 v0);
extern void func_800F6240(void);
extern void func_800F654C(u32 v0);
extern void func_800F6564(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_80140CFC(u32 v0);
extern void func_80140D94(void);
void func_80140E00(void) {
    u32 tS;
    func_800F654C(tS);
    func_800F8188(0xC4);
    func_800F654C(0x33C2);
    func_800F8188(0x56);
    func_800F654C(0x33C3);
    func_800F8188(0xFF);
    func_80140CFC(0x33C4);
    func_800F6240();
    func_800F6564(0xF474);
    func_800F8188(0xF475);
    func_8009546C(0x34C3);
    func_80140D94();
}
