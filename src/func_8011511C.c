#include "common.h"
extern void func_800F9200(void);
extern void func_800F7500(u32 v0);
extern void func_800F654C(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800F7270(u32 v0);
extern void func_800F8D6C(u32 v0);
extern void func_800F93DC(void);
extern void func_8011581C(void);
extern void func_80115A34(void);
void func_8011511C(void) {
    func_800F9200();
    func_800F7500(0x1D0);
    func_800F654C(0x1C);
    func_800F824C(0x91);
    func_800F654C(0x78);
    func_800F824C(0x8F);
    func_800F7270(0x2C);
    func_800F8D6C(0xC);
    func_800F7270(0x2E);
    func_800F8D6C(0xE);
    func_800F654C(0x20);
    func_800F824C(0xAD);
    func_800F93DC();
    func_800F824C(0x92);
    func_8011581C();
    func_800F7500(0x190);
    func_80115A34();;
}
