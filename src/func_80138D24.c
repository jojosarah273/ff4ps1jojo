#include "common.h"
void func_80138D24(void)
{
    /* ability/party screen: 0x1A88/0x1BB4/0x1BB0-0x1BB5 texts,
       sub-dispatchers 8012E844/80120070 and stat rows 80126070/
       80126528/8012B168/8012B0D8; loops at L138D38. */
    func_80139AFC();
L138d38:
    for (;;) {
        func_80120E2C();
        func_800F6564(0x1A88);
        if (func_800F6434(2) != 0)
            goto L138D9C;
        func_800F6564(0x1A02);
        if (func_800F6434(0x202) != 0)
            goto L138D9C;
        func_800F7500();
        goto L138DA8;
    L138D9C:
        func_800F7500();
    L138DA8:
        func_8011FBA4();
        func_800F8F74(0x1A88);
        func_80126528();
        func_800F654C(0x17);
        func_800F81E8(0x212C);
        func_800F5448();
        func_800F6564(0x1BAF);
        if (func_800F6434(2) != 0)
            goto L138E00;
        func_800F71DC(0x4040);
        goto L138E08;
    L138E00:
        func_800F71DC(0x4010);
    L138E08:
        func_800F7500(0x310);
        func_8011F724();
        func_80139CA4();
        func_800F71DC(0x3188);
        func_80126070();
        func_8011F684();
        func_8011F884();
        func_800F6630(1);
        func_800F4248(3);
        if (func_800F4120(2) != 0)
            goto L138E80;
        func_800F6564(0x1BAF);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1BAF);
    L138E80:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) == 0)
            return;
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            continue;
        func_800F8F74(0x1BB2);
        func_800F8F74(0x1BB0);
        func_800F8F74(0x1BB1);
        func_800F71DC(0x1340);
        func_8012E844();
        func_800F71DC();
        func_800F8D00(0x1B1D);
        func_800F71DC();
        func_800F6564(0x1BAF);
        func_80120070();
        func_80124130();
        func_80124158();
        func_80138CB0();
        func_8012B168();
        func_8012B0D8();
        func_801264C0();
        func_80126528();
        func_8011F6A4();
        continue;
    }
    return;
}
