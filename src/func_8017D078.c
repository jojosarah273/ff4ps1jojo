#include "common.h"
void func_8017D078(void)
{
    /* selection-screen driver. Register gates (a0/a1/a3/v1/s3) are the
       cursor/state comparisons; s3 = selection index. All calls are the
       inventory-family screens: 8017DB7C / 8017A208 / 8017E794 /
       8017DC28 / 8017AAC4 / 801825B8. */
    if (func_8017DB7C() != 0) { } /* regcmp a3/v0, a0/v0 -> L8017D12C */
    func_8017A208();
    goto L7D1D0;
    /* L8017D12C: a3 gate */
    func_801825B8();
    func_8017A208();
    return;
L7D1D0:
    /* v0 gates (0/1) -> converge L7D230 */
    if (func_8017DB7C() == 0)
        goto L7D7A8;
L7D28C:
    for (;;) {
        func_8017A208();
        func_8017E794();
        if (func_8017DB7C() == 0)
            break;
        /* v1/s3 gates -> loop */
    }
    if (func_8017DB7C() == 0)
        goto L7D7A8;
    func_8017A208();
    func_8017E794();
    /* a0/v0 gate: 8017DC28 vs 8017DB7C branch */
    func_8017DC28(1);
    goto L7D444;
    func_8017DB7C();
L7D444:
    /* s5/v1 gate: 8017AAC4 vs 8017A208 branch */
    func_8017AAC4();
    goto L7D4E4;
    func_8017A208();
L7D4E4:
    func_8017E794();
    /* a0/s3 gate -> L7D54C */
L7D54C:
    for (;;) {
        /* s3/v0 + v1/v0 gates -> L7D57C / L7D5E0 */
        func_8017DC28();
        func_8017AAC4();
        goto L7D624;
        func_8017DB7C();
        func_8017A208();
        func_8017E794();
        if (func_8017DB7C() == 0)
            break;
        /* v1/s3 gates -> loop */
    }
L7D624:
    func_8017E794();
    /* v0/v1 gates -> L7D684 */
    if (func_8017DB7C() == 0)
        goto L7D7A8;
L7D6D4:
    for (;;) {
        func_8017A208();
        func_8017E794();
        func_8017E794();
        if (func_8017DB7C() == 0)
            break;
        /* v0/s3 gates -> loop */
    }
    return;
L7D7A8:
    return;
}
