#include "common.h"
void func_8011FF80(void)
{
    /* ability gates: v1/v0 branches route 801360AC / 801360EC+
       80136148 / 8011F320+8011F884+78C4 rows; the 7918(2) read
       loops back to L11FF9C. */
    /* v1/v0 gate (fall-through runs 801360AC) */
    func_801360AC();
L11FF9C:
    /* v1/v0 gate (fall-through runs the 360EC row path) */
    func_801360EC();
    func_80136148();
    func_800F9448();
    func_800F960C();
    func_800F95A0();
    func_800F93DC();
    return;
L11FFF0:
    func_8011F320();
    func_8011F884();
    func_800F6630();
    func_800F78C4(func_800F3C3C(1));
    if (func_800F7918(2) != 0)
        goto L11FF9C;
    func_800F9448();
    func_800F960C();
    func_800F95A0();
    func_800F93DC();
    /* v1/v0 gate (fall-through runs 80136148) */
    func_80136148();
    return;
}
