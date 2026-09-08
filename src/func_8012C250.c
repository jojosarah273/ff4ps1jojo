#include "common.h"
void func_8012C250(void)
{
    /* config rows: 0x1B3C/0x1B3B/0x1440 texts, 0xE8 window,
       8012B168/8011F684/8012219C/8011FF40 rows; gates 5574(3)/
       6434(0x202). */
    func_800F7210(0x1B3C);
    func_800F6564(0x1B3B);
    func_800F8768(0x1440);
    func_800F6048(func_800F3B04());
    func_800F6630(0xE8);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto L12C2D8;
    func_800F6564(0x1B22);
    if (func_800F6434(0x202) != 0)
        goto L12C2D8;
    func_8012B168();
    func_8011F684();
L12C2D8:
    func_8012219C();
    func_8011FF40();
    return;
}
