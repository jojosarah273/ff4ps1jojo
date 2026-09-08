#include "common.h"
void func_8019592C(void)
{
    /* event: v0 gates; 801960BC rows (3/4/5); 80196074 tail. */
    if (func_800F53D4() != 0)
        goto L1959C4;
    if (func_800F53D4() == 0)
        goto L195AC4;
L1959C4:
    if (func_800F53D4() != 0)
        goto L1959EC;
    goto L195AC4;
L1959EC:
    func_801960BC(3);
    func_801960BC(4);
    func_801960BC(5);
    goto L195B34;
L195AC4:
    func_80196074();
    return;
L195B34:
    func_80196074();
    return;
}
