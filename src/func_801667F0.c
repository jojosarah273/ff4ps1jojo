#include "common.h"
void func_801667F0(void)
{
    /* battle rows: 0x4E window + 6C68/8960/63BC cells; loop
       L166844 on 5A90(0x20). */
    func_800F8FB8(0x4E);
    func_800F971C();
L166844:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x20);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
