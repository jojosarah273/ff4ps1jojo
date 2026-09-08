#include "common.h"
void func_80189884(void)
{
    /* event: 8018AE28 + a1/v0 latch + 8018C9B8/8018C7F8 rows. */
    func_8018AE28();
    /* a1/v0 latch -> L189904 */
    func_8018C9B8();
    func_8018C7F8();
    return;
L189904:
    return;
}
