#include "common.h"
void func_8015EBE0(void)
{
    /* options: 0x38FE text, 80160AAC/80160B8C/80061860 preps with
       8006508C/80065774 tails; gate 6434(). */
    func_80160AAC();
    func_800F6564(0x38FE);
    if (func_800F6434() != 0)
        goto L15EC28;
    func_800F4248(0x7F);
    func_800F8188(0x38FE);
    func_8006508C();
    return;
L15EC28:
    func_80160B8C();
    func_80061860();
    func_800F6564(0x3550);
    func_800F9200();
    func_80065774();
    func_800F93DC();
    func_800F8188(0x3550);
    return;
}
