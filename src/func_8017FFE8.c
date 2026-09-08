#include "common.h"
void func_8017FFE8(void)
{
    /* battle anim: v0 spin loops with 2x 80194640; 8017FC50(0xE0/
       0x80) row via v1/v0 gate; 801971A8(1)/8017F9FC tail. */
    /* spin loops L1800A4/L180160/L1801D8 */
    func_80194640();
    func_80194640();
    /* v0/v1 latch -> L18026C; v1/v0 gate -> L1802A0 */
    func_8017FC50(0xE0);
L1802AC:
    func_801971A8(1);
    func_8017F9FC();
    return;
L1802A0:
    func_8017FC50(0x80);
    goto L1802AC;
}
