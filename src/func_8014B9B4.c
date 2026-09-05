#include "common.h"
extern void func_800F6564(u32 v0);
extern void func_800F4248(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_8014B9FC(void);
void func_8014B9B4(void) {
    func_800F6564(0x34C4);
    func_800F4248(0x80);
    func_800F824C(0);
    func_800F6564(0x34C5);
    func_800F824C(0x1);
    func_8014B9FC();;
}
