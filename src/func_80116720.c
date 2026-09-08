#include "common.h"
void func_80116720(void)
{
    func_800F71DC();
    func_800F8D6C(0xB3);
    func_800F6B68(0x9D5);
    func_800F8188(0xA16);
    func_800F5574(0xD0);
    if (func_800F53C0() != 0)
        goto La24;
L764:
    for (;;) {
        func_800F7270(0xB3);
        func_800F6B68(0x9D5);
        func_800F8188(0xA16);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L7e4;
        func_800F5574(0xC0);
        if (func_800F53C0() != 0)
            goto L7bc;
        func_80116DA0();
        goto L7c4;
    L7bc:
        func_801172DC();
    L7c4:
        func_800F7270(0xB3);
        func_800F6364();
        func_800F8D6C(0xB3);
    }
L7e4:
    func_800FE778();
    func_800F8FB8(0xD5);
    func_800FE870();
    func_80102C30();
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto L8ac;
    func_80102770();
    func_800FF024();
    func_800F6630(0xAC);
    func_800F6630(0x7B);
    if (func_800F4120(0x202) != 0)
        goto L7e4;
    func_800F8FB8(0xAB);
    goto La0c;
L8ac:
    func_800F3C3C();
    func_80102770();
    func_8010C368();
    func_80170C14();
    func_8010B010();
    func_800F6630(0xAB);
    if (func_800F6434(2) != 0)
        goto L968;
    func_800F6630(0xAC);
    func_800F6630(0x7B);
    if (func_800F4120(0x202) != 0)
        goto L7e4;
    func_800F8FB8(0xAB);
L968:
    func_800F71DC();
    func_800F8D6C(0x3D);
    func_800F6564(0x8FE);
    if (func_800F6434(2) != 0)
        goto La0c;
L9ac:
    for (;;) {
        func_800F7270(0x3D);
        func_800F6B68(0x908);
        if (func_800F6434(0x202) != 0)
            goto L7e4;
        func_800F90EC(0x90C);
        func_800F6630(0x3D);
        func_800F5410();
        func_800F4008(0xF);
        func_800F824C(0x3D);
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
La0c:
    func_800F654C(1);
    func_800F824C(0xD5);
    return;
La24:
    func_800F5480();
    func_800F8058(0xD0);
    func_800F8FB8(0x3E);
    func_800F5140();
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F824C(0x3D);
    func_800F7270(0x3D);
    func_800F7270(0xB3);
    /* jr $a0 : the ~50-entry main-battle-command jump table. Each entry calls
       one handler then jumps to return. Handlers: 80119BDC, 80119C24,
       80119D48, 80119DE4, 80117660, 80119E7C, 80119A98, 80117E9C, 80117754,
       80117628, 80118A40, 80119020, 801193F8, 801192F8, 80118B80, 80118D20,
       80118EC0, 80118EF8, 80118AA8, 801190A8, 80119128, 801191B0, 80119210,
       80117FA8, 80118534, 80119740, 8011770C, 8011777C, 80117698, 8011ACAC,
       8011AC64, 8011AD14, 8011AD5C, 8011ADEC, 8011AE1C, 8011AE4C, 8011AE7C,
       8011ADA4, 801198F0, 80119860, 80118750, 80117F10, 80117F78, 800F9C90,
       8010DA88, 8011A690 ... */
    return;
}
