#include "common.h"
void func_80100894(void)
{
    /* rows: 4x 65F0 cells + 0x700-0x706 texts via 81B0; linear. */
    func_800F9644(0x20);
    func_800F65F0();
    func_800F65F0();
    func_800F65F0();
    func_800F65F0();
    func_800F81B0(0x700);
    func_800F81B0(0x702);
    func_800F81B0(0x704);
    func_800F81B0(0x706);
    func_800F6558();
    func_800F9660(0x20);
    return;
}
