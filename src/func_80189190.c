#include "common.h"
void func_80189190(void)
{
    /* party-menu action dispatcher. s0 = action id; ids with dedicated
       handlers route straight, catalog/generic ids funnel through
       801919B4(id). Register sub-gates (v1/s1, a1/a0, a2/v0) refine the
       generic path. */
    int s0 = 1; /* placeholder: set by caller */
    switch (s0) {
    case 1:
        func_801917F8(1);
        /* v1/s1 gate: 80191818; else skip */
        func_80189678();
        break;
    case 2:
        func_80191878(2);
        break;
    case 3:  /* a0=3 */
    case 8:  /* a0=8 */
    case 9:  /* a0=9 */
    case 21: /* a0=21 */
    case 22: /* a0=22 */
        func_801919B4(s0);
        break;
    case 13: /* a0=13 */
    case 14: /* a0=14 */
    case 16: /* a0=16 */
    case 27: /* a0=27 */
        func_801919B4(s0);
        break;
    default:
        func_80189590(); /* L894E8 */
        break;
    }
    return;
}
