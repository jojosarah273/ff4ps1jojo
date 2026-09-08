#include "common.h"
void func_8012C42C(void)
{
    /* config rows (twin of 8012C360 with 0xB const): 8012C0A8 prep,
       0x60/0x45 windows. */
    func_8012C0A8();
    /* regcmp v0/v1 -> L12C4E8 */
    func_800F7500(0xB);
    func_800F9644(0x20);
    func_800F6764(0x60);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x45));
    func_800F63BC();
    func_800F63BC();
    func_800F5520(func_800F3A70(0x60));
    func_800F3B04();
    if (func_800F53C0() == 0)
        goto L12C4C8;
    func_800F6764(0x60);
L12C4C8:
    func_800F5EA0();
    func_800F5EA0();
    func_800F8378(0x60);
    func_800F9660(0x20);
    return;
}
