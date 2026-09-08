#include "common.h"
void func_80168E30(void)
{
    /* shop rows: 3C3C/3B04(0x4000)/3B9C gates + 8011EB9C row;
       v1/v0 gate closes. */
    func_800F3C3C();
    func_800F3B04(0x4000);
    func_800F3B9C();
    func_800F9298();
    func_800F71DC(0x37);
    func_800F9330();
    func_800F94B8();
    func_8011EB9C();
    func_800F94B8();
    /* v1/v0 gate -> L168ED8 */
    return;
}
