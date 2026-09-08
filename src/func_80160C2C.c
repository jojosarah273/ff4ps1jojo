#include "common.h"
void func_80160C2C(void)
{
    /* options help: 0x2770 gate, 0x2707/0x2709/0x359A/0x359D texts,
       0x2710/0x2715 gates, 0xA9 window; 8015329C row; loop L160D3C
       (76BC(3C3C(0xA9))/7728(0x101)). */
    func_800F6564(0x2770);
    if (func_800F6434() == 0)
        goto L160DE8;
    func_800F9644(0x20);
    func_800F658C();
    func_800F81B0(0x2707);
    func_800F658C();
    func_800F81B0(0x2709);
    func_800F971C();
    func_800F9660(0x20);
    func_800F8F74(0x359C);
    func_800F8F74(0x359F);
    func_800F6564(0x2720);
    func_800F4280(0x2725);
    func_800F4280(0x2720);
    func_800F4248(0x3F);
    func_800F824C(0xA9);
    if (func_800F4120(0x202) != 0)
        goto L160CFC;
    func_800F654C(0x14);
    func_800F8188(0x34CB);
    goto L160DB0;
L160CFC:
    func_800F971C();
L160d3c:
    for (;;) {
        func_800F76BC(func_800F3C3C(0xA9));
        if (func_800F7728(0x101) != 0)
            goto L160D90;
        func_800F5410();
        func_800F4008(0x15);
        func_800F8768(0x34CB);
        func_800F6364();
    L160D90:
        func_800F63BC();
        func_800F5A90(6);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L160DB0:
    func_8015329C();
    func_800F654C(0x1E);
    func_800F8188(0x34CA);
    func_800F654C(0x14);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    return;
L160DE8:
    return;
}
