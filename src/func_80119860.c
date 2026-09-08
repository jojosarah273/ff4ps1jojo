#include "common.h"
void func_80119860(void)
{
    /* battle rows: 0xB2 window, 80108330/80107C98/80105DB4/
       80107F3C/80109A28 rows, 0x9D5 text; 6434(2) gate via
       801175C4/8011EA5C. */
    func_80117594();
    func_800F824C(0xB2);
    func_80108330();
    func_80107C98();
    func_80105DB4();
    func_80107F3C();
    func_800FE7B0();
    func_80109A28();
    func_800F6630(0xDB);
    if (func_800F6434(2) != 0)
        return;
    func_801175C4();
    func_800F6364();
    func_800F8D00(0x9D5);
    func_8011EA5C();
    return;
}
