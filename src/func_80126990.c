#include "common.h"
void func_80126990(void)
{
    /* equip window cells: 0xD2/0xBE gates with the 0x59/0xB9/0xBA rows
       (3F38(3C3C) / 7F48(3C3C) value cells), 0xC0/0xBF/0xBB/0xBC bottom
       row, and the 80124704 commit; early exit when 6434(0x202)==0. */
    func_800F6630(0xD2);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F6630(0xBE);
    if (func_800F6434() != 0)
        goto L126A28;
    func_800F4248(0x7F);
    func_800F824C(0x59);
    func_800F5410();
    func_800F6630(0xBD);
    func_800F3F38(func_800F3C3C(0xB9));
    func_800F824C(0xB9);
    func_800F6630(0xBA);
    func_800F3F38(func_800F3C3C(0x59));
    func_800F824C(0xBA);
    goto L126A70;
L126A28:
    func_800F6630(0xB9);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0xBD));
    func_800F824C(0xB9);
    func_800F6630(0xBA);
    func_800F7F48(func_800F3C3C(0xBE));
    func_800F824C(0xBA);
L126A70:
    func_800F6630(0xC0);
    if (func_800F6434() != 0)
        goto L126AE8;
    func_800F4248(0x7F);
    func_800F824C(0x59);
    func_800F5410();
    func_800F6630(0xBF);
    func_800F3F38(func_800F3C3C(0xBB));
    func_800F824C(0xBB);
    func_800F6630(0xBC);
    func_800F3F38(func_800F3C3C(0x59));
    func_800F824C(0xBC);
    goto L126B30;
L126AE8:
    func_800F6630(0xBB);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0xBF));
    func_800F824C(0xBB);
    func_800F6630(0xBC);
    func_800F7F48(func_800F3C3C(0xC0));
    func_800F824C(0xBC);
L126B30:
    func_800F6630(0xBC);
    func_800F3D48();
    func_800F6630(0xBA);
    func_800F6630(0xD3);
    func_80124704();
    func_800F5DA0(0xD2);
    return;
}
