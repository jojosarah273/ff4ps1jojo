#include "common.h"
void func_80196620(void)
{
    /* event: 80192C74 gate tree; 80196EF0 row; 80192C74 tail gate
       with 80196A10. */
    func_80192C74();
    /* v1/v0 + v0 gates -> L196680/L1966DC/L196728 */
    func_80196EF0();
L196728:
    if (func_80192C74() != 0)
        goto L19674C;
    func_80196A10();
    return;
L19674C:
    return;
}
