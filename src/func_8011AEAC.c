#include "common.h"
void func_8011AEAC(void)
{
    /* battle item-select (right-side variant): 62/61 label window, 64/65
       slot rows, BE/BF select rows; 8011B6B4 row draw, 801163E8 use. */
    func_800F8FB8(0x3E);
    func_800F5140();
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x3E));
    func_800F824C(0x3D);
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0x40);
    func_800F6C68();
    func_800F824C(0x41);
    func_800F7270(0x40);
    func_800F5E48();
L11af28:
    for (;;) {
        func_800F6C68();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L11AF58;
        func_800F5E48();
    }
L11AF58:
    func_800F6364();
    func_800F8D00(0xA6B);
    func_800F7270(0x3D);
    func_800F6C68();
    func_800F824C(0xBE);
    func_800F6C68();
    func_800F824C(0xBF);
L11af98:
    for (;;) {
        func_800F7270(0xBE);
        func_800F6C68();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L11B0D4;
        func_800F5574(0xFE);
        if (func_800F53D4() == 0)
            goto L11B028;
        func_800F7270(0xBE);
        func_800F6364();
        func_800F8D6C(0xBE);
        func_800F6C68();
        func_8011B6B4();
        func_800F5574();
        if (func_800F53D4() != 0)
            goto L11B048;
        goto L11B0B4;
    L11B028:
        func_8011B6B4();
        func_800F5574();
        if (func_800F53D4() != 0)
            goto L11B0B4;
    L11B048:
        func_800F7270(0xBE);
    L11b050:
        for (;;) {
            func_800F6364();
            func_800F6C68();
            func_800F5574(0xFF);
            if (func_800F53D4() != 0)
                break;
        }
        func_800F6364();
        func_800F8D6C(0xBE);
        func_800F7270(0xBE);
        if (func_800F56AC(func_800F3B04(0xA6B)) != 0)
            goto L11B0D4;
        continue;
    L11B0B4:
        func_800F7270(0xBE);
        func_800F6364();
        func_800F8D6C(0xBE);
    }
L11B0D4:
    func_800F654C(1);
    func_800F824C(0xB1);
    func_800F8FB8(0xAB);
    func_800F7270(0xBE);
    func_800F6C68();
    if (func_800F6434(2) != 0)
        goto L11B13C;
    func_801163E8();
    if (func_800F53C0() != 0)
        goto L11B148;
L11B13C:
    func_800F8FB8(0xB1);
L11B148:
    return;
}
