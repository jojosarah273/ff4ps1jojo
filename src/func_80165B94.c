#include "common.h"
void func_80165B94(void)
{
    /* shop: 3B04/3C3C(8) gates; s0/a0+s0/s4 latch loops with
       80165C7C rows; 5410 tail. */
    func_800F3B04();
    func_800F3C3C(8);
    /* s0/a0 latch -> L165BD0; s0/s4 latch -> L165BF4 */
    func_80165C7C();
    func_800F5410();
    return;
}
