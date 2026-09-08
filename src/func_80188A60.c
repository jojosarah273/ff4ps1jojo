#include "common.h"
void func_80188A60(void)
{
    /* event: a0/v0 latch; 801917B8/80191748 rows + 80191878(0xE). */
    /* a0/v0 latch -> L188AD8 */
    func_801917B8();
    func_80191748();
    func_80191878(0xE);
    return;
}
