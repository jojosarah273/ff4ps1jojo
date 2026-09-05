#include "common.h"
extern void func_80070174(u32 v0);
extern void func_800F654C(void);
extern void func_800F8188(u32 v0);
extern void func_80140944(void);
extern void func_8014096C(void);
extern void func_801409E4(void);
extern void func_8016694C(void);
void func_80166B80(void) {
    func_8016694C();
    func_801409E4();
    func_800F654C();
    func_800F8188(0x3);
    func_80070174(0xEF87);
    func_80140944();
    func_800F654C();
    func_800F8188(0x3);
    func_80070174(0xEF87);
    func_8014096C();
    func_800F654C();
    func_800F8188(0x3);
}
