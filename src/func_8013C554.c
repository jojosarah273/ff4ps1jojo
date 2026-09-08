#include "common.h"
void func_8013C554(void)
{
Lc55c:
    for (;;) {
        func_800F6564(0x1BB5);
        func_800F5140();
        func_800F4F4C();
        func_800F4008(0x86);
        func_800F824C(0x46);
        func_800F6564(0x1BB6);
        if (func_800F6434(2) != 0)
            goto Lc5c4;
        func_800F654C(0x70);
        goto Lc5cc;
    Lc5c4:
        func_800F654C();
    Lc5cc:
        func_800F824C(0x45);
        func_8011F6D4();
        func_8011F684();
        func_8011F884();
    Lc5ec:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto Lc61c;
        func_8012B168();
        return;
    Lc61c:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto Lc64c;
        func_8012B168();
        goto Lc89c;
    Lc64c:
        func_800F6630(1);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto Lc69c;
        func_800F6564(0x1BB6);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1BB6);
        if (func_800F4120(2) != 0)
            goto Lc7cc;
    Lc69c:
        func_800F6630(1);
        func_800F4248(2);
        if (func_800F4120(2) != 0)
            goto Lc6ec;
        func_800F6564(0x1BB6);
        func_800F61E8();
        func_800F4248(1);
        func_800F8188(0x1BB6);
        if (func_800F4120(0x202) != 0)
            goto Lc70c;
    Lc6ec:
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto Lc7ac;
    Lc70c:
        func_800F6564(0x1BB5);
        func_800F5CCC();
        if (func_800F5B8C(0x8080) != 0)
            goto Lc7a4;
        func_800F6564(0x1BB7);
        func_800F5CCC();
        if (func_800F5B8C(0x80) != 0)
            goto Lc7ac;
        func_800F8188(0x1BB7);
        func_800F654C(8);
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
        goto Lc86c;
    Lc7a4:
        func_800F8188(0x1BB5);
    Lc7ac:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto Lc55c;
    Lc7cc:
        func_800F6564(0x1BB5);
        func_800F61E8();
        func_800F5574(5);
        if (func_800F53D4() == 0)
            goto Lc88c;
        func_800F6564(0x1BB7);
        func_800F61E8();
        func_800F5574(0x14);
        if (func_800F53D4() != 0)
            goto Lc55c;
        func_800F8188(0x1BB7);
        func_800F654C(8);
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
    Lc86c:
        func_8011F884();
        func_800F7270(2);
        func_800F8D6C();
        goto Lc5ec;
    Lc88c:
        func_800F8188(0x1BB5);
        goto Lc55c;
    Lc89c:
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
            goto Lca58;
        func_800F5574(0xC8);
        if (func_800F53D4() != 0)
            goto Lca58;
        func_800F5574(0xEE);
        if (func_800F53C0() != 0)
            goto Lca58;
        func_800F6D70(0x1440);
        if (func_800F54D4(func_800F3B04(0xFF28)) == 0)
            goto Lca18;
        func_800F6B68(0xFF29);
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F5574(0x64);
        if (func_800F53C0() != 0)
            goto Lca58;
        func_800F8960(0x1441);
        func_800F90EC(0xFF29);
        goto Lca58;
    Lca18:
        func_800F9644(0x20);
        func_800F6DE8(0x1440);
        func_800F922C();
        func_800F6BE0(0xFF28);
        func_800F89D4(0x1440);
        func_800F9410();
        func_800F87DC(0xFF28);
        func_800F9660(0x20);
    Lca58:
        func_8013C4B4();
        return;
    }
}
