#include "common.h"
void func_801133B0(void)
{
    /* battle rows: 0x60/0xAD4/0xAD5 texts, 8011356C row; loop
       L11340C on 5574(0x10). */
    func_800F654C(0x60);
    func_800F81E8(0xAD4);
    func_800F654C(0x48);
    func_800F8188(0xAD5);
    func_8011356C();
    func_800FE7B0();
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F71DC();
L11340c:
    for (;;) {
        func_800F4248(3);
        if (func_800F4120(0x202) != 0)
            goto L113504;
        func_800F5140();
    L113504:
        func_800F6364();
        func_800F5574(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
