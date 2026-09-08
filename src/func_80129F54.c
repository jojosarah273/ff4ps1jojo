#include "common.h"
void func_80129F54(void)
{
    /* main-menu option 0 (config tab): 0x210C header + 0x1F/0x1C/0x1B/
       0xAE windows, 0x1BA5/0x1BC9/0x1B1D rows; home-row renders through
       80121124/801210AC/80126920/801263F0/80120F1C, then the 8012AAC0/
       80120F94/80120CA4 option cells and 8012A190 sub-menu gate. */
    func_800F8F74(0x1B1F);
    func_801267A0();
    func_801266F0();
    func_801240A8();
    func_80120F1C();
    func_800F654C(0x1C);
    func_800F824C(0xC2);
    func_800F654C(6);
    func_800F824C(0xAE);
    func_801241B8();
    func_8011F684();
    func_800F654C(0x1B);
    func_800F81E8(0x212C);
    func_800F7500();
    func_800F71DC();
    func_80121124();
    func_801210AC();
    func_800F7500();
    func_8011FB74();
    func_800F654C(3);
    func_80126920();
    func_801263F0();
    func_8011EF0C();
    func_800F7210(0x1BA5);
    func_800F8D6C(0x93);
    func_8016EA7C();
    func_800F6240(0x1BC9);
    func_800F71DC();
    func_800F8D00(0x1B1D);
    func_80120F94();
    func_8012AAC0();
    func_8016EA7C();
    func_80120B6C();
    func_8012A190();
    /* v0/v1 gate -> L12A180 */
    func_801241B8();
    func_8011F684();
    func_800F7270(0x93);
    func_800F8D00(0x1BA5);
    func_80120F94();
    func_80120CA4();
    func_801240A8();
    func_80126830();
    func_801263F0();
    func_8011EF0C();
    func_80120F1C();
    func_800F654C(0x1C);
    func_800F824C(0xC2);
    func_800F654C(0x86);
    func_800F824C(0xAE);
    func_800F7500();
    func_800F71DC();
    func_80121124();
    func_80122A9C();
    func_80122A24();
    func_8011F684();
    func_800F654C(0x1F);
    func_800F81E8(0x212C);
    func_800F8F74(0x1BC9);
    func_8017F8F8();
    func_80120B6C();
    return;
}
