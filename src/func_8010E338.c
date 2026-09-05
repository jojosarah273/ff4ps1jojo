#include "common.h"
extern void func_800FC548(void);
extern void func_80176060(void);
extern void func_800F5448(void);
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
void func_8010E338(void) {
    func_800FC548();
    func_80176060();
    func_800F5448();
    func_800F654C(0);
    func_800F8188(0x2100);
    func_800F654C(0x81);
    func_800F8188(0x4200);;
}
