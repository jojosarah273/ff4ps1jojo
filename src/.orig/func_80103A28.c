#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800F8D6C(u32 v0);
extern void func_800F8F74(u32 v0);
extern void func_80103B38(void);
extern void func_80103FE8(void);
extern void func_8010415C(void);
extern void func_801709E4(u32 v0);
extern void func_80176748(u32 v0);
void func_80103A28(void) {
    u32 tS;
    func_80103B38();
    func_800F654C(tS);
    func_800F8188(0x80);
    func_800F8F74(0x2100);
    func_800F8F74(0x4200);
    func_800F654C(0x420C);
    func_800F824C(0x32);
    func_800F71DC(0x76);
    func_800F8D6C(0);
    func_800F71DC(0x47);
    func_800F8D6C(0x8000);
    func_80176748(0x45);
    func_800F654C(tS);
    func_800F8188(0x2);
    func_801709E4(0x1700);
    func_80103FE8();
    func_8010415C();
}
