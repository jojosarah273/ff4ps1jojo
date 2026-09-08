#include "common.h"
void func_80178988(void)
{
    /* anim/event: 8018F068 x2 preps, 8018F708 spin; loop L1789EC
       with 80191878/80192478 rows and 801928E8/80192614 gates. */
    func_8018F068();
    func_8018F068();
L1789d8:
    for (;;) {
        if (func_8018F708() != 0)
            continue;
        break;
    }
L1789ec:
    for (;;) {
        func_80191878();
        func_80192478();
        /* gates -> L178A1C / L178A28 */
        func_801928E8();
        if (func_80192614() != 0)
            continue;
        break;
    }
    return;
}
