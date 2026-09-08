#include "common.h"
void func_80134FF4(void)
{
    /* ability/config screen: 1BB1 text, 45/46 windows; header renders
       (L135054 vs L13507C variants) with 80124298/80134FBC/801264C0/
       80126590/80123FB4/80126528/80126458; sub-dispatchers 80120070 +
       8012B0D8; loops to L135054/L13507C. */
    func_80124298();
    func_80134FBC();
    func_801264C0();
    func_8017F8F8();
    func_80126590();
    goto L13507C;
L135054:
    for (;;) {
        func_80123FB4();
        func_80134FBC();
        func_80126528();
        func_80126458();
        func_801264C0();
    L13507C:
        func_800F6564(0x1BB1);
        func_800F824C(0x45);
        func_800F5140();
        func_800F4F4C();
        func_800F3F38(func_800F3C3C(0x45));
        func_800F4008(0x10);
        /* v0 gate -> L135108 + row renders */
        func_800F824C(0x45);
        func_800F654C(0x30);
        func_800F824C(0x46);
        func_8011F6D4();
        func_80125934();
        func_8011F684();
        func_801264E8();
        func_8011EF0C();
        func_8011F884();
        func_800F6630(1);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto L1351A8;
        func_800F6564(0x1BB1);
        func_800F61E8();
        func_800F5574(3);
        if (func_800F53D4() == 0)
            goto L1351A0;
        func_800F654C();
    L1351A0:
        func_800F8188(0x1BB1);
    L1351A8:
        func_800F6630(1);
        func_800F4248(2);
        if (func_800F4120(2) != 0)
            goto L1351F8;
        func_800F6564(0x1BB1);
        func_800F5CCC();
        if (func_800F5B8C() != 0)
            goto L1351F0;
        func_800F654C(2);
    L1351F0:
        func_800F8188(0x1BB1);
    L1351F8:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L135268;
        func_800F6564(0x1BB1);
        func_800F5574(2);
        if (func_800F53D4() != 0)
            goto L135288;
        func_800F9200();
        func_800F93DC();
        func_800F71DC();
        func_80120070();
        func_8012B0D8();
        continue;
    L135268:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) == 0)
            break;
        continue;
    L135288:
        return;
    }
    return;
}
