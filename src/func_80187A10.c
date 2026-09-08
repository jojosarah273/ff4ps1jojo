#include "common.h"
void func_80187A10(void)
{
    /* battle: v1/v0 + v0 gates; 80189B8C(1)/801919B4(6) rows. */
    /* v1/v0 gate -> L187A90 */
    if (func_800F53D4() == 0)
        goto L187A58;
    if (func_800F53D4() != 0)
        goto L187A58;
    func_80189B8C(1);
    func_801919B4(6);
    return;
L187A58:
    func_80189B8C(1);
    func_801919B4(6);
    return;
L187A90:
    return;
}
