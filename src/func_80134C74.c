#include "common.h"
void func_80134C74(void)
{
    /* ability wrapper: 8016EA9C/80123D3C preps, 0x1B1D/0x1BB1/0x1BB2
       rows, then 80134FF4 sub-dispatcher; loop L134D38 pulls
       80194700/80194394. */
    func_800F926C();
    func_800F9298();
    func_800F71DC(0x100);
    func_800F9330();
    func_800F94B8();
    func_800F654C(0x7E);
    func_800F9200();
    func_800F9448();
    func_8016EA9C();
    func_80123D3C();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
L134d38:
    for (;;) {
        func_80194700();
        func_80194394();
        func_800F71DC();
        func_800F8D00(0x1B1D);
        func_800F654C(0x20);
        func_800F824C(0xC1);
        func_800F8F74(0x1BB1);
        func_800F8F74(0x1BB2);
        func_8016EA7C();
        func_800F654C(0x20);
        func_800F824C(0x3F);
        func_800F8F74(0x1BB4);
        func_80123FB4();
        func_801241B8();
        func_80126330();
        func_8011F6A4();
        func_801378B0();
        func_800F654C(0xA);
        func_800F8188(0x1BB4);
        func_80134FF4();
        func_80126610();
        func_80122114();
        func_800F971C();
        func_800F3D48();
        func_800F94B8();
        func_800F9448();
        return;
    }
}
