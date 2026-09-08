#include "common.h"
void func_80115BCC(void)
{
    /* battle rows: 0xE5/0xACD/0xACE texts, gates 6434(0x202); loops
       L115C20 (0xDD4/0xDFC cells) and L115C90 (0xA6D/0x40 reads). */
    func_800F8FB8(0xE5);
    func_800F6564(0xACD);
    func_800F71DC();
L115c20:
    for (;;) {
        func_800F6564(0xACE);
        if (func_800F6434(0x202) != 0)
            goto L115C50;
        func_800F6C68();
        func_800F8960(0xDDB);
        goto L115C60;
    L115C50:
        func_800F6C68();
        func_800F8960(0xDFB);
    L115C60:
        func_800F63BC();
        func_800F6364();
        func_800F5958(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F71DC();
L115c90:
    for (;;) {
        func_800F4248(3);
        func_800F8768(0xA6D);
        func_800F5958(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
