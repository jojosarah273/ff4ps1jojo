#include "common.h"
void func_80186120(void)
{
    /* battle FSM: v0/t0+v0/a3+v0/a2+v0/a1 regcmp ladder (L186148);
       v1/v0 gate routes 801875AC row (L1861A8) or the 80188240/
       801881AC pair (L186230, with v0/s0 latches); wide tail gate
       tree to L186800. */
    /* v1/v0 gate -> L1861A8 / L1861E0 */
    if (func_800F53D4() == 0)
        goto L1861E0;
    func_801875AC();
    goto L186800;
L1861E0:
    /* s0/v0 latch -> L1862C0; v1/v0 gate -> L18624C */
    if (func_800F53D4() == 0)
        goto L18624C;
    func_80188240();
    /* v0/s0 + v1/v0 latches -> L186230 */
    func_801881AC();
L186230:
    goto L186800;
L18624C:
    /* v1/v0 gate tree -> L186280/L186274/L1863D4 */
    goto L186800;
L186800:
    return;
}
