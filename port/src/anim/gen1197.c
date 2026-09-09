/* FF4 source-port — interpreted module for func_801779E4.
 * Ground truth: src/func_801779E4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801779E4(void)
{
    /* battle substate router. Early v1/v0 gates select 80184AF8 variants;
       the main chunk then dispatches to 80183A80 / 80185380 / (80183244 |
       80183F40) depending on register gates, all converging on 8017E794. */
    draw_pad(0x2030);
    row_info(0x86);
    draw_pad_cur();
    cb_slot15();
    event_spin_wait();
    /* v1/v0 gates -> L77A9C / L77AB8 */
    func_80184AF8();
L77acc:
    func_80194988();
    func_8017841C();
    status_table_init();
    func_80106CD4();
    func_800FEF7C();
    /* L77B2C/L77B88 gates converge into the main chunk */
    func_80185AC8();
    func_801949F8();
    func_8017794C();
    func_80177790();
    func_801947B8();
    func_8017D078();
    func_8017E220();
    func_80182CB4();
    func_8017E740();
    func_80178D00();
    /* L77BC8 (v1==v0) runs 80183A80; L77CB0 (v1!=v0) picks 80183244 or
       80183F40 (L77D0C/D20/D44 gates) or 80185380 (L77D6C). The register
       gates are not yet reconstructed: all routes merge at L77D54. */
    func_8017E794();
    return;
}
