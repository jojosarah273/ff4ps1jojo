#include "common.h"
void func_8017559C(void)
{
    /* shop buy list: 0x1700 gate picks the 0xD25 cells vs the 0xCF5/
       0xCF7/0xD1D/0xD1F/0xD21/0xCD7/0xCD9/0xCDD/0xCE0 families
       (6CF4/81B0 pairs). */
    func_800F4248(0xFE);
    func_800F6564(0x1700);
    if (func_800F6434(0x202) != 0)
        goto L17560C;
    func_800F9644(0x20);
    func_800F6CF4();
    func_800F81B0(0xD25);
    func_800F6CF4();
    goto L1756C8;
L17560C:
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L1756E8;
    func_800F9644(0x20);
    func_800F6CF4();
    func_800F81B0(0xCF3);
    func_800F6CF4();
    func_800F81B0(0xCF5);
    func_800F6CF4();
    func_800F81B0(0xD1D);
    func_800F6CF4();
    func_800F81B0(0xD1F);
    func_800F6CF4();
    func_800F81B0(0xD21);
    func_800F6CF4();
    func_800F81B0(0xCD7);
    func_800F6CF4();
    func_800F81B0(0xCDD);
    func_800F6CF4();
L1756C8:
    func_800F81B0(0xCDD);
    func_800F6558();
    func_800F9660(0x20);
    return;
L1756E8:
    func_800F9644(0x20);
    func_800F6CF4();
    func_800F81B0(0xCDD);
    func_800F6CF4();
    func_800F81B0(0xCD5);
    func_800F6CF4();
    func_800F81B0(0xCF3);
    func_800F81B0(0xD13);
    func_800F6CF4();
    func_800F81B0(0xCD7);
    func_800F6CF4();
    func_800F81B0(0xD0B);
    func_800F6CF4();
    func_800F81B0(0xD0D);
    func_800F6CF4();
    func_800F81B0(0xD11);
    func_800F6558();
    func_800F9660(0x20);
    return;
}
