#include "common.h"
void func_801951E0(void)
{
    /* event: 80195668/80195700/80195798/80195648/801957B4 preps;
       gate tree; returns at L1953BC. */
    func_80195668();
    func_80195700();
    func_80195798();
    func_80195648();
    if (func_801957B4() == 0)
        goto L1953BC;
    /* v0 gates -> L1952FC/L19533C */
    goto L1953BC;
L1953BC:
    return;
}
