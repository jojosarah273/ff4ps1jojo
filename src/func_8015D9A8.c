#include "common.h"
void func_8015D9A8(void)
{
    /* options main: gates on (v1/v0) branches with 8005A234 +
       80152CDC/8016E870; L15DA08 detail loop, L15DBA0/L15DC2C
       refresh loops, 80150C38 icon rows (codes 5/0x10/2/0x11/0xC). */
    func_800F3C3C();
    func_800F3B04();
    func_800F3B04(0x2000);
    if (func_800F3C3C() == 0)
        goto L15DB4C;
    func_8005A234();
L15da08:
    for (;;) {
        if (func_80152CDC() != 0)
            break;
    L15da1c:
        /* v1/v0 gate -> L15DA08 */
        func_80061C8C();
        func_800F654C(5);
        func_80150C38();
        func_80059AF4();
        func_800F654C(0x10);
        func_80150C38();
        func_800F654C(2);
        func_80150C38();
        break;
    }
    return;
L15DB4C:
    func_8005A234();
    func_8016E870();
    /* v1/v0 + v0/v1 gates -> L15DC6C */
    func_8005A234();
L15dba0:
    for (;;) {
        func_800F9330();
        func_800F939C();
        func_800F960C();
        func_800F95A0();
    L15dc2c:
        for (;;) {
            func_800F9644(0x20);
            func_800F971C();
            func_800F9660(0x20);
            if (func_800F3C3C() == 0)
                continue;
            break;
        }
        func_80061C8C();
        func_80059AF4();
        /* s1/v0 gate -> L15DBA0 */
        break;
    }
L15DC6C:
    func_800F654C(0x11);
    func_80150C38();
    func_800F654C(0xC);
    func_80150C38();
    return;
}
