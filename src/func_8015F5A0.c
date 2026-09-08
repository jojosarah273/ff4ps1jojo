#include "common.h"
void func_8015F5A0(void)
{
    /* options: 0x3/0x5/0x28A4 texts, 0xA9 window, 80152224 row;
       loop L15F5E8 on 7CC8(3B04(0x28A4))/5C64(0x202); 80065774/
       80065534 gates. */
    func_800F71DC(3);
    func_800F654C(5);
    func_80152224();
    func_800F8188(0xA9);
    func_800F5480();
L15f5e8:
    for (;;) {
        func_800F7CC8(func_800F3B04(0x28A4));
        func_800F7D0C();
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F6564(0xA9);
    func_800F5574(5);
    if (func_800F53D4() != 0)
        goto L15F648;
    func_80065774();
    return;
L15F648:
    func_80065534();
    return;
}
