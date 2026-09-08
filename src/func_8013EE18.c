#include "common.h"
void func_8013EE18(void)
{
    /* event: 3C3C/3B04(0x2000)x2 gates (one 0x80); s0/a1+s0/a2
       regcmp loops; 8013F2C4 spin rows; v1/s5+s0/s3 latches. */
    func_800F3C3C();
    func_800F3B04(0x2000);
    func_800F3B04();
    /* s0/a1 + a0/v1 latch loops L13EE68/L13EED0 */
    func_8013F2C4();
    do {
        func_8013F2C4();
    } while (func_800F53D4() == 0);
    return;
}
