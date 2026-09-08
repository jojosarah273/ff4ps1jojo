#include "common.h"
void func_801395E4(void)
{
    /* ability rows: 0x1BB0/0x1BB1 texts, 0x5B/0x5A windows,
       8011F724/80176BFC rows; gates 6434(2). */
    func_800F6564(0x1BB0);
    func_800F5410();
    func_800F4008(0x1D);
    func_800F824C(0x5B);
    func_800F6564(0x1BB1);
    if (func_800F6434(2) != 0)
        goto L13964C;
    func_800F654C(0x78);
    goto L139654;
L13964C:
    func_800F654C(8);
L139654:
    func_800F824C(0x5A);
    func_800F7270(0x5A);
    func_800F7500(0x300);
    func_800F971C();
    func_8011F724();
    func_80176BFC();
    return;
}
