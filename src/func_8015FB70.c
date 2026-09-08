#include "common.h"
void func_8015FB70(void)
{
    /* options: 0x38E6/0x29B5 texts, 0x8A window, 8016046C row;
       loop L15FBA4 on 5574(0xFF). */
    func_800F6240(0x38E6);
    func_800F971C();
L15fba4:
    for (;;) {
        func_800F6B68(0x29B5);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L15FBD4;
        func_800F6364();
    }
L15FBD4:
    func_800F8D6C(0x8A);
    func_800F654C(1);
    func_8016046C();
    return;
}
