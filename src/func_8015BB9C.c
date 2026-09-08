#include "common.h"
void func_8015BB9C(void)
{
    /* options: 3C3C/3B04(0x2000)x2 gates; a0 latches; 80152CDC/
       8015310C/8015C54C rows; returns at L15BD1C. */
    func_800F3C3C();
    func_800F3B04(0x2000);
    /* a0/v0 latch chain -> L15BC04/L15BC38 */
    func_80152CDC();
    func_8015310C();
    func_8015C54C();
    /* a0/v1 latch -> L15BD1C */
    return;
}
