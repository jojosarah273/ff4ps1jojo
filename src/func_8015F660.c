#include "common.h"
void func_8015F660(void)
{
    /* options: 0x28A3/0x28A4 texts; 70BC(0x202) gate picks
       80065534/80065774. */
    func_800F71DC();
    func_800F654C(1);
    func_80152224();
    if (func_800F70BC(0x202) != 0)
        goto L15F6C8;
    func_800F654C(0x80);
    func_800F8188(0x28A3);
    func_80065534();
    return;
L15F6C8:
    func_800F654C(0x20);
    func_800F8188(0x28A4);
    func_80065774();
    return;
}
