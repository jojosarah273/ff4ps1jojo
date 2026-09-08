#include "common.h"
void func_8010C1AC(void)
{
    /* battle rows: 3B9C(0xEDB)/3B04/3C3C gates then 9330; 95A0
       close. */
    func_800F3B9C();
    func_800F3B04(0xEDB);
    func_800F3C3C();
    func_800F9330();
    /* v0 gates -> L10C338 / L10C348 */
    func_800F95A0();
    return;
}
