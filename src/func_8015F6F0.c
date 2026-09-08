#include "common.h"
void func_8015F6F0(void)
{
    /* options: 0x2/0x28A4/0x28A3 texts, 80152224/800F70BC/
       80065774/80065534 rows; 5C64(0x202) gate. */
    func_800F71DC();
    func_800F654C(2);
    func_80152224();
    if (func_800F70BC(0x202) != 0)
        goto L15F758;
    func_800F654C(0x20);
    func_800F8188(0x28A4);
    func_80065774();
    return;
L15F758:
    func_800F5CCC();
    if (func_800F5B8C(0x202) != 0)
        goto L15F788;
    func_800F654C(4);
    func_800F8188(0x28A3);
    goto L15F798;
L15F788:
    func_800F654C(0x80);
    func_800F8188(0x28A4);
L15F798:
    func_80065534();
    return;
}
