#include "common.h"
void func_80173ED8(void)
{
    /* shop stat block (called by the 801721E8/80171F90 family): 0x15
       window + 3B04 statue reads; the a3/t1 register gates choose
       among the stat display modes (all routes end at L174324 with
       9448). The heavy content lives in the register-selected blocks
       (80174F0C row + 3C3C/3B04/3B9C reads); the C below documents
       the guaranteed tail. */
    func_800F3C3C();
    func_800F3B04();
    func_800F3B04();
    func_800F3B9C();
    func_800F926C();
    func_800F654C(0x15);
    func_800F9200();
    func_800F9448();
    /* a3/t1 + v0 gates -> L173F64 / L174030 / L1740DC / L17417C
       mode branches */
    func_80174F0C();
    /* v0 gates -> L17420C / L174284 modes */
    func_800F9448();
    return;
}
