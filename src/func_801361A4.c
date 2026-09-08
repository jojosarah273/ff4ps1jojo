#include "common.h"
void func_801361A4(void)
{
    /* item/equip configuration screen. Two 6434(0x202) sub-loops (equip
       browse L362AC / detail L36324); 4008(0x50) reads the confirm key
       before the top of the loop; exits on 4120 returns. */
L361ac:
    for (;;) {
        func_800F6564(0x1B7B);
        func_800F5140();
        func_800F4F4C();
        func_800F4008(0x50);
        func_800F824C(0x46);
        func_800F654C(0x10);
        func_800F824C(0x45);
        func_8011F6D4();
        func_801368E8();
        func_80125934();
        func_8011F684();
        func_8011F884();
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) == 0)
            return;
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L3628C;
        func_80136494();
        func_801240D0();
        func_80126458();
        func_801352F0();
        func_801264C0();
    L3628C:
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L36304;
    L362AC:
        for (;;) {
            func_800F6564(0x1B7B);
            func_800F5CCC();
            if (func_800F5B8C() != 0)
                goto L362DC;
            func_800F6564(0x1B7D);
            func_800F5CCC();
        L362DC:
            func_800F8188(0x1B7B);
            func_801224D0();
            func_800F6B68(0x1A78);
            if (func_800F6434(0x202) != 0)
                continue;
            break;
        }
    L36304:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto L36384;
    L36324:
        for (;;) {
            func_800F6564(0x1B7B);
            func_800F61E8();
            if (func_800F54D4(func_800F3B04(0x1B7D)) == 0)
                goto L3635C;
            func_800F654C();
        L3635C:
            func_800F8188(0x1B7B);
            func_801224D0();
            func_800F6B68(0x1A78);
            if (func_800F6434(0x202) != 0)
                continue;
            break;
        }
    L36384:
        func_800F6630(1);
        func_800F4248(3);
        if (func_800F4120(2) != 0)
            goto L363EC;
        func_800F6564(0x1B7A);
        func_800F4248(1);
        func_800F8188(0x1B7A);
        func_801378E0();
        func_8013554C();
        func_8011F6A4();
    L363EC:
        func_800F6630();
        func_800F4248(0x40);
        if (func_800F4120(2) != 0)
            continue;
        func_800F6564(0x1B7A);
        if (func_800F6434(2) != 0)
            continue;
        func_800F6564(0x1B7C);
        func_800F5410();
        func_800F4008(0xA);
        func_800F5574(0x64);
        if (func_800F53C0() == 0)
            goto L3645C;
        func_800F654C(0xA);
    L3645C:
        func_800F8188(0x1B7C);
        func_800F7500(0x19A);
        func_801206DC();
        func_8013554C();
    }
    return;
}
