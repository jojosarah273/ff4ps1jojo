#include "common.h"
void func_8019087C(void)
{
    /* event: 801928E8 gates; 80191620/8018F0C8/80190FD8 rows,
       80192C4C + 80190098 loops; v1/a3 regcmp latches close. */
    if (func_801928E8() != 0)
        goto L190948;
    goto L1909B4;
L190948:
    func_80191620();
    func_8018F0C8();
    func_80190FD8();
L1909B4:
    if (func_80192C4C() != 0) {
        /* L1909E4 loop with 80190098 */
        func_80190098();
    }
    return;
L1909F8:
    return;
}
