#include "common.h"
void func_8018C858(void)
{
    /* event: s5/v0 latch; 8018A75C(2/1/3) + 80197678 rows; returns
       at L18C988. */
    /* s5/v0 latch -> L18C8A4 */
    func_8018A75C(2);
    func_8018A75C();
    func_8018A75C(1);
    func_8018A75C(3);
    func_80197678();
    if (func_800F53D4() == 0)
        goto L18C988;
    return;
L18C988:
    return;
}
