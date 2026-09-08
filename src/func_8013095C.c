#include "common.h"
void func_8013095C(void)
{
    /* ability tabs: 0x24 window, 0x130/0x1B0/0x230 consts, 0x1B81
       text, 80130A74 rows, 6434(0x202)/5574(1) gates, 80130A24
       close. */
    func_800F654C(0x24);
    func_800F71DC(0x130);
    func_80130A74();
    func_800F71DC(0x1B0);
    func_80130A74();
    func_800F71DC(0x230);
    func_80130A74();
    func_800F6564(0x1B81);
    if (func_800F6434(0x202) != 0)
        goto L1309C4;
    func_800F71DC(0x130);
    goto L1309F4;
L1309C4:
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L1309EC;
    func_800F71DC(0x1B0);
    goto L1309F4;
L1309EC:
    func_800F71DC(0x230);
L1309F4:
    func_800F654C(0x20);
    func_800F9200();
    func_800F7500(5);
    func_80130A24();
    return;
}
