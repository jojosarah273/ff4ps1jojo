#include "common.h"
void func_801847D8(void)
{
    /* battle anim loop: 5x 801970A8 pre-roll, L1848B0 loop (854A0/
       97288 reads), L184950 loop (85540/97288 rows), tail 972B8
       latches. */
    func_801970A8();
    func_801970A8();
    func_801970A8();
    func_801970A8();
    func_801970A8();
    func_80197288();
L1848b0:
    for (;;) {
        if (func_801854A0() != 0)
            goto L1848F8;
        func_80197288();
        goto L184910;
    L1848F8:
        func_80197288();
        func_80197288();
    L18490C:
    L184910:
        if (func_80197288() != 0)
            continue;
        break;
    }
    func_801972B8();
L184950:
    for (;;) {
        func_80185540();
        func_80185540();
        func_80197288();
        func_80197288();
        if (func_80197288() != 0)
            continue;
        break;
    }
    func_80197288();
    func_801972B8();
    func_80197288();
    func_801854A0();
    func_80197288();
    func_801854A0();
    func_801854A0();
    func_80197288();
    func_80197288();
    func_80197288();
    func_801972B8();
    func_801972B8();
    func_801972B8();
    return;
}
