/* FF4 source-port — interpreted module for func_80119860.
 * Ground truth: src/func_80119860.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80119860(void)
{
    /* battle rows: 0xB2 window, 80108330/80107C98/80105DB4/
       80107F3C/80109A28 rows, 0x9D5 text; 6434(2) gate via
       801175C4/8011EA5C. */
    func_80117594();
    cell_put(0xB2);
    func_80108330();
    func_80107C98();
    func_80105DB4();
    func_80107F3C();
    wnd_fx_7d_b();
    func_80109A28();
    row_page(0xDB);
    if (gate(2) != 0)
        return;
    func_801175C4();
    cell_step();
    label(0x9D5);
    func_8011EA5C();
    return;
}
