#include "common.h"
void func_8012C584(void)
{
    /* config row: 0x60 window, 0x43/0x3F windows, 8012C2F8 alt +
       801221EC close; 4120(0x202)/53C0 gates. */
    func_800F7500(3);
    func_800F66D8(0x60);
    func_800F4248(0x80);
    if (func_800F4120(0x202) != 0)
        goto L12C5D0;
    func_800F7500();
    func_8012C2F8();
    return;
L12C5D0:
    func_800F7500(0x16);
    func_800F66D8(0x60);
    func_800F824C(0x43);
    func_800F9644(0x20);
    func_800F6658(0x43);
    func_800F516C();
    func_800F5050();
    func_800F3F94(func_800F3C3C(0x43));
    func_800F7500(7);
    func_800F3A70(0x60);
    func_800F5520(func_800F3B04());
    if (func_800F53C0() == 0)
        goto L12C678;
    func_800F8378(0x60);
L12C678:
    func_800F9660(0x20);
    func_800F7500(3);
    func_800F66D8(0x60);
    func_800F4248(0x7F);
    func_800F82EC(0x60);
    func_801221EC();
    return;
}
