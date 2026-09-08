#include "common.h"
void func_80138A6C(void)
{
    /* ability/status wrapper: 80123D3C render + 0x1A73 title + 0x204/
       0x206 stat cells, then the L138BDC loop calling 80138D24 (the
       sub-dispatcher) and re-rendering 0x1B49. */
    func_80123D3C();
    func_80124298();
    func_800F654C(1);
    func_800F8188(0x1A73);
    func_800F9644(0x20);
    func_800F65F0(0x204);
    func_800F922C();
    func_800F65F0(0x206);
    func_800F922C();
    func_800F9660(0x20);
    func_800F54B8();
    func_800F654C(0x2C);
    func_800F81E8(0x205);
    func_800F654C(0xCE);
    func_800F81E8(0x206);
    func_800F654C(1);
    func_800F81E8(0x207);
    func_800F654C(0x21);
    func_800F81E8(0x4200);
    func_800F65C8(0x4211);
    func_800F5448();
    func_800F6240(0x1B49);
    func_80123FB4();
    func_801241B8();
    func_80126330();
    func_80138CB0();
    func_80139AA4();
    func_8011F6A4();
    func_8011EF0C();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
L138bdc:
    for (;;) {
        func_80194700();
        func_80194394();
        func_80126590();
        func_80138D24();
        func_800F8F74(0x1B49);
        func_80126610();
        func_800F54B8();
        func_800F9644(0x20);
        func_800F9410();
        func_800F8210(0x206);
        func_800F9410();
        func_800F8210(0x204);
        func_800F9660(0x20);
        return;
    }
}
