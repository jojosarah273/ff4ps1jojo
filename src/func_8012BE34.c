#include "common.h"
void func_8012BE34(void)
{
    /* item/equip sub-screen: 0x1B3E/0x1B22 texts, 0x70/0x8/0xE8/0x5D
       windows; 8012D194 cursor gate and 801224D0 detail; loops at
       L2BE3C/L2BEFC/L2BF64 and the L2BECC option ring. */
L2be3c:
    for (;;) {
        if (func_8012D194() == 0)
            goto L2BE94;
        func_800F6564(0x1B3E);
        func_800F61E8();
        func_800F5574(5);
        if (func_800F53D4() == 0)
            goto L2BE84;
        func_800F654C();
    L2BE84:
        func_800F8188(0x1B3E);
    }
L2BE94:
    func_800F6564(0x1B22);
    if (func_800F6434(0x202) != 0)
        goto L2BEBC;
    func_800F654C(0x70);
    goto L2BEC4;
L2BEBC:
    func_800F654C(8);
L2BEC4:
    func_800F824C(0x5D);
L2becc:
    for (;;) {
        func_8011F684();
        func_8011F884();
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L2BF44;
    L2befc:
        for (;;) {
            func_800F6564(0x1B3E);
            func_800F5CCC();
            if (func_800F5B8C() != 0)
                goto L2BF24;
            func_800F654C(4);
        L2BF24:
            func_800F8188(0x1B3E);
            if (func_8012D194() != 0)
                continue;
            goto L2BF44;
        }
    L2BF44:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto L2BFB4;
    L2bf64:
        for (;;) {
            func_800F6564(0x1B3E);
            func_800F61E8();
            func_800F5574(5);
            if (func_800F53C0() == 0)
                goto L2BF94;
            func_800F654C();
        L2BF94:
            func_800F8188(0x1B3E);
            if (func_8012D194() != 0)
                continue;
            break;
        }
    L2BFB4:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L2C000;
        func_800F6564(0x1B3E);
        func_801224D0();
        func_800F6C68();
        func_800F824C(0xE8);
        goto L2C098;
    L2C000:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) == 0)
            goto L2C088;
        func_800F6564(0x1B3E);
        func_800F5140();
        func_800F4F4C();
        func_800F4008(0x40);
        func_800F824C(0x5E);
        func_800F654C();
        func_800F7270(0x5D);
        func_800F7500(0x300);
        func_8011F724();
        continue;
    L2C088:
        func_800F654C(0xFF);
        func_800F824C(0xE8);
        break;
    }
L2C098:
    return;
}
