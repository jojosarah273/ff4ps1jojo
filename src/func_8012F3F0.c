#include "common.h"
void func_8012F3F0(void)
{
Lf3f8:
    func_800F6564(0x1B87);
    if (func_800F6434(0x202) != 0)
        goto L470;
    func_800F8F74(0x1B93);
    func_800F6564(0x1B81);
    func_800F5140();
    func_800F4F4C();
    func_800F4008(0x10);
    func_800F824C(0x46);
    func_800F654C(8);
    func_800F824C(0x45);
    goto L478;
L470:
    func_8012FF9C();
L478:
    func_8011F6D4();
    func_80120F1C();
    func_8013095C();
    func_80130AA4();
    func_800F8188(0x1B93);
    func_800F7500(0x21A);
    func_801206DC();
    func_800F71DC(0x20A);
    func_800F7500();
    func_801223A4();
    func_8011F684();
    func_801264E8();
    func_8011F884();
    func_800F6564(0x1B87);
    if (func_800F6434(0x202) != 0)
        goto L698;
    func_800F6630(1);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto L5a0;
list8_loop:
    func_800F6564(0x1B81);
    func_800F824C(0x43);
    for (;;) {
        func_800F6630(0x43);
        func_800F5CCC();
        if (func_800F5B8C(0x8080) != 0)
            goto L558;
        func_800F654C(2);
    L558:
        func_801224D0();
        func_800F6B68(0x1B7E);
        if (func_800F6434(0x80) != 0)
            continue;
        break;
    }
    func_800F9200();
    func_800F6630(0x43);
    func_800F8188(0x1B81);
    func_800F93DC();
    func_8012F9A0();
L5a0:
    func_800F6630(1);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L648;
    func_800F6564(0x1B81);
    func_800F824C(0x43);
    for (;;) {
        func_800F6630(0x43);
        func_800F61E8();
        func_800F5574(3);
        if (func_800F53D4() == 0)
            goto L600;
        func_800F971C();
    L600:
        func_801224D0();
        func_800F6B68(0x1B7E);
        if (func_800F6434(0x80) != 0)
            continue;
        break;
    }
    func_800F9200();
    func_800F6630(0x43);
    func_800F8188(0x1B81);
    func_800F93DC();
    func_8012F9A0();
L648:
    func_800F6630();
    func_800F4248(0x80);
    if (func_800F4120(2) == 0)
        func_800F6240(0x1B87);
    func_800F6630(1);
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto Lf3f8;
    return;
L698:
    func_800F6630(1);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto L6e8;
    func_800F6564(0x1B83);
    func_800F5CCC();
    if (func_800F5B8C(0x8080) != 0)
        goto L6e0;
    func_800F654C(7);
L6e0:
    func_800F8188(0x1B83);
L6e8:
    func_800F6630(1);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L740;
    func_800F6564(0x1B83);
    func_800F61E8();
    func_800F5574(8);
    if (func_800F53D4() == 0)
        goto L738;
    func_800F971C();
L738:
    func_800F8188(0x1B83);
L740:
    func_800F6630(1);
    func_800F4248(2);
    if (func_800F4120(2) != 0)
        goto L790;
    func_800F6564(0x1B84);
    func_800F5CCC();
    if (func_800F5B8C(0x8080) != 0)
        goto L788;
    func_800F654C(2);
L788:
    func_800F8188(0x1B84);
L790:
    func_800F6630(1);
    func_800F4248(1);
    if (func_800F4120(2) != 0)
        goto L7e8;
    func_800F6564(0x1B84);
    func_800F61E8();
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto L7e0;
    func_800F971C();
L7e0:
    func_800F8188(0x1B84);
L7e8:
    func_800F6630();
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto L8a8;
    func_800F6564(0x1B88);
    if (func_800F6434(0x202) != 0)
        goto L880;
    func_800F6240(0x1B88);
    func_800F7210(0x1B83);
    func_800F8D00(0x1B85);
    func_8012FF9C();
    func_800F9644(0x20);
    func_800F6658(0x45);
    func_800F5410();
    func_800F4064(0x404);
    func_800F8274(0x45);
    func_800F9660(0x20);
    func_8011F6AC();
    goto L8e0;
L880:
    func_800F8F74(0x1B88);
    if ((func_80130058() & 0xFF) != 1)
        goto L8e0;
    return;
L8a8:
    func_800F6630(1);
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto L8e0;
    func_800F8F74(0x1B87);
    func_800F8F74(0x1B88);
    func_80131294();
L8e0:
    func_800F6630();
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        goto Lf3f8;
    func_800F6564(0x1B81);
    func_800F824C(0x43);
    for (;;) {
        func_800F6630(0x43);
        func_800F61E8();
        func_800F5574(3);
        if (func_800F53D4() == 0)
            goto L940;
        func_800F971C();
    L940:
        func_801224D0();
        func_800F6B68(0x1B7E);
        if (func_800F6434(0x80) != 0)
            continue;
        break;
    }
    func_800F9200();
    func_800F6630(0x43);
    func_800F8188(0x1B81);
    func_800F93DC();
    func_8012F9A0();
    goto Lf3f8;
}
