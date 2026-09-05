#include "common.h"
extern void func_800F654C(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F8D00(u32 v0);
extern void func_800F9200(u32 v0);
extern void func_800F9448(void);
void func_801703E8(void) {
    u32 tS;
    func_800F654C(tS);
    func_800F9200(0);
    func_800F9448();
    func_800F71DC(tS);
    func_800F8D00(0x2000);
    func_800F71DC(0x11D);
    func_800F8D00(0xE600);
    func_800F654C(0x11F);
    func_800F8188(0x7E);
    func_800F71DC(0x121);
    func_800F8D00(0x1000);
}
