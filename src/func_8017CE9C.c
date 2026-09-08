#include "common.h"
void func_8017CE9C(void)
{
    /* battle anim: v0 gates; 80195120 + 80197208 spin loop; closes
       with 801971A8/801973B8/80197208. */
    if (func_800F53D4() != 0)
        goto L17CEE0;
L17CEE0:
    /* v0 gates -> L17D054 / L17CF54 */
    func_80195120();
    if (func_800F53D4() != 0)
        goto L17D000;
L17cfd4:
    for (;;) {
        func_80197208();
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L17D000:
    func_801971A8();
    func_801973B8();
    func_80197208();
    return;
L17D054:
    return;
}
