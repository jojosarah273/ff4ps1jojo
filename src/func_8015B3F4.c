#include "common.h"
void func_8015B3F4(void)
{
    /* options: 3C3C/3B04(0x2000)/3B04 gates; 8015B6FC rows and the
       regcmp-loop with 80150C38 icon rows. */
    func_800F3C3C();
    func_800F3B04(0x2000);
    if (func_800F3B04() == 0)
        goto L15B474;
    goto L15B48C;
L15B474:
    func_800F3C3C();
    goto L15B48C;
L15B48C:
    /* v0 gates -> L15B4A4 / L15B4C4 */
L15B4C4:
    /* v0 gate -> L15B544 */
    /* a0/s4 latch -> L15B528 */
    func_8015B6FC();
L15B544:
    /* v0 gates */
    func_80150C38();
    /* L15B5AC loop: regcmp latches */
    func_80150C38();
    return;
}
