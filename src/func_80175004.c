#include "common.h"
void func_80175004(void)
{
    /* shop rows: 0x1700/0x1288 texts, 0x7A/0xCDB/0xCDC windows; 5574
       gates pick the 0x1E/0x7E rows and 0xCDB/0xCDC fills. */
    func_800F6564(0x1700);
    func_800F5574(2);
    if (func_800F53C0() != 0)
        goto L1750CC;
    func_800F5574();
    if (func_800F53D4() == 0)
        goto L175054;
    func_800F71DC(0x1E);
    goto L17505C;
L175054:
    func_800F71DC(0x7E);
L17505C:
    func_800F6564(0x1288);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L1750BC;
    func_800F6630(0x7A);
    func_800F5140();
    func_800F8768(0xCDB);
    func_800F8768(0xCDC);
    return;
L1750BC:
    func_800F90EC(0xCDB);
    func_800F90EC(0xCDC);
    return;
L1750CC:
    return;
}
