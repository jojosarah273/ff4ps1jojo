#include "common.h"
void func_801130C0(void)
{
    /* battle rows: 0x2C window, 0x60 key + 0x2115 gate; loop
       L113140 on 5958(0x10) with 4x 6C68. */
    func_800F6630(0x2C);
    func_800F5574(0x60);
    if (func_800F53D4() == 0)
        return;
    func_800F8F74(0x2115);
    func_800F654C();
L113140:
    for (;;) {
        /* v1/v0 + v0 gates -> L1131D4 / L1131EC / L113224 / L113258 */
        func_800F6C68();
        func_800F6C68();
        func_800F6C68();
        func_800F6C68();
        func_800F5958(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
