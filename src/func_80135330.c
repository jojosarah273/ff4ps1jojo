#include "common.h"
void func_80135330(void)
{
    /* ability/skill screen: 0x34 window + 0xDB cell, 0x1B7C/0x1BCB
       texts; 80134948/80125934/8012B168/80120FBC/801241B8/80120F1C
       home row, then 80135298/80135574 detail rows, the L13546C loop
       (801378E0/80137938 + 6434(2) gate) and 801361A4/8012B0D8 tail. */
    func_800F6630(0x34);
    func_800F824C(0xDB);
    func_800F654C();
    func_80134948();
    func_800F5574();
    if (func_800F53D4() != 0)
        goto L1353C4;
    func_80125934();
    func_8012B168();
    func_8011F684();
    func_80120FBC();
    func_800F7500();
    func_8011FB74();
    func_80120B6C();
    func_8011FF40();
    return;
L1353C4:
    func_801241B8();
    func_80120F1C();
    func_800F7500();
    func_8011EF30();
    func_80135298();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011FBA4();
    func_800F7500();
    func_8011EF30();
    func_80135574();
    func_800F8188(0x1B7D);
    func_8011F684();
    func_80120B6C();
    func_800F8F74(0x1BCB);
L13546c:
    for (;;) {
        func_801378E0();
        func_80125934();
        func_800F6564(0x1B7C);
        func_800F7500(0x19A);
        func_801206DC();
        func_8011F684();
        func_801264E8();
        func_8011F884();
        func_80137938();
        func_800F6564(0x1BCB);
        if (func_800F6434(2) != 0)
            goto L1354DC;
        func_800F8F74(0x1BCB);
        func_8013554C();
    L1354DC:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L13551C;
        func_800F7500(0x310);
        func_801361A4();
        func_8012B0D8();
        return;
    L13551C:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            continue;
        break;
    }
    return;
}
