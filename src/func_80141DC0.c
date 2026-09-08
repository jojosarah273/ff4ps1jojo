#include "common.h"
void func_80141DC0(void)
{
    /* battle rows: 0x4E window, 80140558 row; loop L141DD0 on
       5574(0x10); closes via 0x38/0x34 codes. */
    func_800F8FB8(0x4E);
L141dd0:
    for (;;) {
        func_80140558();
        func_800F6630(0x4E);
        func_800F4248(4);
        if (func_800F7728(0x202) != 0)
            goto L141E28;
        func_800F654C(0x34);
        goto L141E30;
    L141E28:
        func_800F654C(0x38);
    L141E30:
        func_800F8188();
        func_800F62BC(0x4E);
        func_800F6630(0x4E);
        func_800F5574(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F654C(0x38);
    func_800F8188();
    return;
}
