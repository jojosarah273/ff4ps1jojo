#include "common.h"
void func_801172DC(void)
{
    /* battle item pick: 5574 key ladders on 53C0/53D4 route the item
       rows (0x4/0x5/0x6/0x7 windows), 0x1705/0x1709 texts, 0x1804 save
       row; 8010543C/80104934 sub-screens; exits via the 0x3E/0x40 rows. */
    func_800F5574(0xC4);
    if (func_800F53C0() != 0)
        goto L117394;
    func_800F5480();
    func_800F8058(0xC0);
    func_800F5140();
    func_800F824C(4);
    func_800F824C(5);
    goto L117544;
L117394:
    func_800F8FB8(4);
    func_800F8FB8(5);
    func_800F5574(0xC8);
    if (func_800F53C0() != 0)
        goto L1173DC;
    func_800F5480();
    func_800F8058(0xC4);
    func_800F8188(0x1705);
    goto L117544;
L1173DC:
    func_800F5574(0xC8);
    if (func_800F53D4() == 0)
        goto L11740C;
    func_800F654C(1);
    func_800F824C(0xD3);
    goto L117544;
L11740C:
    func_800F5574(0xC9);
    if (func_800F53D4() == 0)
        goto L117434;
    func_800F8FB8(0xD3);
    goto L117544;
L117434:
    func_800F5574(0xCA);
    if (func_800F53D4() != 0)
        goto L117494;
    func_800F5574(0xCB);
    if (func_800F53D4() != 0)
        goto L117494;
    func_800F5574(0xCC);
    if (func_800F53D4() != 0)
        goto L117494;
    func_800F5574(0xCD);
    if (func_800F53D4() == 0)
        goto L1174AC;
L117494:
    func_800F654C();
    func_800F8188(0x1705);
    goto L11752C;
L1174AC:
    func_800F5574(0xCE);
    if (func_800F53D4() == 0)
        goto L1174F4;
    func_800F6630(0xCF);
    func_800F824C();
    goto L11752C;
L1174F4:
    func_800F6630(0xD8);
    if (func_800F6434(0x202) != 0)
        goto L11751C;
    func_800F654C(1);
    goto L117524;
L11751C:
    func_800F654C();
L117524:
    func_800F824C(0xD8);
L11752C:
    func_800F8FB8(0xAB);
    func_800F8FB8(2);
    func_800F8FB8(3);
L117544:
    func_800F8FB8(0x7B);
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto L11757C;
    func_8010543C();
    return;
L11757C:
    func_80104934();
    return;
}
