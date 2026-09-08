#include "common.h"
void func_80141C98(void)
{
    /* battle: 3C3C(4)/3A70/3B04 rows; 6EA8 + s1/v1 latch route to
       5410. */
    func_800F3C3C();
    func_800F3A70(4);
    func_800F3B04();
    func_800F6EA8();
    /* s1/v1 latch -> L141D1C / L141D40 */
    func_800F5410();
    return;
}
