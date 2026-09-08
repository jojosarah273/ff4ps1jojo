#include "common.h"
void func_80163D68(void)
{
    /* options dialog: 0xE5/0x33C4/0x38ED/0x3584 texts, 80152224/
       8015240C/80153098; loop L163E1C polls 6434(0x514)/4120(0x202)
       gates; 0xDF/0xE1/0xE3/0xA9 windows. */
    func_800F654C(0xE5);
    func_800F8188(0x33C4);
    func_800F6240(0x38ED);
    func_800F6240(0x3584);
    func_800F971C();
    func_800F654C(9);
    func_80152224();
    func_800F6C68();
    func_800F9200();
    func_800F4248(0x7F);
    func_800F8188(0x26D2);
    func_800F8188(0x33C5);
    func_800F93DC();
    if (func_800F6434() != 0)
        goto L163F38;
L163e1c:
    for (;;) {
        func_800F71DC(5);
        func_800F654C(0xC);
        func_80152224();
        func_800F8EBC(0xA9);
        func_800F6D70(0x3540);
        if (func_800F6434(0x202) != 0)
            continue;
        func_800F824C(0xDF);
        func_800F654C(0x80);
        func_800F824C(0xE1);
        func_8015240C();
        func_800F7270(0xE3);
        func_800F6B68(0x2003);
        func_800F4248(0xC0);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F5480();
        func_800F6630(0xA9);
        func_800F8058(5);
        func_800F824C(0xCE);
        func_800F971C();
        func_80153098();
        goto L163F50;
    }
L163F38:
    func_800F654C(0x80);
    func_800F824C(0xCE);
    func_800F654C(0xFF);
    goto L163F50;
L163F50:
    func_800F8188(0x26D3);
    return;
}
