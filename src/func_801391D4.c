#include "common.h"
void func_801391D4(u32 a0)
{
    if (a0 != 0)
        goto L922c;
    func_80177DEC();
    func_80177DEC();
L91f4:
    for (;;) {
        func_8011F884();
        func_801395E4();
        func_80139B44();
        func_800F71DC(0x3188);
        func_80126070();
        func_8011F684();
        func_801264E8();
    L922c:
        func_800F6658(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L926c;
        func_800F71DC(0x1340);
        func_8012E844();
        func_800F5410();
        return;
    L926c:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L92c4;
        func_800F6630(0xE2);
        func_800F5574(0x11);
        if (func_800F53D4() != 0)
            goto L92bc;
        func_801398F4();
        goto L92c4;
    L92bc:
        func_80139704();
    L92c4:
        func_800F6630(1);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto L9314;
        func_800F6564(0x1BB1);
        if (func_800F6434(2) != 0)
            goto L930c;
        func_800F8F74(0x1BB1);
        goto L9454;
    L930c:
        func_800F6240(0x1BB1);
    L9314:
        func_800F6630(1);
        func_800F4248(2);
        if (func_800F4120(2) != 0)
            goto L9364;
        func_800F6564(0x1BB1);
        if (func_800F6434(0x202) != 0)
            goto L935c;
        func_800F6240(0x1BB1);
        goto L9384;
    L935c:
        func_800F8F74(0x1BB1);
    L9364:
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L9434;
    L9384:
        func_800F6564(0x1BB0);
        if (func_800F6434(0x202) != 0)
            goto L942c;
        func_800F6564(0x1BB2);
        if (func_800F6434(2) != 0)
            goto L9434;
        func_800F5D24(0x1BB2);
        func_800F654C(8);
        for (;;) {
            func_800F9644(0x20);
            func_800F5DD4(0x99);
            func_800F5DD4(0x99);
            func_800F9660(0x20);
            func_800F9200();
            func_801395E4();
            func_8011F684();
            func_801264E8();
            func_800F93DC();
            func_800F5CCC();
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        goto L950c;
    L942c:
        func_800F5D24(0x1BB0);
    L9434:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto L91f4;
    L9454:
        func_800F6564(0x1BB0);
        func_800F5574(6);
        if (func_800F53D4() == 0)
            goto L952c;
        func_800F6564(0x1BB2);
        if (func_800F54D4(func_800F3C3C(0xE2)) != 0)
            goto L91f4;
        func_800F6240(0x1BB2);
        func_800F654C(8);
        for (;;) {
            func_800F9644(0x20);
            func_800F62F0(0x99);
            func_800F62F0(0x99);
            func_800F9660(0x20);
            func_800F9200();
            func_801395E4();
            func_8011F684();
            func_801264E8();
            func_800F93DC();
            func_800F5CCC();
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
    L950c:
        func_8011F884();
        func_800F7270(2);
        func_800F8D6C();
        goto L922c;
    L952c:
        func_800F6240(0x1BB0);
        goto L91f4;
    }
    return;
}
