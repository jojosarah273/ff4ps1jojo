#include "common.h"
void func_801953D8(void)
{
    /* event: 80195668/80195700/80195798/80195648/801957B4 preps;
       v0 gate tree; returns at L19562C. */
    func_80195668();
    func_80195700();
    func_80195798();
    func_80195648();
    if (func_801957B4() == 0)
        goto L19562C;
    /* v0 gates -> L1954F4 / L195534 / L1955D4 */
    goto L19562C;
L19562C:
    return;
}
