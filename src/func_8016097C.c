#include "common.h"
void func_8016097C(void)
{
    /* options banner: 5574(0x3E/0x3F) ladders route the 0x5D/0x2/
       0xF8/0x26D4/0x26D2/0x3584 codes; 80152224 row. */
    func_800F5574(0x3E);
    if (func_800F53C0() == 0)
        goto L160A0C;
    func_800F5574(0x3F);
    if (func_800F53D4() == 0)
        goto L1609C4;
    func_800F654C(0x5D);
    goto L160A2C;
L1609C4:
    func_800F71DC();
    func_800F654C(2);
    func_80152224();
    func_800F9200();
    func_800F654C(0xF8);
    func_800F8188(0x26D4);
    func_800F93DC();
    func_800F5410();
    func_800F4008(0x3E);
L160A0C:
    func_800F5480();
    func_800F8058(0x31);
    func_800F5410();
    func_800F4008(0x4D);
L160A2C:
    func_800F8188(0x26D2);
    func_800F6240(0x3584);
    return;
}
