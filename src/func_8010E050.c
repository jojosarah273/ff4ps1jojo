#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_8010E0D0(void);
extern void func_8011EA5C(void);
void func_8010E050(void) {
    func_800F654C(0x80);
    func_800F8188(0x2100);
    func_800F654C(0);
    func_800F8188(0x4200);
    func_800F654C(0xFF);
    func_800F8188(0x2140);
    func_8010E0D0();
    func_8011EA5C();;
}
