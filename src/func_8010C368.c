#include "common.h"
void func_8010C368(void)
{
    /* key-dialog flow for a status submenu. 9200/93DC pairs are the
       wait/read-input helpers; the v0 gates route confirm vs cancel tails;
       the L10CA28 latch loops back to L10C3AC while v1 != v0. */
    func_800F3C3C();
    if (func_800F3B04(0x8FE) == 0)
        return;
L10c3ac:
    for (;;) {
        /* v0 gates -> L10C494 / L10C98C routes */
        /* L10C494 (cancel route): gates -> L10C8E8 / L10C544 */
        func_800F9200();
        func_800F93DC();
        /* both routes converge here */
    L10C8E8:
        /* v0 gates -> L10C924 / L10C930 */
    L10C98C:
        /* v0/a0 gates -> L10CA28 */
    L10CA28:
        /* v1/v0 latch -> loop L10C3AC (continue) / L10CA60 (break) */
        continue;
    }
    return;
}
