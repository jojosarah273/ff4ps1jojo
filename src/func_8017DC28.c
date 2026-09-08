#include "common.h"
void func_8017DC28(void)
{
    /* battle anim dispatch (twin): a0/v0 + v0 gates route
       8017D7D8 / 8017DD08 / 8017D980 / 8017DF20 rows. */
    if (func_800F53D4() != 0)
        goto L17DC8C;
    func_8017D7D8();
    return;
L17DC8C:
    func_8017DD08();
    return;
L17DCBC:
    func_8017DD08();
    return;
L17DCD4:
    func_8017D980();
    return;
L17DCEC:
    func_8017DF20();
    return;
}
