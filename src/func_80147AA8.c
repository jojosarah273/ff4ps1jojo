#include "common.h"
void func_80147AA8(void)
{
    /* battle rows: 3C3C/3B04(0x2000)x2/3B9C(0xF0) gates; spins
       L147B14/L147B38; 9330 + 80146A44 row; 3B9C/95A0 then the
       80147FA0/801466E0 gated block. */
    func_800F3C3C();
    func_800F3B04(0x2000);
    func_800F3B04();
    func_800F3B9C(0xF0);
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    /* v0 gate -> L147F78 */
    func_800F9330();
    if (func_80146A44() == 0)
        goto L147BD4;
L147BD4:
    /* gate tree L147BE8..L147E94 -> 3B9C */
    func_800F3B9C();
L147EA8:
    func_800F95A0();
    /* gates -> L147F54/L147F68 */
    if (func_80147FA0() == 0)
        goto L147F68;
    if (func_800F53D4() == 0)
        goto L147F68;
L147F54:
    func_801466E0();
    return;
L147F68:
    return;
}
