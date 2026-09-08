#include "common.h"
void func_801684AC(void)
{
    /* config status text screen: 0x4219/0x421B choose header, 0x38D9 the
       detail row; 80168400/80168474/8016838C draw the option rows. */
    func_800F65C8(0x4219);
    func_800F3B9C();
    func_800F78C4();
    func_800F4248(0x10);
    func_800F78C4(func_800F3C3C(0x38));
    func_800F824C(0x38);
    func_800F6564();
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto L168728;
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L168728;
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L168608;
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto L1685C8;
    func_800F6240();
    func_800F6564();
    func_800F5574(0xF);
    if (func_800F53D4() == 0)
        goto L168738;
    func_800F8F74();
    func_800F8F74(0x38D9);
L168590:
    func_800F6564();
    func_800F5574(0xFE);
    if (func_800F53D4() == 0)
        goto L168738;
    func_800F6240();
    func_800F6068();
    goto L168738;
L1685C8:
    func_800F5D24();
    func_800F6564();
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto L168738;
    func_800F8F74();
    func_800F6240(0x38D9);
    goto L168590;
L168608:
    func_800F6564(0x38D9);
    if (func_800F6434(0x202) != 0)
        goto L1686A8;
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L168650;
    func_800F654C(0xFE);
    func_800F8188();
    goto L168680;
L168650:
    func_800F6630(0x38);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto L168728;
    func_80168400();
    func_8016838C();
L168680:
    func_800F654C(1);
    func_800F8188();
    func_800F654C(0xF);
    func_800F8188();
    goto L168738;
L1686A8:
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L1686D8;
    func_800F654C(0xFE);
    func_800F8188();
    goto L1686F8;
L1686D8:
    func_800F6630(0x38);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto L168738;
L1686F8:
    func_80168474();
    func_8016838C();
    func_800F654C(2);
    func_800F8188();
    func_800F654C(4);
    func_800F8188();
    goto L168738;
L168728:
    func_800F5410();
    goto L168740;
L168738:
    func_800F5480();
L168740:
    return;
}
