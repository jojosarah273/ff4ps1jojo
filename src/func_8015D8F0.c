#include "common.h"
void func_8015D8F0(void)
{
    /* options rows: 0xA6/0x2005/0x29EB cells, 0xD2 window;
       gates 4120(0x202)/6434(0x80). */
    func_800F7270(0xA6);
    func_800F6B68(0x2005);
    func_800F4248(2);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F6B68(0x2006);
    if (func_800F6434(0x80) != 0)
        return;
    func_800F7270(0xA6);
    func_800F6B68(0x2003);
    func_800F8768();
    func_800F6630(0xD2);
    func_800F5140();
    func_800F90EC(0x29EB);
    return;
}
