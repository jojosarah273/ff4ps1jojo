#include "common.h"
void func_80195B5C(void)
{
    /* event: 80196898 gates; 801968CC spin rows (L195C68) + s0
       latches; returns L195D74. */
    func_80196898();
    if (func_800F53D4() == 0)
        goto L195BC4;
    goto L195BC4;
L195BC4:
    /* v0 gates -> L195C04 / L195C00 */
    goto L195D74;
L195C38:
    do {
        func_801968CC();
        if (func_800F53D4() != 0)
            goto L195D74;
    } while (func_800F53D4() != 0);
    /* s0/v0 + s0/a0 latches -> L195D24/L195D08 */
    return;
L195D74:
    return;
}
