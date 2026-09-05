#include "common.h"
extern void func_800FE870(void);
extern void func_800F7270(u32 v0);
extern void func_800F8D6C(u32 v0);
extern void func_800F654C(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800F7500(u32 v0);
extern void func_8011581C(void);
void func_80114C98(void) {
    func_800FE870();
    func_800F7270(0x2C);
    func_800F8D6C(0xC);
    func_800F7270(0x2E);
    func_800F8D6C(0xE);
    func_800F654C(0x18);
    func_800F824C(0x91);
    func_800F654C(0x78);
    func_800F824C(0x8F);
    func_800F7500(0x180);
    func_800F654C(0x60);
    func_800F824C(0x92);
    func_8011581C();;
}
