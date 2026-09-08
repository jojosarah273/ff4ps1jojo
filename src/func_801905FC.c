#include "common.h"
void func_801905FC(void)
{
    /* event: 801928E8 gates; 80191620/8018F0C8/80190FD8 rows,
       80192C4C + 80190098 loops; a2/s3 + v1/a3 regcmp latches. */
    if (func_801928E8() != 0)
        goto L1906C8;
    goto L190734;
L1906C8:
    func_80191620();
    func_8018F0C8();
    func_80190FD8();
L190734:
    if (func_80192C4C() != 0) {
        func_80190098();
    }
    /* a2/s3 + a2/v0 + v1/a3 latches -> L190844/L19084C */
    return;
L19084C:
    return;
}
