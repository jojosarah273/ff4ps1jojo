#include "common.h"
void func_800FDBBC(void)
{
    /* shop title-screen: 0x7C window with 800FDA9C/8018226C rows and
       the 0x2115/0x2116/0x420B/0x4300-0x4305 register rows (801820F4
       commit); 0x2000 gate. */
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F6630(0x7C);
    func_800F7864();
    func_800F4248(0xF);
    func_800F9690();
    func_800F9690();
    func_800FDA9C();
    func_800F6630(0x7C);
    func_800F7864();
    func_800F4248(0xF);
    func_800F9690();
    func_800F5410();
    func_800F4008(0x40);
    func_800F9690();
    func_800FDA9C();
    func_8018226C(0x2000);
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F71DC(0x1E80);
    func_800F8D00(0x2116);
    func_800F8F74(0x420B);
    func_800F8F74(0x4300);
    func_800F654C(0x19);
    func_800F8188(0x4301);
    func_800F71DC(0x5900);
    func_800F8D00(0x4302);
    func_800F654C(0x7F);
    func_800F8188(0x4304);
    func_800F71DC(0x100);
    func_800F8D00(0x4305);
    func_800FCCBC();
    func_801820F4();
    return;
}
