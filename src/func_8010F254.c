#include "common.h"
extern void func_800F654C(void);
extern void func_800F6564(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F7210(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800F8D00(u32 v0);
extern void func_80102494(u32 v0);
extern void func_801035B0(u32 v0);
extern void func_8011AB18(u32 v0);
extern void func_8011EA5C(u32 v0);
void func_8010F254(void) {
    u32 tS;
    func_800F71DC(tS);
    func_800F8D00(0xE828);
    func_800F7210(0x1708);
    func_800F8D00(0x1725);
    func_800F6564(0x1706);
    func_8011AB18(0x1727);
    func_800F654C();
    func_800F824C(0x1);
    func_801035B0(0xC3);
    func_800F654C();
    func_800F824C(0xFF);
    func_80102494(0xA2);
    func_800F654C();
    func_800F8188(0x1);
    func_800F71DC(0x6C8);
    func_800F8D00(0xE828);
    func_8011EA5C(0x1725);
}
