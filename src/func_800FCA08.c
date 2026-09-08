#include "common.h"
void func_800FCA08(void)
{
    /* battle item: 0xFD8 text, 0x2115/0x4300-0x4305 cells; gate
       5574(0xE). */
    func_800F6564(0xFD8);
    func_800F5574(0xE);
    if (func_800F53D4() == 0)
        return;
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800FCC84();
    func_800F71DC(0x430);
    func_800F8D00(0x2116);
    func_800F654C(1);
    func_800F8188(0x4300);
    func_800F71DC(0x5800);
    func_800F8D00(0x4302);
    func_800F654C(0x7F);
    func_800F8188(0x4304);
    func_800F71DC(0x100);
    func_800F8D00(0x4305);
    func_800FCCBC();
    return;
}
