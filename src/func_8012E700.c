#include "common.h"
extern void func_800F71DC(u32 v0);
extern void func_800F5DA0(u32 v0);
extern void func_800F62BC(u32 v0);
extern void func_8012E7CC(void);
extern void func_8011F684(void);
extern void func_800F5E48(void);
extern int func_800F5C64(u32 v0);
void func_8012E700(void) {
    func_800F71DC(0x18);
    do {
        func_800F5DA0(0xD7);
        func_800F62BC(0xD5);
        func_8012E7CC();
        func_8011F684();
        func_800F5E48();
    } while (func_800F5C64(0x202) != 0);
}
