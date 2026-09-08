#include "common.h"
void func_8013BFFC(void)
{
    /* ability rows: 0x1A83 text; loop L13C024 on 6434(2)/53C0 with
       8013C2FC/8013CA70/8013BD04/8013C50C rows. */
    func_800F6564(0x1A83);
    func_800F8F74(0x1A83);
    if (func_800F6434(0x202) != 0)
        goto L13C074;
L13C024:
    for (;;) {
        func_8013C2FC();
        func_800F6630(0x60);
        if (func_800F6434(2) != 0)
            goto L13C064;
        func_8013CA70();
        if (func_800F53C0() != 0)
            continue;
        return;
    L13C064:
        func_8013BD04();
        return;
    }
L13C074:
    func_8013C50C();
    goto L13C024;
}
