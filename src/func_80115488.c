#include "common.h"
void func_80115488(void)
{
    /* battle rows: 0x79/0xF3/0xF5/0xC/0xE windows, 8011581C/
       80115A34 rows; loop L1154A8 on 5574(4). */
    func_800F8FB8(0x79);
L1154a8:
    for (;;) {
        func_800F6630(0x79);
        func_800F5140();
        func_800F9644(0x20);
        func_800F5410();
        func_800F3F94(func_800F3C3C(0xF3));
        func_800F8274(0xC);
        func_800F5410();
        func_800F3F94(func_800F3C3C(0xF5));
        func_800F8274(0xE);
        func_800F6658(0x79);
        func_800F4264(0xFF);
        func_800F6558();
        func_800F9660(0x20);
        func_8011581C();
        func_800F6630(0xE);
        func_800F5410();
        func_800F4008(0x10);
        func_800F824C(0xE);
        func_80115A34();
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(4);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
