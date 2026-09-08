#include "common.h"
void func_801094D8(void)
{
    /* shop rows: 0x776/0xDD windows, gates 6434(0x202) route the
       0x6C68 read chains; register latches pick the tails. */
    func_800F7210(0x776);
    func_800F6630(0xDD);
    if (func_800F6434(0x202) != 0)
        goto L109600;
    /* v0/v1 gates -> L109560 / L1096E0 */
    func_800F6C68();
    return;
    /* L109560: gates -> L1095B8 / L1095EC / L1096C8 */
L109600:
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L10967C;
    /* v0 gate -> L10966C */
    func_800F6C68();
    return;
L10967C:
    /* v0 gate -> L1096D8 */
    func_800F6C68();
    return;
}
