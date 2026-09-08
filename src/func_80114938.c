#include "common.h"
void func_80114938(void)
{
    /* battle magic list: 0x2C/0x2E/0x89/0xC/0xE/0xF/0x91/0x92 windows,
       0x2100 title, 80114C98/8011581C/80115A34/8011EA5C rows; the
       L114970 loop polls 5958(0x80)/5958(0x100) and closes on 8FB8(0x80). */
    func_800F71DC(0x70);
    func_800F8D6C(0x2C);
    func_800F71DC(0x78);
    func_800F8D6C(0x2E);
    func_800F71DC(0xD0);
    func_800F8D6C(0x89);
L114970:
    for (;;) {
        func_800FE778();
        func_800F6630(0x2E);
        func_800F5574(0x10);
        if (func_800F53C0() != 0)
            goto L1149A0;
        func_800F8188(0x2100);
    L1149A0:
        func_80114C98();
        func_800F7270(0x2C);
        func_800F8D6C(0xC);
        func_800F6630(0x2E);
        func_800F5480();
        func_800F8058(8);
        func_800F824C(0xE);
        func_800F6630(0x2F);
        func_800F8058();
        func_800F824C(0xF);
        func_800F654C(0x1C);
        func_800F824C(0x91);
        func_800F654C(0xD8);
        func_800F824C(0x8F);
        func_800F7500(0x190);
        func_800F654C(0x60);
        func_800F824C(0x92);
        func_8011581C();
        func_800F7500(0x70);
        func_800F8EBC(0xE);
        func_800F7500(0x150);
        func_80115A34();
        func_800F7500(0x68);
        func_800F8EBC(0xE);
        func_800F7500(0x160);
        func_80115A34();
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
        func_800F5958(0x80);
        if (func_800F53C0() != 0)
            continue;
        func_800F7270(0x2E);
        func_800F5E48();
        func_800F8D6C(0x2E);
        func_800F5958();
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F8FB8(0x80);
    func_8011EA5C();
    return;
}
