#include "common.h"
void func_8013C554(void)
{
    /* ability/skill detail (twin of 8013C094): 1BB5/1BB6/1BB7 texts,
       0x46/0x45/0x60 windows, 8012B168/801266C8/8011F884/8013C4B4
       rows; loops L13C55C/L13C75C/L13C82C. */
L13c55c:
    for (;;) {
        func_800F6564(0x1BB5);
        func_800F5140();
        func_800F4F4C();
        func_800F4008(0x86);
        func_800F824C(0x46);
        func_800F6564(0x1BB6);
        if (func_800F6434(2) != 0)
            goto L13C5C4;
        func_800F654C(0x70);
        goto L13C5CC;
    L13C5C4:
        func_800F654C();
    L13C5CC:
        func_800F824C(0x45);
        func_8011F6D4();
        func_8011F684();
        func_8011F884();
    L13C5EC:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L13C61C;
        func_8012B168();
        return;
    L13C61C:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L13C64C;
        func_8012B168();
        goto L13C89C;
    L13C64C:
        func_800F6630(1);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto L13C69C;
        func_800F6564(0x1BB6);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1BB6);
        if (func_800F4120(2) != 0)
            goto L13C7CC;
    L13C69C:
        func_800F6630(1);
        func_800F4248(2);
        if (func_800F4120(2) != 0)
            goto L13C6EC;
        func_800F6564(0x1BB6);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1BB6);
        if (func_800F4120(0x202) != 0)
            goto L13C70C;
    L13C6EC:
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L13C7AC;
    L13C70C:
        func_800F6564(0x1BB5);
        func_800F5CCC();
        if (func_800F5B8C() != 0)
            goto L13C7A4;
        func_800F6564(0x1BB7);
        func_800F5CCC();
        if (func_800F5B8C(0x80) != 0)
            goto L13C7AC;
        func_800F8188(0x1BB7);
        func_800F654C(8);
    L13C75C:
        for (;;) {
            func_800F9644(0x20);
            func_800F5DD4(0x9F);
            func_800F5DD4(0x9F);
            func_800F9660(0x20);
            func_801266C8();
            func_800F5CCC();
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        goto L13C86C;
    L13C7A4:
        func_800F8188(0x1BB5);
    L13C7AC:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            continue;
        goto L13C7CC;
    L13C7CC:
        func_800F6564(0x1BB5);
        func_800F61E8();
        func_800F5574(5);
        if (func_800F53D4() == 0)
            goto L13C88C;
        func_800F6564(0x1BB7);
        func_800F61E8();
        func_800F5574(0x14);
        if (func_800F53D4() != 0)
            continue;
        func_800F8188(0x1BB7);
        func_800F654C(8);
    L13C82C:
        for (;;) {
            func_800F9644(0x20);
            func_800F62F0(0x9F);
            func_800F62F0(0x9F);
            func_800F9660(0x20);
            func_801266C8();
            func_800F5CCC();
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
    L13C86C:
        func_8011F884();
        func_800F7270(2);
        func_800F8D6C();
        continue;
    L13C88C:
        func_800F8188(0x1BB5);
        continue;
    L13C89C:
        func_800F6564(0x1BB3);
        func_800F5140();
        func_800F4F4C();
        func_800F3F38(func_800F3B04(0x1BB4));
        func_800F5140();
        func_801224D0();
        func_800F6564(0x1BB5);
        func_800F5410();
        func_800F3F38(func_800F3B04(0x1BB7));
        func_800F5140();
        func_800F4F4C();
        func_800F3F38(func_800F3B04(0x1BB6));
        func_800F5140();
        func_800F824C(0x43);
        func_800F7594(0x43);
        func_800F6D70(0x1440);
        func_800F5574(0x19);
        if (func_800F53D4() != 0)
            goto L13CA58;
        func_800F5574(0xC8);
        if (func_800F53D4() != 0)
            goto L13CA58;
        func_800F5574(0xEE);
        if (func_800F53C0() != 0)
            goto L13CA58;
        func_800F6D70(0x1440);
        if (func_800F54D4(func_800F3B04()) == 0)
            goto L13CA18;
        func_800F6B68();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F5574(0x64);
        if (func_800F53C0() != 0)
            goto L13CA58;
        func_800F8960(0x1441);
        func_800F90EC();
        return;
    L13CA18:
        func_800F9644(0x20);
        func_800F6DE8(0x1440);
        func_800F922C();
        func_800F6BE0();
        func_800F89D4(0x1440);
        func_800F9410();
        func_800F87DC();
        func_800F9660(0x20);
        return;
    L13CA58:
        func_8013C4B4();
        return;
    }
}
