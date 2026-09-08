#include "common.h"
void func_8012CB34(void)
{
    /* config dead-key row: 0x5D window, 0x45/0x29/0x41 cells,
       4264(1)/41E8(2) gates; 4 cell writes on 0x4/0x2/0x40/0x42. */
    func_800F9644(0x20);
    func_800F6658(0x5D);
    func_800F7894();
    func_800F516C();
    func_800F5050();
    func_800F8274(0x45);
    func_800F6658(0x5D);
    func_800F4264(1);
    if (func_800F41E8(2) != 0)
        goto L12CBAC;
    func_800F6558(0x20);
L12CBAC:
    func_800F3F94(func_800F3C3C(0x45));
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F4064(0x4A);
    func_800F9660(0x20);
    func_800F654C(4);
    func_800F8960();
    func_800F61E8();
    func_800F8960(2);
    func_800F61E8();
    func_800F8960(0x40);
    func_800F61E8();
    func_800F8960(0x42);
    return;
}
