#include "common.h"
void func_80146A44(void)
{
    /* battle magic-cast flow. v0 cascades select the spell-target category;
       a0=1/2/8/3 delay-consts are the target-type ids for each route. */
    func_800F3C3C();
    func_800F3B04(0x2000);
    func_800F3B04();
    func_800F3B04();
    if (func_800F3B9C() == 0)
        goto L46B28;
    func_80146954();
    goto L46B58;
L46B28:
    func_80146954();
L46B58:
    /* v1/v0 gates -> L46BF8 / L46FD4 */
    func_80146980();
    if (func_800F53C0() == 0)
        goto L46FD4;
    goto L46FD4;
L46C34:
    if (func_80145EA4() != 0)
        goto L46C70;
L46C70:
    /* v0 gates -> L46CC4 / L46F30 */
L46CC4:
    /* v0 gate -> L46CF0 / L46F30 */
    func_80146028();
L46D1C:
    func_8013F49C();
    goto L46ED4;
L46D60:
    /* target-category cascade:
       v0->L46DDC | 1->L46ECC | 2->L46ECC | 8->L46ECC | ->L46DEC */
L46DEC:
    /* v0 gates -> L46E14 / L46ED4 */
L46E14:
    /* v0 gate -> L46E38 / L46ED4 */
    func_80147020();
    goto L46ED4;
L46EB0:
    /* v0 gate -> L46ED4 */
L46ECC:
L46ED4:
    if (func_800F53C0() == 0)
        goto L46F10;
    func_801462DC();
    goto L46F30;
L46F10:
    func_8014654C();
L46F30:
    func_801470F8();
    func_801460A4();
    func_80146980();
    if (func_800F53C0() == 0)
        goto L46F90;
L46F90:
    /* v0/v1/a0 gates -> L46FD4 */
L46FD4:
    return;
}
