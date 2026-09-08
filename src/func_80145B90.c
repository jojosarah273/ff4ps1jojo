#include "common.h"
void func_80145B90(void)
{
    /* battle rows: 0x26/0x28/0x2A windows, 0x1800 text, 80072720 +
       80145C74 rows. */
    func_800F9330();
    func_800F6C68();
    func_800F824C(0x26);
    func_800F654C(0x18);
    func_800F824C(0x28);
    func_80072720();
    func_800F71DC(0x1800);
    func_800F8D00();
    func_800F654C(0x1C);
    func_800F8188();
    func_800F654C(8);
    func_800F8188();
    func_800F8188();
    func_800F9644(0x20);
    func_800F6658(0x2A);
    func_800F5410();
    func_800F4064();
    func_800F81B0();
    func_800F971C();
    func_800F9660(0x20);
    func_80145C74();
    func_800F95A0();
    return;
}
