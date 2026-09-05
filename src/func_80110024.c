#include "common.h"
extern void func_800F654C(void);
extern void func_800F71DC(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F8D00(u32 v0);
extern void func_800F8D6C(u32 v0);
extern void func_800F8F74(u32 v0);
extern void func_8011053C(void);
extern void func_80115BCC(u32 v0);
void func_80110024(void) {
    u32 tS;
    func_800F654C();
    func_800F8188(0x10);
    func_800F71DC(0xACF);
    func_800F8D00(0x10);
    func_800F8F74(0xAD2);
    func_800F8F74(0xACD);
    func_80115BCC(0xACE);
    func_8011053C();
    func_800F71DC(tS);
    func_800F8D6C(0x30);
    func_800F71DC(0xEF);
    func_800F8D6C(0xB0);
    func_800F71DC(0xF1);
    func_800F8D6C(0xB0);
    func_800F71DC(0xF3);
    func_800F8D6C(0xFFE0);
}
