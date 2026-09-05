#include "common.h"
extern void func_8011053C(void);
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F8D00(u32 v0);
extern void func_800F8F74(u32 v0);
extern void func_80115BCC(void);
void func_8010FCA8(void) {
    func_8011053C();
    func_800F654C(0x8);
    func_800F8188(0xACF);
    func_800F71DC(0x10);
    func_800F8D00(0xAD2);
    func_800F8F74(0xACD);
    func_800F8F74(0xACE);
    func_800F654C(0x2);
    func_800F8188(0xAD0);
    func_800F8188(0xAD1);
    func_800F654C(0x60);
    func_800F8188(0xAD4);
    func_800F8188(0xAD5);
    func_80115BCC();;
}
