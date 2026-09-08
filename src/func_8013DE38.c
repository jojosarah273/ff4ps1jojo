#include "common.h"
extern u8 *D_8019ED50;
extern u8 *D_8019ED68;
void func_8013DE38(void)
{
    func_800F9330();
    func_800F6564(0x6CC0);
    if (func_800F6434(2) != 0)
        goto L3DFC0;
    func_800F6630(1);
    func_800F5410();
    func_800F4008(0xF);
    if (*D_8019ED50 != 0)
        goto L3DEB8;
    /* branch-skip: v1 = *D_8019ED68 | 2 (dead) */
L3DEB8:
    if (func_800F53FC() == 0)
        goto L3DF38;
    func_800F5410();
    func_800F3F38(func_800F3C3C());
    if (func_800F53C0() == 0)
        goto L3E0B0;
    goto L3DFA0;
L3DF38:
    func_800F5410();
    func_800F3F38(func_800F3C3C());
    if (func_800F53C0() != 0)
        goto L3E0B0;
L3DFA0:
    goto L3E0D0;
L3DFC0:
    func_800F6630(1);
    if (func_800F6434(0x8080) != 0)
        goto L3E048;
    func_800F5410();
    func_800F3F38(func_800F3C3C());
    if (func_800F53C0() != 0)
        goto L3E0D0;
    goto L3E0B0;
L3E048:
    func_800F5410();
    func_800F3F38(func_800F3C3C());
    if (func_800F53C0() == 0)
        goto L3E0D0;
L3E0B0:
    func_800F654C(0xF0);
    func_800F8960(0x340);
    func_800F8960(0x341);
    goto L3E1C8;
L3E0D0:
    func_800F8960(0x340);
    func_800F6630(2);
    func_800F5410();
    func_800F3F38(func_800F3C3C(3));
    func_800F8960(0x341);
    func_800F6630(4);
    func_800F4248(0x60);
    func_800F6C68();
    func_800F8960(0x342);
    func_800F6C68();
    func_800F5ECC(func_800F3C3C(5));
    func_800F9200();
    func_800F6564(0x6CC0);
    if (func_800F6434(2) != 0)
        goto L3E1B8;
    func_800F93DC();
    func_800F9200();
L3E1B8:
    func_800F93DC();
    func_800F8960(0x343);
L3E1C8:
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    func_800F95A0();
    return;
}
