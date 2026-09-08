#include "common.h"
void func_80122A9C(void)
{
    /* config rows: 8012281C/80120E2C/8011EF30/80120F1C/8011FB74
       rows, 0x1A02 text, 0x24 window; gate 6434(0x202). */
    func_8012281C();
    func_80120E2C();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011EF30();
    func_80120F1C();
    func_800F7500();
    func_8011FB74();
    func_800F6564(0x1A02);
    if (func_800F6434(0x202) != 0)
        return;
    func_800F654C(0x24);
    func_800F8188();
    func_800F8188();
    func_800F8188();
    func_800F8188();
    func_800F8188();
    return;
}
