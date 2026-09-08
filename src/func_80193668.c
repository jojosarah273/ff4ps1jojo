#include "common.h"
void func_80193668(void)
{
    /* battle anim: v0 gates route 801973B8/80197398/801972D8 rows
       and the 80197358 spin loop L1938A8. */
    if (func_800F53D4() != 0)
        goto L1936C0;
    return;
L1936C0:
    /* gate -> L193704 */
    func_801973B8();
    func_80197398();
    func_801972D8();
    for (;;) {
        func_80197358();
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    return;
}
