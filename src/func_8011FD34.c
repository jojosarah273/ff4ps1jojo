#include "common.h"
void func_8011FD34(void)
{
    /* config dialog: 6434(2)/5574(1) gates; 801245B4 + 885C/3D48
       cell rows; loops L11FD3C (regcmp latch) and L11FE24
       (3F94(3C3C(0x29)) refresh). */
L11fd3c:
    for (;;) {
        /* v0/v1 latch -> L11FD70 / L11FD84 */
        if (func_800F6434(2) != 0)
            goto L11FE04;
        func_800F63BC();
        func_800F5574(1);
        if (func_800F53D4() != 0)
            goto L11FE24;
        func_801245B4();
        func_800F885C();
        func_800F3D48();
        func_800F885C();
        goto L11FF18;
    L11FE04:
        func_800F95A0();
        func_800F94B8();
        func_800F9448();
        return;
    L11FE24:
        func_800F9644(0x20);
        /* v0/v1 latch -> L11FE88 / L11FEC0 */
        func_800F5410();
        func_800F3F94(func_800F3C3C(0x29));
        func_800F9660(0x20);
    L11FF18:
        /* loop back to L11FD3C */
        continue;
    }
    return;
}
