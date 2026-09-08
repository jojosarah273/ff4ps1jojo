#include "common.h"
void func_80102D68(void)
{
    /* battle/menu: 3C3C/3B04 gates; v0 gate tree; returns L102E68. */
    func_800F3C3C();
    func_800F3B04();
    /* v1/v0 gate -> L102DA8 / L102E08 */
    /* v0 gates -> L102DE0 / L102E0C */
    return;
L102DE0:
    /* v0 gate -> L102DFC / L102E00 */
    goto L102E68;
L102E08:
    return;
L102E68:
    return;
}
