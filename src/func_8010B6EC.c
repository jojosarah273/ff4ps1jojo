#include "common.h"
void func_8010B6EC(void)
{
    /* stat-refresh/verify driver; loops until the v0==v1 latch at L10C000
       breaks. Register gates decide which stat-rows are recomputed
       (8010C1AC / 8010D9D4 / 8010D34C / 8010D2A0 / 8010D4EC). */
    func_800F3C3C();
    func_800F3B04(0x8FE);
    func_800F3B04(0xEDC);
    func_800F3B9C();
    func_800F6564(0x8FE);
    if (func_800F6434(0x202) == 0)
        return;
L10b7a0:
    for (;;) {
        /* v0 gates -> L10BF70 / L10BE54 / L10B8AC pathways */
        func_8010C1AC();
        func_8010D9D4();
        func_8010D9D4();
        if (func_8010D9D4() != 0)
            goto L10BA5C;
        func_8010C1AC();
        func_8010D34C();
        goto L10BBC4;
    L10BA5C:
        func_8010C1AC();
        func_8010D34C();
        goto L10BBC4;
    L10BAC8:
        if (func_8010D9D4() != 0)
            goto L10BB5C;
        func_8010C1AC();
        func_8010D34C();
        goto L10BBC4;
    L10BB5C:
        func_8010C1AC();
        func_8010D34C();
    L10BBC4:
        func_8010C1AC();
        func_8010D34C();
        func_8010C1AC();
        func_8010D34C();
        goto L10BE54;
        goto L10BF70;
    L10BE54:
        func_8010D2A0();
        func_8010D4EC();
    L10BF70:
        /* v0 gate -> L10C000 (loop latch) */
        /* L10C000: regcmp v0,v1 -> loop back to L10B7A0 when equal,
           else fall out to L10C188 (return) */
        if (func_800F6434(0x202) == 0)
            return;
    }
    return;
}
