#include "common.h"
void func_801876E0(void)
{
    /* battle menu: jr-$a0 dispatch (sub-rows); 80188240 gate runs
       80187924, else 801917F8/80187A10 or 80189B8C/80191878 rows;
       returns at L187910/L187914. */
    /* jr-$a0 sub-table at L1876F4 (doc'd inline) */
    if (func_80188240() != 0)
        goto L187914;
    /* jr-$a0 dispatch -> sub-rows */
    func_801917F8(1);
    func_80187A10();
    goto L187914;
L18786C:
    func_80189B8C();
    goto L187914;
    func_801917F8(1);
    func_80191878(9);
    goto L187914;
    func_801917F8(1);
    func_80187924();
    goto L187910;
L187910:
    return;
L187914:
    return;
}
