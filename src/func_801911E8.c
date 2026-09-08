#include "common.h"
void func_801911E8(void)
{
    /* event: 80191620/8018F0C8/80192AF8/80192B28(2) preps; then 3x
       80190B44 (idx 1/1/10/12) with spin loops and the 801905FC
       tail. */
    func_80191620();
    func_8018F0C8();
    func_80192AF8();
    func_80192B28(2);
    /* spin loop L19128C */
    if (func_80190B44(1) == 0)
        goto L19135C;
    func_80190B44(1);
L19135C:
    if (func_80190B44(0xA) == 0)
        goto L1913B8;
    if (func_80190B44(0xC) == 0)
        goto L1913B4;
    func_801905FC();
    /* a0/v1 latch -> L1913B8 */
    return;
L1913B4:
    return;
L1913B8:
    return;
}
