#include "common.h"
void func_8016D9B0(void)
{
    /* global-stats screen: 0x7D1F gate, 0x4A window, 0x92/0x90 rows
       with 0x2116/0x4352/0x4354/0x4350/0x4351/0x4355 texts; renders
       via 800F9868; alt tail 8016D850. */
    func_800F6564(0x7D1F);
    if (func_800F6434(0x202) != 0)
        goto L16DB20;
    func_800F6630(0x4A);
    func_800F4248(0x1F);
    if (func_800F4120(0x202) != 0)
        goto L16DB20;
    func_800F926C();
    func_800F971C();
    func_800F9200();
    func_800F9448();
    func_800F654C();
    func_800F8188(0x2115);
    func_800F7270(0x92);
    func_800F8D00(0x2116);
    func_800F7270(0x90);
    func_800F8D00(0x4352);
    func_800F654C(0x7E);
    func_800F8188(0x4354);
    func_800F654C();
    func_800F8188(0x4350);
    func_800F654C(0x18);
    func_800F8188(0x4351);
    func_800F71DC(0x80);
    func_800F8D00(0x4355);
    func_800F9868();
    func_800F654C(0x50);
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F9448();
    func_800F9644(0x20);
    func_800F6658(0x90);
    func_800F5410();
    func_800F4064(0x20);
    func_800F4264(0x7FFF);
    func_800F8274(0x90);
    func_800F6658(0x92);
    func_800F5410();
    func_800F4064(0x80);
    func_800F4264(0x3FFF);
    func_800F8274(0x92);
    func_800F971C();
    func_800F9660(0x20);
    return;
L16DB20:
    func_8016D850();
    return;
}
