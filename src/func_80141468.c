#include "common.h"
void func_80141468(void)
{
    /* battle rows: gate 6434(0x202); loop L1414E0 on 5A90(6). */
    func_800F6564();
    if (func_800F6434(0x202) != 0) {
        func_800F6564();
    }
    func_800F971C();
L1414e0:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        func_800F6364();
        func_800F63BC();
        func_800F5A90(6);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6240();
    return;
}
