#include "common.h"
void func_80187EC4(void)
{
    /* battle: 80188AE8(8) gate; 8018CA18/8018AE28 rows; 8018DCD8
       (0x4000) + 8018DFA0/8018DFC4/8018DFE8/80191858 block;
       8018E4E8 x2 gate; 80188C58(1)/8018F688/801890E4 tail with
       a1/a0 latch; returns at L188194. */
    func_80188AE8(8);
    if (func_800F53D4() != 0)
        return;
    if (func_800F53D4() != 0)
        return;
    if (func_800F53D4() != 0)
        return;
    func_8018CA18();
    func_8018AE28();
    /* v0/v1 latch -> L187F58 */
    func_8018DCD8(0x4000);
    if (func_800F53D4() == 0)
        goto L187FAC;
L187FAC:
    func_8018DFA0();
    func_8018DFC4();
    func_8018DFE8();
    func_80191858();
    if (func_8018E4E8() == 0)
        goto L1880C0;
    func_8018E4E8();
L1880C0:
    func_80188C58(1);
    func_8018F688();
    func_801890E4();
    /* a1/a0 latch -> L18818C */
    return;
}
