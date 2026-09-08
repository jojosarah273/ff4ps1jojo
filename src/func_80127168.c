#include "common.h"
void func_80127168(void)
{
    /* ability-move sub-screen: 1A3C/1B47 texts, two browse loops
       (L127294 equip, L127354 detail) with 801282D4 row-commit; exits via
       80136148 or the 80135BE4/80136014 left-route. */
    func_801360AC();
L127178:
    for (;;) {
        func_800F6564(0x1A3C);
        func_800F5574(5);
        if (func_800F53C0() == 0)
            goto L1271A0;
        func_800F8F74(0x1A3C);
    L1271A0:
        func_8011F684();
        func_8011EF0C();
        func_800F654C(0x1F);
        func_800F81E8(0x212C);
        func_800F6240(0x16A7);
        func_8011F884();
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L127210;
        func_800F5480();
        func_80136148();
        return;
    L127210:
        /* v1/v0 gate */
        func_80135BE4();
        func_800F5410();
        func_80136014();
        return;
    L127264:
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L127324;
        func_800F654C(0xF);
        func_800F81E8(0x212C);
    L127294:
        for (;;) {
            func_800F6564(0x1B47);
            if (func_800F6434(2) != 0)
                goto L1272D4;
            func_800F6564(0x1A3C);
            func_800F5CCC();
            if (func_800F5B8C(2) != 0)
                goto L1272F4;
            goto L1272FC;
        L1272D4:
            func_800F6564(0x1A3C);
            func_800F5CCC();
            if (func_800F5B8C() != 0)
                goto L1272FC;
        L1272F4:
            func_800F654C(4);
        L1272FC:
            func_800F8188(0x1A3C);
            func_801282D4();
            if (func_800F53C0() == 0)
                continue;
            break;
        }
        goto L1273A4;
    L127324:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto L1273C4;
        func_800F654C(0xF);
        func_800F81E8(0x212C);
    L127354:
        for (;;) {
            func_800F6564(0x1A3C);
            func_800F61E8();
            func_800F5574(5);
            if (func_800F53D4() == 0)
                goto L127384;
            func_800F6564(0x1B47);
        L127384:
            func_800F8188(0x1A3C);
            func_801282D4();
            if (func_800F53C0() == 0)
                continue;
            break;
        }
    L1273A4:
        func_800F6564(0x1A3C);
        func_80127668();
        func_80124298();
        func_801280D4();
    L1273C4:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) == 0) {
            func_800F5410();
            func_80136148();
            return;
        }
        continue;
    }
}
