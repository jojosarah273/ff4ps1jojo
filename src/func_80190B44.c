#include "common.h"
void func_80190B44(void)
{
    /* event-cmd flow: v0/v1 gates through 8018F0C8/801905FC checks,
       801928E8/80191620/80190FD8/80192C4C/80190098 rows with spin
       loops; returns at L190F28. */
    if (func_8018F0C8() != 0)
        goto L190BA8;
    /* v0 gate -> L190BA8 */
    func_8018F0C8();
    return;
L190BA8:
    if (func_801905FC() == 0)
        goto L190C04;
    goto L190F28;
L190C04:
    /* v1/v0 gates + spin loops L190C24/L190CBC */
    func_801928E8();
L190D58:
    if (func_801928E8() == 0) {
        func_80191620();
        func_8018F0C8();
        func_80190FD8();
    }
    if (func_80192C4C() != 0) {
        /* L190E40: 80190098 loop */
        func_80190098();
    }
    goto L190D58;
    return;
L190F28:
    return;
}
