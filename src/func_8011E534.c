#include "common.h"
void func_8011E534(void)
{
    func_800F824C(0x3D);
    func_800F8FB8(0x3E);
    func_800F654C(0x17);
    func_800F824C(6);
    func_800F6564(0xFE5);
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        goto Le594;
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto Le59c;
Le594:
    func_800F62BC(0x3E);
Le59c:
    func_800F4F28(func_800F3C3C(0x3D));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0x3D);
    func_800F6C68();
    func_800F824C(0x3E);
    if (func_800F6434(0x8080) == 0) {
        func_800F62BC(6);
        func_800F4248(0x7F);
        func_800F824C(0x3E);
    }
    func_800F6C68();
    func_800F824C(0x40);
    func_800F6C68();
    func_800F4248(0x7F);
    func_800F824C(0x41);
    func_800F7270(0x3D);
    if (func_800F56AC(func_800F3C3C(0x40)) != 0) {
        func_800F6630(0x41);
        func_800F5410();
        func_800F4008(0x80);
        func_800F824C(0x41);
    }
    func_800F6564(0xFE5);
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        goto Le6cc;
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto Le6d4;
Le6cc:
    func_800F62BC(6);
Le6d4:
    func_800F6630(0x40);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0x3D));
    func_800F824C(0x40);
    func_800F6630(0x41);
    func_800F7F48(func_800F3C3C(0x3E));
    func_800F824C(0x41);
    func_800F7594(0x3D);
    func_800F71DC();
    func_800F6630(6);
    func_800F9200();
    func_800F9448();
Le744:
    for (;;) {
        func_800F6D70(0x8000);
        func_800F885C();
        func_800F6364();
        if (func_800F56AC(func_800F3C3C(0x40)) != 0)
            goto Le7d0;
        func_800F63BC();
        func_800F5A90(0x8000);
        if (func_800F53D4() == 0)
            goto Le744;
        func_800F7500();
        func_800F62BC(6);
        func_800F6630(6);
        func_800F9200();
        func_800F9448();
    }
Le7d0:
    func_800F654C();
    func_800F9200();
    func_800F9448();
    func_800F71DC();
    func_800F8D6C(0x40);
    func_800F8D6C(0x3D);
Le804:
    for (;;) {
        func_800F6C68();
        if (func_800F6434(0x8080) != 0)
            goto Le938;
        func_800F4248(0x7F);
        func_800F9200();
        func_800F6C68();
        func_800F63BC();
        func_800F93DC();
        func_800F7270(0x40);
    Le864:
        for (;;) {
            func_800F885C();
            func_800F6364();
            func_800F8D6C(0x40);
            func_800F9200();
            func_800F5574(0x20);
            if (func_800F53D4() == 0)
                goto Le8d0;
            func_800F62BC(0x41);
            func_800F8FB8(0x40);
            func_800F7270(0x40);
        Le8d0:
            func_800F93DC();
            func_800F5958(0x2000);
            if (func_800F53D4() != 0)
                return;
            func_800F5EA0();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F7270(0x3D);
        func_800F8D6C(0x3D);
        continue;
    Le938:
        func_800F7270(0x40);
        func_800F885C();
        func_800F6364();
        func_800F8D6C(0x40);
        func_800F5574(0x20);
        if (func_800F53D4() != 0) {
            func_800F8FB8(0x40);
            func_800F62BC(0x41);
        }
        func_800F7270(0x40);
        func_800F5958(0x2000);
        if (func_800F53D4() != 0)
            return;
        func_800F7270(0x3D);
        func_800F6364();
        func_800F8D6C(0x3D);
    }
}
