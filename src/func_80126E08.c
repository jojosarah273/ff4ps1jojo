#include "common.h"
void func_80126E08(void)
{
    /* ability/status screen. s0 = cursor; v0/s0 regcmp gates route the
       cursor-row recompute (L26FB4 vs L27048); the v1/v0 latch at L2712C
       loops back to L26F74 while unequal. */
    func_800F654C(0x15);
    func_800F8188(0x1E01);
    func_800F654C(1);
    func_800F8188(0x1E00);
    func_80169128();
    func_80123D3C();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
L26ef0:
    func_80194700();
    func_80194394();
    func_800F654C(0x30);
    func_800F824C(0xC1);
    func_80128480();
    func_800F8F74(0x1B47);
    goto L26F74;
L27080:
    func_800F6564(0x1A3C);
    if (func_800F6434(0x202) != 0)
        goto L270E8;
    func_80126610();
    func_80128C4C();
    func_8013AAA8();
    func_800F9644(0x20);
    func_800F6558(0x1BE4);
    func_800F81B0(0x17FE);
    func_800F9660(0x20);
    func_800F8F74(0x17FB);
    func_80128264();
    return;
L26f74:
    for (;;) {
        func_80123FB4();
        func_801241B8();
        func_8011F6A4();
        func_800F6564(0x1A3C);
        func_80127668();
        /* v0/s0 gate -> L26FB4 (or L26F74 tail) */
        func_8013836C(1);
    L26FB4:
        func_80124298();
        func_801280D4();
        func_80127408();
        func_801210AC();
        func_800F7500();
        func_8011FBA4();
        func_80126330();
        /* v0/s0 gate -> L27048 / L270E8 */
        func_80128750();
        func_8016EA7C();
        goto L270E8;
    L27048:
        func_80128598();
        func_80127168();
        /* v0/s0 gate -> return */
        break;
    L270E8:
        func_80127808();
        if (func_800F53C0() != 0) {
            func_8013B04C();
            func_8013AAA8();
            func_80187C20();
            func_80126610();
            return;
        }
        func_80187C20();
        func_80126610();
        /* v1/v0 latch -> L26F74 while unequal, else return */
        continue;
    }
    return;
}
