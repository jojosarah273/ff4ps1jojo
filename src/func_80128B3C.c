#include "common.h"
void func_80128B3C(void)
{
    /* battle/status: 4x 5520(3B9C()) checks on 0x1BE4 cells; gates ->
       80128C4C/8012821C/80126D48 row block; 53D4 latches. */
    func_800F9644(0x20);
    func_800F6558(0x1BE4);
    if (func_800F5520(func_800F3B9C()) != 0)
        goto L128C24;
    if (func_800F5520(func_800F3B9C()) != 0)
        goto L128C24;
    if (func_800F5520(func_800F3B9C()) != 0)
        goto L128C24;
    if (func_800F5520(func_800F3B9C()) != 0)
        goto L128C24;
    func_800F9660(0x20);
    func_80128C4C();
    func_8012821C();
    func_80126D48();
    func_800F5480();
    return;
L128C24:
    func_800F9660(0x20);
    func_800F5410();
    return;
}
