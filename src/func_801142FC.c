#include "common.h"
void func_801142FC(void)
{
    /* battle skills list: 0x65/0x11D/0x5/0x80/0x89/0xAD windows,
       0x1706/0x1707 headers; 801146F0/80114680/801144B4/80114618
       rows; 4 loops (L11432C/L114384/L1143DC/L114424). */
    func_800F654C(0x65);
    func_800F8188(0x1706);
    func_800F654C();
    func_800F8188(0x1707);
    func_801146F0();
L11432c:
    for (;;) {
        func_800FE778();
        func_80114680();
        func_800F654C(8);
        func_800F824C(5);
        func_801144B4();
        func_800F6630(0x80);
        func_800F5574(0xF);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F71DC(0x110);
    func_800F8D6C(0x89);
L114384:
    for (;;) {
        func_800FE778();
        func_800F654C(8);
        func_800F824C(5);
        func_801144B4();
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F71DC(0x40);
    func_800F8D6C(0x89);
L1143dc:
    for (;;) {
        func_800FE778();
        func_800F8FB8(5);
        func_801144B4();
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800FD6E8();
L114424:
    for (;;) {
        func_800FE778();
        func_800F8FB8(5);
        func_80114618();
        func_800F6630(0x80);
        func_800F5410();
        func_800F4008(0x10);
        func_800F824C(0xAD);
        func_801144B4();
        func_800F6630(0x80);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(3);
    func_800F8188(0x1700);
    func_800F8FB8(0xAC);
    func_800F8F74(0x1704);
    func_8011EA5C();
    return;
}
