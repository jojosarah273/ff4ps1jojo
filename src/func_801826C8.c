#include "common.h"
void func_801826C8(void)
{
    /* battle anim: 80197208 spin loops (L1827A8/L1828F4/L182A20)
       gated by v1/v0 + a0/v0 latches; returns at L182AC0. */
    /* v0 gate -> L1827A8 loop / L182844 */
    for (;;) {
        func_80197208();
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    /* v1/v0 gate -> L1829CC / L182ABC */
    for (;;) {
        func_80197208();
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    /* L1829F8 branch -> L182A20 loop */
    for (;;) {
        func_80197208();
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    return;
}
