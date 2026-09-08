#include "common.h"
void func_80177F3C(void)
{
    /* battle anim: v1/v0 gates; 80194BC4/801949F8 rows, 801942FC
       commits, then 80186810 (deep-pass) + 80179958 via the L178064
       latch. */
    /* v1/v0 gates -> L177F70 / L177F84 / L177FBC / L178044 */
    func_80194BC4();
    func_801949F8();
    /* L178004: 80194BC4/801949F8 row */
    func_80194BC4();
    func_801949F8();
    func_801942FC();
    func_80186810();
    func_80179958();
    return;
}
